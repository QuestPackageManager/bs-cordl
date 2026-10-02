#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFutureCompletionBaseHeaderEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFutureCompletionBaseHeaderEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT.get_futureResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::get_futureResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(), { "get_futureResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, void*,
                                                                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e41590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e415a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::get_futureResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(), { "get_futureResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type, void* next,
                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, next, futureResult);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type,
                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrResult futureResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, futureResult);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_futureResult_k__BackingField", ty:
// "::UnityEngine::XR::OpenXR::NativeTypes::XrResult", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::XrFutureCompletionBaseHeaderEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _futureResult_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_futureResult_k__BackingField = _futureResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCompletionBaseHeaderEXT::XrFutureCompletionBaseHeaderEXT() {}
