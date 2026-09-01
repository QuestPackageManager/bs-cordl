#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\ThrowHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Bindings/zzzz__ThrowHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ThrowHelper.ThrowArgumentNullException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::UnityEngine::Bindings::ThrowHelper::ThrowArgumentNullException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6afa2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ThrowHelper*>(), { "ThrowArgumentNullException", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::ThrowHelper.ThrowNullReferenceException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Bindings::ThrowHelper::ThrowNullReferenceException)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af4468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ThrowHelper*>(), { "ThrowNullReferenceException", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::ThrowHelper::ThrowArgumentNullException(::System::Object* obj, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ThrowHelper*>(),
                                                                                         { "ThrowArgumentNullException", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, parameterName);
}
inline void UnityEngine::Bindings::ThrowHelper::ThrowNullReferenceException(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ThrowHelper*>(), { "ThrowNullReferenceException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ThrowHelper::ThrowHelper() {}
