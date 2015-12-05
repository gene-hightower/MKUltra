#include <jni.h>

#include <iostream>
#include <vector>

void create_jvm(JavaVM** jvm, JNIEnv** env)
{
  std::vector<std::string> opt_strs{
      // "-verbose:jni",
      // "-verbose:class",
      "-Dswing.useSystemFontSettings=true",
  };

  std::vector<JavaVMOption> options;

  for (auto const& o_s : opt_strs) {
    JavaVMOption jop;
    jop.optionString = const_cast<char*>(o_s.c_str());
    jop.extraInfo = nullptr;
    options.push_back(jop);
  };

  JavaVMInitArgs vm_args;
  vm_args.version = JNI_VERSION_1_8;
  vm_args.nOptions = options.size();
  vm_args.options = &*options.begin();
  vm_args.ignoreUnrecognized = false;

  JNI_CreateJavaVM(jvm, reinterpret_cast<void**>(env), &vm_args);

  if ((nullptr == *jvm) || (nullptr == *env)) {
    std::cerr << "failed to create JavaVM" << std::endl;
    exit(EXIT_FAILURE);
  }
}

int main()
{
  JavaVM* jvm;
  JNIEnv* env;

  create_jvm(&jvm, &env);

  jclass string_class = env->FindClass("java/lang/String");
  if (nullptr == string_class) {
    std::cerr << "could not find String class" << std::endl;
    exit(EXIT_FAILURE);
  }
}
