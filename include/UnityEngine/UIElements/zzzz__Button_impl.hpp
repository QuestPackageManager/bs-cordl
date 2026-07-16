#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Button.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Image_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationSubmitEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlImageAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Button_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button_UxmlFactory::*)()>(&::UnityEngine::UIElements::Button_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d35a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Button_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Button_UxmlFactory* UnityEngine::UIElements::Button_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Button_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Button_UxmlFactory::Button_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Button_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button_UxmlTraits::*)()>(&::UnityEngine::UIElements::Button_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d35aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Button_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6d35b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::Button_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription*& UnityEngine::UIElements::Button_UxmlTraits::__cordl_internal_get_m_IconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription* const& UnityEngine::UIElements::Button_UxmlTraits::__cordl_internal_get_m_IconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr void UnityEngine::UIElements::Button_UxmlTraits::__cordl_internal_set_m_IconImage(::UnityEngine::UIElements::UxmlImageAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IconImage = value;
}
inline void UnityEngine::UIElements::Button_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Button_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                             ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Button_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::Button_UxmlTraits* UnityEngine::UIElements::Button_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Button_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Button_UxmlTraits::Button_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Button.get_clickable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Clickable* (::UnityEngine::UIElements::Button::*)()>(&::UnityEngine::UIElements::Button::get_clickable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d34e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "get_clickable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.set_clickable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)(::UnityEngine::UIElements::Clickable*)>(&::UnityEngine::UIElements::Button::set_clickable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d34e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "set_clickable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Clickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.get_iconImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::Button::*)()>(&::UnityEngine::UIElements::Button::get_iconImage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d34e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "get_iconImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.set_iconImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)(::UnityEngine::UIElements::Background)>(&::UnityEngine::UIElements::Button::set_iconImage)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6d34e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "set_iconImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::Button::*)()>(&::UnityEngine::UIElements::Button::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d353d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ::i2c::class_of<::UnityEngine::UIElements::Button*>(), 203 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)(::StringW)>(&::UnityEngine::UIElements::Button::set_text)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6d353f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ::i2c::class_of<::UnityEngine::UIElements::Button*>(), 204 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)()>(&::UnityEngine::UIElements::Button::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d35554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)(::UnityEngine::UIElements::Background, ::System::Action*)>(
    &::UnityEngine::UIElements::Button::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d35588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)(::System::Action*)>(&::UnityEngine::UIElements::Button::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6d355c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.OnNavigationSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)(::UnityEngine::UIElements::NavigationSubmitEvent*)>(
    &::UnityEngine::UIElements::Button::OnNavigationSubmit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d35760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(),
                                                                                           { "OnNavigationSubmit", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationSubmitEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.DoMeasure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::Button::*)(
    float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode)>(&::UnityEngine::UIElements::Button::DoMeasure)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d3579c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ::i2c::class_of<::UnityEngine::UIElements::Button*>(), 134 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.UpdateButtonHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)()>(&::UnityEngine::UIElements::Button::UpdateButtonHierarchy)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6d351c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "UpdateButtonHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Button.ResetButtonHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Button::*)()>(&::UnityEngine::UIElements::Button::ResetButtonHierarchy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6d350d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "ResetButtonHierarchy", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Clickable*& UnityEngine::UIElements::Button::__cordl_internal_get_m_Clickable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clickable;
}
constexpr ::UnityEngine::UIElements::Clickable* const& UnityEngine::UIElements::Button::__cordl_internal_get_m_Clickable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clickable;
}
constexpr void UnityEngine::UIElements::Button::__cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clickable = value;
}
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::Button::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::Button::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr void UnityEngine::UIElements::Button::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElement = value;
}
constexpr ::UnityEngine::UIElements::Image*& UnityEngine::UIElements::Button::__cordl_internal_get_m_ImageElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImageElement;
}
constexpr ::UnityEngine::UIElements::Image* const& UnityEngine::UIElements::Button::__cordl_internal_get_m_ImageElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImageElement;
}
constexpr void UnityEngine::UIElements::Button::__cordl_internal_set_m_ImageElement(::UnityEngine::UIElements::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImageElement = value;
}
constexpr ::UnityEngine::UIElements::Background& UnityEngine::UIElements::Button::__cordl_internal_get_m_IconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr ::UnityEngine::UIElements::Background const& UnityEngine::UIElements::Button::__cordl_internal_get_m_IconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr void UnityEngine::UIElements::Button::__cordl_internal_set_m_IconImage(::UnityEngine::UIElements::Background value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IconImage = value;
}
constexpr ::StringW& UnityEngine::UIElements::Button::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& UnityEngine::UIElements::Button::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::Button::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
inline void UnityEngine::UIElements::Button::setStaticF_iconImageProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "iconImageProperty", ::UnityEngine::UIElements::Button*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Button::getStaticF_iconImageProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "iconImageProperty", ::UnityEngine::UIElements::Button*>();
}
inline void UnityEngine::UIElements::Button::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Button*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Button::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Button*>();
}
inline void UnityEngine::UIElements::Button::setStaticF_iconUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconUssClassName", ::UnityEngine::UIElements::Button*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Button::getStaticF_iconUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconUssClassName", ::UnityEngine::UIElements::Button*>();
}
inline void UnityEngine::UIElements::Button::setStaticF_iconOnlyUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconOnlyUssClassName", ::UnityEngine::UIElements::Button*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Button::getStaticF_iconOnlyUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconOnlyUssClassName", ::UnityEngine::UIElements::Button*>();
}
inline void UnityEngine::UIElements::Button::setStaticF_imageUSSClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "imageUSSClassName", ::UnityEngine::UIElements::Button*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Button::getStaticF_imageUSSClassName() {
  return ::cordl_internals::getStaticField<::StringW, "imageUSSClassName", ::UnityEngine::UIElements::Button*>();
}
inline void UnityEngine::UIElements::Button::setStaticF_NonEmptyString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NonEmptyString", ::UnityEngine::UIElements::Button*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Button::getStaticF_NonEmptyString() {
  return ::cordl_internals::getStaticField<::StringW, "NonEmptyString", ::UnityEngine::UIElements::Button*>();
}
inline ::UnityEngine::UIElements::Clickable* UnityEngine::UIElements::Button::get_clickable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "get_clickable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Clickable*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Button::set_clickable(::UnityEngine::UIElements::Clickable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "set_clickable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Clickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::Button::get_iconImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "get_iconImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Button::set_iconImage(::UnityEngine::UIElements::Background value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "set_iconImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::Button::get_text() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Button*>(), 203 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Button::set_text(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Button*>(), 204 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Button::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Button::_ctor(::UnityEngine::UIElements::Background iconImage, ::System::Action* clickEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iconImage, clickEvent);
}
inline void UnityEngine::UIElements::Button::_ctor(::System::Action* clickEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clickEvent);
}
inline void UnityEngine::UIElements::Button::OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "OnNavigationSubmit", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationSubmitEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::Button::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                                                         ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Button*>(), 134 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
inline void UnityEngine::UIElements::Button::UpdateButtonHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "UpdateButtonHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Button::ResetButtonHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Button*>(), { "ResetButtonHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Button* UnityEngine::UIElements::Button::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Button*>());
}
inline ::UnityEngine::UIElements::Button* UnityEngine::UIElements::Button::New_ctor(::UnityEngine::UIElements::Background iconImage, ::System::Action* clickEvent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Button*>(iconImage, clickEvent));
}
inline ::UnityEngine::UIElements::Button* UnityEngine::UIElements::Button::New_ctor(::System::Action* clickEvent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Button*>(clickEvent));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Button::Button() {}
