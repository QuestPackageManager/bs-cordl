#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFutureCompletionEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFutureCompletionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e415b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e415b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT.get_futureResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::get_futureResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e415c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(), { "get_futureResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::*)(void*, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e415c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e415e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::get_next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::get_futureResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(), { "get_futureResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::_ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, futureResult);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, futureResult);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_futureResult_k__BackingField", ty:
// "::UnityEngine::XR::OpenXR::NativeTypes::XrResult", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::XrFutureCompletionEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField,
                                                                                               void* _next_k__BackingField,
                                                                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_futureResult_k__BackingField = _futureResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionEXT::XrFutureCompletionEXT() {}
