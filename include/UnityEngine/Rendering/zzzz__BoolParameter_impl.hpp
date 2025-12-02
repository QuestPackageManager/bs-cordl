#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BoolParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType::BoolParameter_DisplayType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType::BoolParameter_DisplayType() {}
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType UnityEngine::Rendering::BoolParameter_DisplayType::Checkbox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType UnityEngine::Rendering::BoolParameter_DisplayType::EnumPopup{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::BoolParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BoolParameter::*)(bool, bool)>(&::UnityEngine::Rendering::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65ad9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BoolParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BoolParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BoolParameter::*)(bool, ::UnityEngine::Rendering::BoolParameter_DisplayType, bool)>(
    &::UnityEngine::Rendering::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65ada34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BoolParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BoolParameter_DisplayType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType& UnityEngine::Rendering::BoolParameter::__cordl_internal_get_displayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayType;
}
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType const& UnityEngine::Rendering::BoolParameter::__cordl_internal_get_displayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayType;
}
constexpr void UnityEngine::Rendering::BoolParameter::__cordl_internal_set_displayType(::UnityEngine::Rendering::BoolParameter_DisplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayType = value;
}
inline void UnityEngine::Rendering::BoolParameter::_ctor(bool value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BoolParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::BoolParameter::_ctor(bool value, ::UnityEngine::Rendering::BoolParameter_DisplayType displayType, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BoolParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BoolParameter_DisplayType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, displayType, overrideState);
}
inline ::UnityEngine::Rendering::BoolParameter* UnityEngine::Rendering::BoolParameter::New_ctor(bool value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BoolParameter*>(value, overrideState));
}
inline ::UnityEngine::Rendering::BoolParameter* UnityEngine::Rendering::BoolParameter::New_ctor(bool value, ::UnityEngine::Rendering::BoolParameter_DisplayType displayType, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BoolParameter*>(value, displayType, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BoolParameter::BoolParameter() {}
