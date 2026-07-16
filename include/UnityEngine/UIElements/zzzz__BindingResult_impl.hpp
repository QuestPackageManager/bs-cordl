#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingResult.hpp"
#include "UnityEngine/UIElements/zzzz__BindingStatus_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingResult.get_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingStatus (::UnityEngine::UIElements::BindingResult::*)()>(
    &::UnityEngine::UIElements::BindingResult::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c2d5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingResult>(), { "get_status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingResult.get_message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::BindingResult::*)()>(&::UnityEngine::UIElements::BindingResult::get_message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c2d5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingResult>(), { "get_message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindingResult::*)(::UnityEngine::UIElements::BindingStatus, ::StringW)>(
    &::UnityEngine::UIElements::BindingResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c2d5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingResult>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingStatus>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BindingStatus UnityEngine::UIElements::BindingResult::get_status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingResult>(), { "get_status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingStatus>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::BindingResult::get_message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingResult>(), { "get_message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BindingResult::_ctor(::UnityEngine::UIElements::BindingStatus status, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingResult>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingStatus>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, status, message);
}
// Ctor Parameters [CppParam { name: "_status_k__BackingField", ty: "::UnityEngine::UIElements::BindingStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_message_k__BackingField", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingResult::BindingResult(::UnityEngine::UIElements::BindingStatus _status_k__BackingField, ::StringW _message_k__BackingField) noexcept {
  this->_status_k__BackingField = _status_k__BackingField;
  this->_message_k__BackingField = _message_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingResult::BindingResult() {}
