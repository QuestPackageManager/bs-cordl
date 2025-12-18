#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/HierarchyIconAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__HierarchyIconAttribute_def.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Icon_def.hpp"
//  Writing Method size for method: ::OculusStudios::HierarchyIcons::HierarchyIconAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::HierarchyIcons::HierarchyIconAttribute::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::OculusStudios::HierarchyIcons::HierarchyIconAttribute::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d7f690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::HierarchyIconAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::HierarchyIcons::HierarchyIconAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::HierarchyIcons::HierarchyIconAttribute::*)(
    ::StringW, ::OculusStudios::HierarchyIcons::Icon, ::StringW, ::StringW, ::OculusStudios::HierarchyIcons::Icon, ::StringW)>(&::OculusStudios::HierarchyIcons::HierarchyIconAttribute::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d7f764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::HierarchyIconAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::HierarchyIcons::Icon>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::HierarchyIcons::Icon>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_gameObjectTooltip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectTooltip;
}
constexpr ::StringW const& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_gameObjectTooltip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectTooltip;
}
constexpr void OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_set_gameObjectTooltip(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectTooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_gameObjectIconPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectIconPath;
}
constexpr ::StringW const& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_gameObjectIconPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectIconPath;
}
constexpr void OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_set_gameObjectIconPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectIconPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_gameObjectIconTint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectIconTint;
}
constexpr ::UnityEngine::Color const& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_gameObjectIconTint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectIconTint;
}
constexpr void OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_set_gameObjectIconTint(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectIconTint = value;
}
constexpr ::StringW& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_parentTooltip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentTooltip;
}
constexpr ::StringW const& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_parentTooltip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentTooltip;
}
constexpr void OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_set_parentTooltip(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentTooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_parentIconPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentIconPath;
}
constexpr ::StringW const& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_parentIconPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentIconPath;
}
constexpr void OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_set_parentIconPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentIconPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_parentIconTint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentIconTint;
}
constexpr ::UnityEngine::Color const& OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_get_parentIconTint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentIconTint;
}
constexpr void OculusStudios::HierarchyIcons::HierarchyIconAttribute::__cordl_internal_set_parentIconTint(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentIconTint = value;
}
inline void OculusStudios::HierarchyIcons::HierarchyIconAttribute::_ctor(::StringW gameObjectTooltip, ::StringW gameObjectIconPath, ::StringW gameObjectIconHex, ::StringW parentTooltip,
                                                                         ::StringW parentIconPath, ::StringW parentIconHex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::HierarchyIconAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObjectTooltip, gameObjectIconPath, gameObjectIconHex, parentTooltip, parentIconPath, parentIconHex);
}
inline void OculusStudios::HierarchyIcons::HierarchyIconAttribute::_ctor(::StringW gameObjectTooltip, ::OculusStudios::HierarchyIcons::Icon gameObjectIconPath, ::StringW gameObjectIconHex,
                                                                         ::StringW parentTooltip, ::OculusStudios::HierarchyIcons::Icon parentIconPath, ::StringW parentIconHex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::HierarchyIconAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::HierarchyIcons::Icon>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::HierarchyIcons::Icon>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObjectTooltip, gameObjectIconPath, gameObjectIconHex, parentTooltip, parentIconPath, parentIconHex);
}
inline ::OculusStudios::HierarchyIcons::HierarchyIconAttribute* OculusStudios::HierarchyIcons::HierarchyIconAttribute::New_ctor(::StringW gameObjectTooltip, ::StringW gameObjectIconPath,
                                                                                                                                ::StringW gameObjectIconHex, ::StringW parentTooltip,
                                                                                                                                ::StringW parentIconPath, ::StringW parentIconHex) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::OculusStudios::HierarchyIcons::HierarchyIconAttribute*>(gameObjectTooltip, gameObjectIconPath, gameObjectIconHex, parentTooltip, parentIconPath, parentIconHex));
}
inline ::OculusStudios::HierarchyIcons::HierarchyIconAttribute*
OculusStudios::HierarchyIcons::HierarchyIconAttribute::New_ctor(::StringW gameObjectTooltip, ::OculusStudios::HierarchyIcons::Icon gameObjectIconPath, ::StringW gameObjectIconHex,
                                                                ::StringW parentTooltip, ::OculusStudios::HierarchyIcons::Icon parentIconPath, ::StringW parentIconHex) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::OculusStudios::HierarchyIcons::HierarchyIconAttribute*>(gameObjectTooltip, gameObjectIconPath, gameObjectIconHex, parentTooltip, parentIconPath, parentIconHex));
}
// Ctor Parameters []
constexpr ::OculusStudios::HierarchyIcons::HierarchyIconAttribute::HierarchyIconAttribute() {}
