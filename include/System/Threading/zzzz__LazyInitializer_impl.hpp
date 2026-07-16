#pragma once
// IWYU pragma private; include "System/Threading/LazyInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__LazyInitializer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::LazyInitializer.EnsureLockInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<::System::Object*>)>(&::System::Threading::LazyInitializer::EnsureLockInitialized)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ca69cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(), { "EnsureLockInitialized", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T System::Threading::LazyInitializer::EnsureInitialized(::by_ref<T> target) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(), { "EnsureInitialized", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target);
}
template <typename T> inline T System::Threading::LazyInitializer::EnsureInitializedCore(::by_ref<T> target) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(), { "EnsureInitializedCore", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target);
}
template <typename T> inline T System::Threading::LazyInitializer::EnsureInitialized(::by_ref<T> target, ::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(),
                                                           { "EnsureInitialized", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, valueFactory);
}
template <typename T> inline T System::Threading::LazyInitializer::EnsureInitializedCore(::by_ref<T> target, ::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(),
                                                           { "EnsureInitializedCore", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, valueFactory);
}
template <typename T>
inline T System::Threading::LazyInitializer::EnsureInitialized(::by_ref<T> target, ::by_ref<bool> initialized, ::by_ref<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(),
                          { "EnsureInitialized",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, initialized, syncLock, valueFactory);
}
template <typename T>
inline T System::Threading::LazyInitializer::EnsureInitializedCore(::by_ref<T> target, ::by_ref<bool> initialized, ::by_ref<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(),
                          { "EnsureInitializedCore",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, initialized, syncLock, valueFactory);
}
template <typename T> inline T System::Threading::LazyInitializer::EnsureInitialized(::by_ref<T> target, ::by_ref<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Threading::LazyInitializer*>(),
                       { "EnsureInitialized", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, syncLock, valueFactory);
}
template <typename T> inline T System::Threading::LazyInitializer::EnsureInitializedCore(::by_ref<T> target, ::by_ref<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::LazyInitializer*>(),
          { "EnsureInitializedCore", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, syncLock, valueFactory);
}
inline ::System::Object* System::Threading::LazyInitializer::EnsureLockInitialized(::by_ref<::System::Object*> syncLock) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LazyInitializer*>(), { "EnsureLockInitialized", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, syncLock);
}
// Ctor Parameters []
constexpr ::System::Threading::LazyInitializer::LazyInitializer() {}
