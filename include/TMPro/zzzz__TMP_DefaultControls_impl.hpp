#pragma once
// IWYU pragma private; include "TMPro\TMP_DefaultControls.hpp"
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
// Ctor Parameters [CppParam { name: "standard", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "background", ty: "::UnityW<::UnityEngine::Sprite>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "inputField", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "knob", ty:
// "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "checkmark", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "dropdown", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mask", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::TMPro::TMP_DefaultControls_Resources::TMP_DefaultControls_Resources(::UnityW<::UnityEngine::Sprite> standard, ::UnityW<::UnityEngine::Sprite> background,
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
constexpr ::TMPro::TMP_DefaultControls_Resources::TMP_DefaultControls_Resources() {}
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateUIElementRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::Vector2)>(&::TMPro::TMP_DefaultControls::CreateUIElementRoot)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x694acd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateUIElementRoot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateUIObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::GameObject*)>(&::TMPro::TMP_DefaultControls::CreateUIObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x694ad80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateUIObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetDefaultTextValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_DefaultControls::SetDefaultTextValues)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x694af54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "SetDefaultTextValues", {}, { ::i2c::type_of<::TMPro::TMP_Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetDefaultColorTransitionValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::Selectable*)>(&::TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x694afe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "SetDefaultColorTransitionValues", {}, { ::i2c::type_of<::UnityEngine::UI::Selectable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetParentAndAlign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::TMPro::TMP_DefaultControls::SetParentAndAlign)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x694ae4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(),
                                                             { "SetParentAndAlign", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.SetLayerRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t)>(&::TMPro::TMP_DefaultControls::SetLayerRecursively)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x694b044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "SetLayerRecursively", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::TMP_DefaultControls_Resources)>(&::TMPro::TMP_DefaultControls::CreateScrollbar)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x694b12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateScrollbar", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::TMP_DefaultControls_Resources)>(&::TMPro::TMP_DefaultControls::CreateButton)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x694b41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateButton", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::TMP_DefaultControls_Resources)>(&::TMPro::TMP_DefaultControls::CreateText)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x694b744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateText", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateInputField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::TMP_DefaultControls_Resources)>(&::TMPro::TMP_DefaultControls::CreateInputField)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x694b7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateInputField", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DefaultControls.CreateDropdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::TMPro::TMP_DefaultControls_Resources)>(&::TMPro::TMP_DefaultControls::CreateDropdown)> {
  constexpr static std::size_t size = 0xe84;
  constexpr static std::size_t addrs = 0x694bfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateDropdown", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_DefaultControls::setStaticF_s_TextElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_TextElementSize", ::TMPro::TMP_DefaultControls*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_DefaultControls::getStaticF_s_TextElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_TextElementSize", ::TMPro::TMP_DefaultControls*>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_ThickElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ThickElementSize", ::TMPro::TMP_DefaultControls*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_DefaultControls::getStaticF_s_ThickElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ThickElementSize", ::TMPro::TMP_DefaultControls*>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_ThinElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ThinElementSize", ::TMPro::TMP_DefaultControls*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_DefaultControls::getStaticF_s_ThinElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ThinElementSize", ::TMPro::TMP_DefaultControls*>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_DefaultSelectableColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_DefaultSelectableColor", ::TMPro::TMP_DefaultControls*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TMPro::TMP_DefaultControls::getStaticF_s_DefaultSelectableColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DefaultSelectableColor", ::TMPro::TMP_DefaultControls*>();
}
inline void TMPro::TMP_DefaultControls::setStaticF_s_TextColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_TextColor", ::TMPro::TMP_DefaultControls*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TMPro::TMP_DefaultControls::getStaticF_s_TextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_TextColor", ::TMPro::TMP_DefaultControls*>();
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateUIElementRoot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, name, size);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateUIObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, name, parent);
}
inline void TMPro::TMP_DefaultControls::SetDefaultTextValues(::TMPro::TMP_Text* lbl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "SetDefaultTextValues", {}, { ::i2c::type_of<::TMPro::TMP_Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lbl);
}
inline void TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "SetDefaultColorTransitionValues", {}, { ::i2c::type_of<::UnityEngine::UI::Selectable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slider);
}
inline void TMPro::TMP_DefaultControls::SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(),
                                                           { "SetParentAndAlign", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, child, parent);
}
inline void TMPro::TMP_DefaultControls::SetLayerRecursively(::UnityEngine::GameObject* go, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "SetLayerRecursively", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, layer);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateScrollbar(::TMPro::TMP_DefaultControls_Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateScrollbar", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateButton(::TMPro::TMP_DefaultControls_Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateButton", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateText(::TMPro::TMP_DefaultControls_Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateText", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateInputField(::TMPro::TMP_DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateInputField", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> TMPro::TMP_DefaultControls::CreateDropdown(::TMPro::TMP_DefaultControls_Resources resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "CreateDropdown", {}, { ::i2c::type_of<::TMPro::TMP_DefaultControls_Resources>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, resources);
}
template <typename T> inline T TMPro::TMP_DefaultControls::AddComponent(::UnityEngine::GameObject* go) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DefaultControls*>(), { "AddComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, go);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_DefaultControls::TMP_DefaultControls() {}
