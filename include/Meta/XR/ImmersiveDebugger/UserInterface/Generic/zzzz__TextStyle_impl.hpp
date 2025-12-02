#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/TextStyle.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__TextStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x584af18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextAnchor& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_textAlignement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAlignement;
}
constexpr ::UnityEngine::TextAnchor const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_textAlignement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAlignement;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_set_textAlignement(::UnityEngine::TextAnchor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textAlignement = value;
}
constexpr ::UnityW<::UnityEngine::Font>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_font() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___font;
}
constexpr ::UnityW<::UnityEngine::Font> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_font() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___font;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_set_font(::UnityW<::UnityEngine::Font> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___font)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSize;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSize;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_set_fontSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontSize = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle::TextStyle() {}
