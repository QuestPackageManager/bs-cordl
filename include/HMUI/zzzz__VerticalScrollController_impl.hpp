#pragma once
// IWYU pragma private; include "HMUI\VerticalScrollController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__VerticalScrollController_def.hpp"
#include "HMUI/zzzz__VerticalScrollIndicator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::HMUI::VerticalScrollController.add_updateScrollPositionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)(::System::Action_1<float_t>*)>(&::HMUI::VerticalScrollController::add_updateScrollPositionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5888284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "add_updateScrollPositionEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.remove_updateScrollPositionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)(::System::Action_1<float_t>*)>(&::HMUI::VerticalScrollController::remove_updateScrollPositionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58886c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "remove_updateScrollPositionEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)()>(&::HMUI::VerticalScrollController::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588a8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)()>(&::HMUI::VerticalScrollController::OnValidate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x588a8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::VerticalScrollController::OnPointerDown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x588a9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.OnDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::VerticalScrollController::OnDrag)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x588aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "OnDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.GetDragPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::HMUI::VerticalScrollController::GetDragPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x588aa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::VerticalScrollController*>(),
            { "GetDragPosition", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController.OnInitializePotentialDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::VerticalScrollController::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x588ab64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(),
                                                                                           { "OnInitializePotentialDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollController::*)()>(&::HMUI::VerticalScrollController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588ab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& HMUI::VerticalScrollController::__cordl_internal_get_updateScrollPositionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateScrollPositionEvent;
}
constexpr ::System::Action_1<float_t>* const& HMUI::VerticalScrollController::__cordl_internal_get_updateScrollPositionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateScrollPositionEvent;
}
constexpr void HMUI::VerticalScrollController::__cordl_internal_set_updateScrollPositionEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateScrollPositionEvent = value;
}
constexpr ::UnityW<::HMUI::VerticalScrollIndicator>& HMUI::VerticalScrollController::__cordl_internal_get__verticalScrollIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScrollIndicator;
}
constexpr ::UnityW<::HMUI::VerticalScrollIndicator> const& HMUI::VerticalScrollController::__cordl_internal_get__verticalScrollIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScrollIndicator;
}
constexpr void HMUI::VerticalScrollController::__cordl_internal_set__verticalScrollIndicator(::UnityW<::HMUI::VerticalScrollIndicator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalScrollIndicator = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::VerticalScrollController::__cordl_internal_get__scrollRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::VerticalScrollController::__cordl_internal_get__scrollRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollRectTransform;
}
constexpr void HMUI::VerticalScrollController::__cordl_internal_set__scrollRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollRectTransform = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::VerticalScrollController::__cordl_internal_get__handleRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::VerticalScrollController::__cordl_internal_get__handleRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRectTransform;
}
constexpr void HMUI::VerticalScrollController::__cordl_internal_set__handleRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleRectTransform = value;
}
inline void HMUI::VerticalScrollController::add_updateScrollPositionEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "add_updateScrollPositionEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::VerticalScrollController::remove_updateScrollPositionEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "remove_updateScrollPositionEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::VerticalScrollController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::VerticalScrollController::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::VerticalScrollController::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::VerticalScrollController::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { "OnDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline float_t HMUI::VerticalScrollController::GetDragPosition(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Rect scrollRect, ::UnityEngine::Rect handleRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::HMUI::VerticalScrollController*>(),
                       { "GetDragPosition", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, eventData, scrollRect, handleRect);
}
inline void HMUI::VerticalScrollController::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(),
                                                                                         { "OnInitializePotentialDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::VerticalScrollController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::VerticalScrollController* HMUI::VerticalScrollController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::VerticalScrollController*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr HMUI::VerticalScrollController::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* HMUI::VerticalScrollController::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::VerticalScrollController::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::VerticalScrollController::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr HMUI::VerticalScrollController::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* HMUI::VerticalScrollController::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr HMUI::VerticalScrollController::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* HMUI::VerticalScrollController::i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::VerticalScrollController::VerticalScrollController() {}
