#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleValueHandle.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleValueType (::UnityEngine::UIElements::StyleValueHandle::*)()>(
    &::UnityEngine::UIElements::StyleValueHandle::get_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9c8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "get_valueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.set_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleValueHandle::*)(::UnityEngine::UIElements::StyleValueType)>(
    &::UnityEngine::UIElements::StyleValueHandle::set_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9d420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "set_valueType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleValueHandle::get_valueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "get_valueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueType>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleValueHandle::set_valueType(::UnityEngine::UIElements::StyleValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "set_valueType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ValueType", ty: "::UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueHandle::StyleValueHandle(::UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept {
  this->m_ValueType = m_ValueType;
  this->valueIndex = valueIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueHandle::StyleValueHandle() {}
