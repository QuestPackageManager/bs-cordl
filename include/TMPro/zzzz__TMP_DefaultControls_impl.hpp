#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_DefaultControls_def.hpp"
#include "TMPro/zzzz__TMP_DefaultControls_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "standard", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "background", ty:
// "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "inputField", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "knob", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "checkmark", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "dropdown", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "mask", ty:
// "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::TMPro::__TMP_DefaultControls__Resources::__TMP_DefaultControls__Resources(::UnityW<::UnityEngine::Sprite> standard, ::UnityW<::UnityEngine::Sprite> background,
                                                                                      ::UnityW<::UnityEngine::Sprite> inputField, ::UnityW<::UnityEngine::Sprite> knob,
                                                                                      ::UnityW<::UnityEngine::Sprite> checkmark, ::UnityW<::UnityEngine::Sprite> dropdown,
                                                                                      ::UnityW<::UnityEngine::Sprite> mask) noexcept {
  this->standard = standard;
  this->background = background;
  this->inputField = inputField;
  this->knob = knob;
  this->checkmark = checkmark;
  this->dropdown = dropdown;
  this->mask = mask;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_DefaultControls__Resources::__TMP_DefaultControls__Resources() {}
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateUIElementRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::Vector2)>(
    &::TMPro::TMP_DefaultControls::CreateUIElementRoot)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c024c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateUIElementRoot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateUIObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::GameObject*)>(
    &::TMPro::TMP_DefaultControls::CreateUIObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c0256c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateUIObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetDefaultTextValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_DefaultControls::SetDefaultTextValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c0272c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetDefaultTextValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetDefaultColorTransitionValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::Selectable*)>(&::TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c027b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetDefaultColorTransitionValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetParentAndAlign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::TMPro::TMP_DefaultControls::SetParentAndAlign)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2c0262c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetParentAndAlign", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetLayerRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t)>(&::TMPro::TMP_DefaultControls::SetLayerRecursively)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c027c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetLayerRecursively", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::__TMP_DefaultControls__Resources)>(
    &::TMPro::TMP_DefaultControls::CreateScrollbar)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2c028a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateScrollbar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::__TMP_DefaultControls__Resources)>(
    &::TMPro::TMP_DefaultControls::CreateButton)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2c02b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateButton", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::__TMP_DefaultControls__Resources)>(
    &::TMPro::TMP_DefaultControls::CreateText)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2c02e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateInputField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::__TMP_DefaultControls__Resources)>(
    &::TMPro::TMP_DefaultControls::CreateInputField)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x2c02ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateInputField", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateDropdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::__TMP_DefaultControls__Resources)>(
    &::TMPro::TMP_DefaultControls::CreateDropdown)> {
  constexpr static std::size_t size = 0xdf4;
  constexpr static std::size_t addrs = 0x2c036cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateDropdown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_DefaultControls::setStaticF_s_TextElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_TextElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_DefaultControls::getStaticF_s_TextElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_TextElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_ThickElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_DefaultControls::getStaticF_s_ThickElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_ThinElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_DefaultControls::getStaticF_s_ThinElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_DefaultSelectableColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TMPro::TMP_DefaultControls::getStaticF_s_DefaultSelectableColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_TextColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TMPro::TMP_DefaultControls::getStaticF_s_TextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get>();
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateUIElementRoot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, name, size);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateUIObject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, name, parent);
}
inline void TMPro::TMP_DefaultControls::SetDefaultTextValues(::TMPro::TMP_Text* lbl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetDefaultTextValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lbl);
}
inline void TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetDefaultColorTransitionValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slider);
}
inline void TMPro::TMP_DefaultControls::SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetParentAndAlign", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, child, parent);
}
inline void TMPro::TMP_DefaultControls::SetLayerRecursively(::UnityEngine::GameObject* go, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "SetLayerRecursively", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, layer);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateScrollbar(::TMPro::__TMP_DefaultControls__Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateScrollbar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateButton(::TMPro::__TMP_DefaultControls__Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateButton", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateText(::TMPro::__TMP_DefaultControls__Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateInputField(::TMPro::__TMP_DefaultControls__Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateInputField", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateDropdown(::TMPro::__TMP_DefaultControls__Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DefaultControls*>::get(), "CreateDropdown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_DefaultControls__Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_DefaultControls::TMP_DefaultControls() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
