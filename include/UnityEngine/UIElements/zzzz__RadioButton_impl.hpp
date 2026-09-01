#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\RadioButton.hpp"
#include "UnityEngine/UIElements/zzzz__BaseBoolField_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RadioButton_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__RadioButton_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton_UxmlFactory::*)()>(&::UnityEngine::UIElements::RadioButton_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d654b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RadioButton_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RadioButton_UxmlFactory* UnityEngine::UIElements::RadioButton_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButton_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButton_UxmlFactory::RadioButton_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::RadioButton_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d65520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton_UxmlTraits::*)()>(&::UnityEngine::UIElements::RadioButton_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d65658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::RadioButton_UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::RadioButton_UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::RadioButton_UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
inline void UnityEngine::UIElements::RadioButton_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                  ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::RadioButton_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RadioButton_UxmlTraits* UnityEngine::UIElements::RadioButton_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButton_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButton_UxmlTraits::RadioButton_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::RadioButton::*)()>(&::UnityEngine::UIElements::RadioButton::get_value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d64bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 143 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)(bool)>(&::UnityEngine::UIElements::RadioButton::set_value)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d64c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 144 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)()>(&::UnityEngine::UIElements::RadioButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d64dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)(::StringW)>(&::UnityEngine::UIElements::RadioButton::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6d64e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.OnOptionAttachToPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::RadioButton::OnOptionAttachToPanel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d650bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(),
                                                                                           { "OnOptionAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.OnOptionDetachFromPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::RadioButton::OnOptionDetachFromPanel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d65130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(),
                                                                                           { "OnOptionDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.InitLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)()>(&::UnityEngine::UIElements::RadioButton::InitLabel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d651a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 154 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.ToggleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)()>(&::UnityEngine::UIElements::RadioButton::ToggleValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d65224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 155 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.UnityEngine_UIElements_IGroupBoxOption_SetSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)(bool)>(
    &::UnityEngine::UIElements::RadioButton::UnityEngine_UIElements_IGroupBoxOption_SetSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d65264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { "UnityEngine.UIElements.IGroupBoxOption.SetSelected", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)(bool)>(&::UnityEngine::UIElements::RadioButton::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d65274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 153 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.UpdateCheckmark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)()>(&::UnityEngine::UIElements::RadioButton::UpdateCheckmark)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6d64d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { "UpdateCheckmark", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButton.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButton::*)()>(&::UnityEngine::UIElements::RadioButton::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d65290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 152 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::RadioButton::__cordl_internal_get_m_CheckmarkBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckmarkBackground;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::RadioButton::__cordl_internal_get_m_CheckmarkBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckmarkBackground;
}
constexpr void UnityEngine::UIElements::RadioButton::__cordl_internal_set_m_CheckmarkBackground(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CheckmarkBackground = value;
}
inline void UnityEngine::UIElements::RadioButton::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RadioButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButton::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RadioButton*>();
}
inline void UnityEngine::UIElements::RadioButton::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::RadioButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButton::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::RadioButton*>();
}
inline void UnityEngine::UIElements::RadioButton::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::RadioButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButton::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::RadioButton*>();
}
inline void UnityEngine::UIElements::RadioButton::setStaticF_checkmarkBackgroundUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkBackgroundUssClassName", ::UnityEngine::UIElements::RadioButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButton::getStaticF_checkmarkBackgroundUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkBackgroundUssClassName", ::UnityEngine::UIElements::RadioButton*>();
}
inline void UnityEngine::UIElements::RadioButton::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::UnityEngine::UIElements::RadioButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButton::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::UnityEngine::UIElements::RadioButton*>();
}
inline void UnityEngine::UIElements::RadioButton::setStaticF_textUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassName", ::UnityEngine::UIElements::RadioButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButton::getStaticF_textUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::UnityEngine::UIElements::RadioButton*>();
}
inline bool UnityEngine::UIElements::RadioButton::get_value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 143 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButton::set_value(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 144 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RadioButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButton::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::RadioButton::OnOptionAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(),
                                                                                         { "OnOptionAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::RadioButton::OnOptionDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(),
                                                                                         { "OnOptionDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::RadioButton::InitLabel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButton::ToggleValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 155 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButton::UnityEngine_UIElements_IGroupBoxOption_SetSelected(bool selected) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { "UnityEngine.UIElements.IGroupBoxOption.SetSelected", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void UnityEngine::UIElements::RadioButton::SetValueWithoutNotify(bool newValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::RadioButton::UpdateCheckmark() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), { "UpdateCheckmark", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButton::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButton*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RadioButton* UnityEngine::UIElements::RadioButton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButton*>());
}
inline ::UnityEngine::UIElements::RadioButton* UnityEngine::UIElements::RadioButton::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButton*>(label));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBoxOption"
constexpr UnityEngine::UIElements::RadioButton::operator ::UnityEngine::UIElements::IGroupBoxOption*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBoxOption*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGroupBoxOption"
constexpr ::UnityEngine::UIElements::IGroupBoxOption* UnityEngine::UIElements::RadioButton::i___UnityEngine__UIElements__IGroupBoxOption() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBoxOption*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButton::RadioButton() {}
