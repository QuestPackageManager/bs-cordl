#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\RepeatButton.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RepeatButton_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__RepeatButton_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlLongAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton_UxmlFactory::*)()>(&::UnityEngine::UIElements::RepeatButton_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d670fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RepeatButton_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RepeatButton_UxmlFactory* UnityEngine::UIElements::RepeatButton_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RepeatButton_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RepeatButton_UxmlFactory::RepeatButton_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::RepeatButton_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6d67164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton_UxmlTraits::*)()>(&::UnityEngine::UIElements::RepeatButton_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d672c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription*& UnityEngine::UIElements::RepeatButton_UxmlTraits::__cordl_internal_get_m_Delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delay;
}
constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription* const& UnityEngine::UIElements::RepeatButton_UxmlTraits::__cordl_internal_get_m_Delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delay;
}
constexpr void UnityEngine::UIElements::RepeatButton_UxmlTraits::__cordl_internal_set_m_Delay(::UnityEngine::UIElements::UxmlLongAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Delay = value;
}
constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription*& UnityEngine::UIElements::RepeatButton_UxmlTraits::__cordl_internal_get_m_Interval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interval;
}
constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription* const& UnityEngine::UIElements::RepeatButton_UxmlTraits::__cordl_internal_get_m_Interval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interval;
}
constexpr void UnityEngine::UIElements::RepeatButton_UxmlTraits::__cordl_internal_set_m_Interval(::UnityEngine::UIElements::UxmlLongAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Interval = value;
}
inline void UnityEngine::UIElements::RepeatButton_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::RepeatButton_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RepeatButton_UxmlTraits* UnityEngine::UIElements::RepeatButton_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RepeatButton_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RepeatButton_UxmlTraits::RepeatButton_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton.set_acceptClicksIfDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton::*)(bool)>(&::UnityEngine::UIElements::RepeatButton::set_acceptClicksIfDisabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d66ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(), { "set_acceptClicksIfDisabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton::*)()>(&::UnityEngine::UIElements::RepeatButton::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d66f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton::*)(::System::Action*, int64_t, int64_t)>(&::UnityEngine::UIElements::RepeatButton::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d66fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton.SetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton::*)(::System::Action*, int64_t, int64_t)>(&::UnityEngine::UIElements::RepeatButton::SetAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d66fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(),
                                                             { "SetAction", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepeatButton.AddAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepeatButton::*)(::System::Action*)>(&::UnityEngine::UIElements::RepeatButton::AddAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d6707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(), { "AddAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Clickable*& UnityEngine::UIElements::RepeatButton::__cordl_internal_get_m_Clickable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clickable;
}
constexpr ::UnityEngine::UIElements::Clickable* const& UnityEngine::UIElements::RepeatButton::__cordl_internal_get_m_Clickable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clickable;
}
constexpr void UnityEngine::UIElements::RepeatButton::__cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clickable = value;
}
constexpr bool& UnityEngine::UIElements::RepeatButton::__cordl_internal_get_m_AcceptClicksIfDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AcceptClicksIfDisabled;
}
constexpr bool const& UnityEngine::UIElements::RepeatButton::__cordl_internal_get_m_AcceptClicksIfDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AcceptClicksIfDisabled;
}
constexpr void UnityEngine::UIElements::RepeatButton::__cordl_internal_set_m_AcceptClicksIfDisabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AcceptClicksIfDisabled = value;
}
inline void UnityEngine::UIElements::RepeatButton::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RepeatButton*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RepeatButton::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RepeatButton*>();
}
inline void UnityEngine::UIElements::RepeatButton::set_acceptClicksIfDisabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(), { "set_acceptClicksIfDisabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RepeatButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RepeatButton::_ctor(::System::Action* clickEvent, int64_t delay, int64_t interval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clickEvent, delay, interval);
}
inline void UnityEngine::UIElements::RepeatButton::SetAction(::System::Action* clickEvent, int64_t delay, int64_t interval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(),
                                                           { "SetAction", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clickEvent, delay, interval);
}
inline void UnityEngine::UIElements::RepeatButton::AddAction(::System::Action* clickEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepeatButton*>(), { "AddAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clickEvent);
}
inline ::UnityEngine::UIElements::RepeatButton* UnityEngine::UIElements::RepeatButton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RepeatButton*>());
}
inline ::UnityEngine::UIElements::RepeatButton* UnityEngine::UIElements::RepeatButton::New_ctor(::System::Action* clickEvent, int64_t delay, int64_t interval) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RepeatButton*>(clickEvent, delay, interval));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RepeatButton::RepeatButton() {}
