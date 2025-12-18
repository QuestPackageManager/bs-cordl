#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/LayoutStyle.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout::LayoutStyle_Layout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout::LayoutStyle_Layout() {}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout::Fixed{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout::Fill{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout::FillHorizontal{ static_cast<int32_t>(
    0x2) };
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout::FillVertical{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction::LayoutStyle_Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction::LayoutStyle_Direction() {}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction::Left{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction::Right{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction::Down{ static_cast<int32_t>(0x2) };
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction::Up{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.get_LeftMargin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_LeftMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_LeftMargin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.get_TopMargin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_TopMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b159c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_TopMargin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.get_RightMargin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_RightMargin)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b15a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_RightMargin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.get_BottomMargin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_BottomMargin)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b15c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_BottomMargin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.get_TopLeftMargin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_TopLeftMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b15dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(),
                                                 "get_TopLeftMargin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.get_BottomRightMargin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_BottomRightMargin)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(),
                                                 "get_BottomRightMargin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.SetHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::SetHeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58b15e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "SetHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.SetWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::SetWidth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58b160c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "SetWidth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle.SetIndent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::SetIndent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58b1634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "SetIndent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_flexDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flexDirection;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_flexDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flexDirection;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_flexDirection(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flexDirection = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_layout(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layout = value;
}
constexpr ::UnityEngine::TextAnchor& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_anchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchor;
}
constexpr ::UnityEngine::TextAnchor const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_anchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_anchor(::UnityEngine::TextAnchor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anchor = value;
}
constexpr ::UnityEngine::TextAnchor& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_pivot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pivot;
}
constexpr ::UnityEngine::TextAnchor const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_pivot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pivot;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_pivot(::UnityEngine::TextAnchor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pivot = value;
}
constexpr ::UnityEngine::Vector2& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr ::UnityEngine::Vector2 const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_size(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr ::UnityEngine::Vector2& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_margin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___margin;
}
constexpr ::UnityEngine::Vector2 const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_margin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___margin;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_margin(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___margin = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_useBottomRightMargin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBottomRightMargin;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_useBottomRightMargin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBottomRightMargin;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_useBottomRightMargin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useBottomRightMargin = value;
}
constexpr ::UnityEngine::Vector2& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_bottomRightMargin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomRightMargin;
}
constexpr ::UnityEngine::Vector2 const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_bottomRightMargin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomRightMargin;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_bottomRightMargin(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomRightMargin = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_spacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spacing;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_spacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spacing;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_spacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spacing = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_masks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masks;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_masks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masks;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_masks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___masks = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_adaptHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptHeight;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_adaptHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptHeight;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_adaptHeight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___adaptHeight = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_autoFitChildren() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoFitChildren;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_autoFitChildren() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoFitChildren;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_autoFitChildren(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoFitChildren = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_isOverlayCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOverlayCanvas;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_get_isOverlayCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOverlayCanvas;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::__cordl_internal_set_isOverlayCanvas(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOverlayCanvas = value;
}
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_LeftMargin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_LeftMargin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_TopMargin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_TopMargin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_RightMargin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_RightMargin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_BottomMargin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_BottomMargin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_TopLeftMargin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "get_TopLeftMargin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::get_BottomRightMargin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(),
                                               "get_BottomRightMargin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::SetHeight(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "SetHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, height);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::SetWidth(float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "SetWidth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::SetIndent(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), "SetIndent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle::LayoutStyle() {}
