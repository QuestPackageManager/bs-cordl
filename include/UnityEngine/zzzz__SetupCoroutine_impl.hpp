#pragma once
// IWYU pragma private; include "UnityEngine\SetupCoroutine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SetupCoroutine_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::SetupCoroutine.InvokeMoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IEnumerator*, ::System::IntPtr)>(&::UnityEngine::SetupCoroutine::InvokeMoveNext)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6ade440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SetupCoroutine*>(),
                                                             { "InvokeMoveNext", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SetupCoroutine.InvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::StringW, ::System::Object*)>(&::UnityEngine::SetupCoroutine::InvokeMember)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6ade558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SetupCoroutine*>(),
                                                             { "InvokeMember", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SetupCoroutine::InvokeMoveNext(::System::Collections::IEnumerator* enumerator, ::System::IntPtr returnValueAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SetupCoroutine*>(), { "InvokeMoveNext", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enumerator, returnValueAddress);
}
inline ::System::Object* UnityEngine::SetupCoroutine::InvokeMember(::System::Object* behaviour, ::StringW name, ::System::Object* variable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SetupCoroutine*>(),
                                                           { "InvokeMember", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, behaviour, name, variable);
}
// Ctor Parameters []
constexpr ::UnityEngine::SetupCoroutine::SetupCoroutine() {}
