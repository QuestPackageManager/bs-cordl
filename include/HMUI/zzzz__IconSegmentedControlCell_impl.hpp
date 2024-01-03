#pragma once
#include "HMUI/zzzz__SegmentedControlCell_impl.hpp"
#include "HMUI/zzzz__IconSegmentedControlCell_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(::UnityEngine::Sprite*)>(&::HMUI::IconSegmentedControlCell::set_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211f724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_sprite", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.get_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::HMUI::IconSegmentedControlCell::*)()>(&::HMUI::IconSegmentedControlCell::get_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211f99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "get_sprite",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_hintText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(::StringW)>(&::HMUI::IconSegmentedControlCell::set_hintText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211f740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_hintText", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_iconSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(float_t)>(&::HMUI::IconSegmentedControlCell::set_iconSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x211f7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_iconSize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_hideBackgroundImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(bool)>(&::HMUI::IconSegmentedControlCell::set_hideBackgroundImage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x211f75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_hideBackgroundImage",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)()>(&::HMUI::IconSegmentedControlCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Image*& HMUI::IconSegmentedControlCell::__get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& HMUI::IconSegmentedControlCell::__get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void HMUI::IconSegmentedControlCell::__set__icon(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____icon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::HoverHint*& HMUI::IconSegmentedControlCell::__get__hoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& HMUI::IconSegmentedControlCell::__get__hoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr void HMUI::IconSegmentedControlCell::__set__hoverHint(::HMUI::HoverHint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverHint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& HMUI::IconSegmentedControlCell::__get__backgroundGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HMUI::IconSegmentedControlCell::__get__backgroundGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundGameObject;
}
constexpr void HMUI::IconSegmentedControlCell::__set__backgroundGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::IconSegmentedControlCell::set_sprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_sprite", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Sprite* HMUI::IconSegmentedControlCell::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "get_sprite",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(this, ___internal_method);
}
inline void HMUI::IconSegmentedControlCell::set_hintText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_hintText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::IconSegmentedControlCell::set_iconSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_iconSize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::IconSegmentedControlCell::set_hideBackgroundImage(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), "set_hideBackgroundImage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControlCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::IconSegmentedControlCell*>());
}
inline void HMUI::IconSegmentedControlCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::IconSegmentedControlCell::IconSegmentedControlCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
