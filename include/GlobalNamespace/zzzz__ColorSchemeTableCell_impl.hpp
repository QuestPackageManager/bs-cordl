#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeTableCell_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)(::StringW)>(&::GlobalNamespace::ColorSchemeTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d2448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ColorSchemeTableCell::*)()>(&::GlobalNamespace::ColorSchemeTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d246c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "get_text",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.set_showEditIcon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)(bool)>(
    &::GlobalNamespace::ColorSchemeTableCell::set_showEditIcon)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23d2490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "set_showEditIcon",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::ColorSchemeTableCell::SetColors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23d24b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "SetColors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)()>(&::GlobalNamespace::ColorSchemeTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d252c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ColorSchemeTableCell::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ColorSchemeTableCell::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::ColorSchemeTableCell::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeView>& GlobalNamespace::ColorSchemeTableCell::__cordl_internal_get__colorSchemeView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeView;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeView> const& GlobalNamespace::ColorSchemeTableCell::__cordl_internal_get__colorSchemeView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeView;
}
constexpr void GlobalNamespace::ColorSchemeTableCell::__cordl_internal_set__colorSchemeView(::UnityW<::GlobalNamespace::ColorSchemeView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemeView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeTableCell::__cordl_internal_get__editIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeTableCell::__cordl_internal_get__editIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editIcon;
}
constexpr void GlobalNamespace::ColorSchemeTableCell::__cordl_internal_set__editIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____editIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ColorSchemeTableCell::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::ColorSchemeTableCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "get_text",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeTableCell::set_showEditIcon(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "set_showEditIcon",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSchemeTableCell::SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color,
                                                             ::UnityEngine::Color environment1Color, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost,
                                                             ::UnityEngine::Color obstacleColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), "SetColors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberAColor, saberBColor, environment0Color, environment1Color, environmentColor0Boost, environmentColor1Boost,
                                                          obstacleColor);
}
inline ::GlobalNamespace::ColorSchemeTableCell* GlobalNamespace::ColorSchemeTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSchemeTableCell*>());
}
inline void GlobalNamespace::ColorSchemeTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeTableCell::ColorSchemeTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
