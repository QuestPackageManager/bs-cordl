#pragma once
// IWYU pragma private; include "HMUI\EventSystemListener.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__EventSystemListener_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::HMUI::EventSystemListener.add_pointerDidEnterEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::HMUI::EventSystemListener::add_pointerDidEnterEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5879518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                             { "add_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EventSystemListener.remove_pointerDidEnterEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::HMUI::EventSystemListener::remove_pointerDidEnterEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58795d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                             { "remove_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EventSystemListener.add_pointerDidExitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::HMUI::EventSystemListener::add_pointerDidExitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5879698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                             { "add_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EventSystemListener.remove_pointerDidExitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::HMUI::EventSystemListener::remove_pointerDidExitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5879758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                             { "remove_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EventSystemListener.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::EventSystemListener::OnPointerEnter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5879818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(), { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EventSystemListener.OnPointerExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::EventSystemListener::OnPointerExit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5879834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(), { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EventSystemListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EventSystemListener::*)()>(&::HMUI::EventSystemListener::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5879850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& HMUI::EventSystemListener::__cordl_internal_get_pointerDidEnterEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidEnterEvent;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& HMUI::EventSystemListener::__cordl_internal_get_pointerDidEnterEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidEnterEvent;
}
constexpr void HMUI::EventSystemListener::__cordl_internal_set_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointerDidEnterEvent = value;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& HMUI::EventSystemListener::__cordl_internal_get_pointerDidExitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidExitEvent;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& HMUI::EventSystemListener::__cordl_internal_get_pointerDidExitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidExitEvent;
}
constexpr void HMUI::EventSystemListener::__cordl_internal_set_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointerDidExitEvent = value;
}
inline void HMUI::EventSystemListener::add_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                           { "add_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::EventSystemListener::remove_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                           { "remove_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::EventSystemListener::add_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                           { "add_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::EventSystemListener::remove_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(),
                                                           { "remove_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::EventSystemListener::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(), { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::EventSystemListener::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(), { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::EventSystemListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemListener*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::EventSystemListener* HMUI::EventSystemListener::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::EventSystemListener*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr HMUI::EventSystemListener::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* HMUI::EventSystemListener::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::EventSystemListener::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::EventSystemListener::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr HMUI::EventSystemListener::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* HMUI::EventSystemListener::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::EventSystemListener::EventSystemListener() {}
