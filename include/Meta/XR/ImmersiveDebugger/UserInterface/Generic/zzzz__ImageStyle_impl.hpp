#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ImageStyle.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58b1568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___icon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___icon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_icon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___icon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_colorHover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorHover;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_colorHover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorHover;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_colorHover(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorHover = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_colorOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOff;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_colorOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOff;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_colorOff(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorOff = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_pixelDensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelDensityMultiplier;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_get_pixelDensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelDensityMultiplier;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::__cordl_internal_set_pixelDensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelDensityMultiplier = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle::ImageStyle() {}
