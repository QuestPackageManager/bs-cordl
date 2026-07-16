#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ElementUnderPointer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerOrMouseEvent_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ElementUnderPointer_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.GetTopElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::ElementUnderPointer::*)(int32_t, ::by_ref<::UnityEngine::Vector2>, ::by_ref<bool>)>(&::UnityEngine::UIElements::ElementUnderPointer::GetTopElementUnderPointer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d9342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                                         { "GetTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.GetTopElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ElementUnderPointer::*)(int32_t)>(
    &::UnityEngine::UIElements::ElementUnderPointer::GetTopElementUnderPointer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d934a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(), { "GetTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.SetElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementUnderPointer::*)(::UnityEngine::UIElements::VisualElement*, int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::ElementUnderPointer::SetElementUnderPointer)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6d934d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                            { "SetElementUnderPointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.GetEventPointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ElementUnderPointer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ElementUnderPointer::GetEventPointerPosition)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6d93634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                                                                                           { "GetEventPointerPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.SetTemporaryElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementUnderPointer::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::ElementUnderPointer::SetTemporaryElementUnderPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d937f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                                         { "SetTemporaryElementUnderPointer",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.SetElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementUnderPointer::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::ElementUnderPointer::SetElementUnderPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d939c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
            { "SetElementUnderPointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.SetElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementUnderPointer::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t, ::UnityEngine::UIElements::EventBase*, bool)>(&::UnityEngine::UIElements::ElementUnderPointer::SetElementUnderPointer)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6d937fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(), { "SetElementUnderPointer",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer.CommitElementUnderPointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementUnderPointer::*)(::UnityEngine::UIElements::EventDispatcher*, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::ElementUnderPointer::CommitElementUnderPointers)> {
  constexpr static std::size_t size = 0xcac;
  constexpr static std::size_t addrs = 0x6d939d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                            { "CommitElementUnderPointers", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventDispatcher*>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementUnderPointer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementUnderPointer::*)()>(&::UnityEngine::UIElements::ElementUnderPointer::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6d94c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*>& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_PendingTopElementUnderPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingTopElementUnderPointer;
}
constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_PendingTopElementUnderPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingTopElementUnderPointer;
}
constexpr void UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_set_m_PendingTopElementUnderPointer(::ArrayW<::UnityEngine::UIElements::VisualElement*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingTopElementUnderPointer = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*>& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_TopElementUnderPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TopElementUnderPointer;
}
constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_TopElementUnderPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TopElementUnderPointer;
}
constexpr void UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_set_m_TopElementUnderPointer(::ArrayW<::UnityEngine::UIElements::VisualElement*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TopElementUnderPointer = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::IPointerOrMouseEvent*>& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_TriggerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerEvent;
}
constexpr ::ArrayW<::UnityEngine::UIElements::IPointerOrMouseEvent*> const& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_TriggerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerEvent;
}
constexpr void UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_set_m_TriggerEvent(::ArrayW<::UnityEngine::UIElements::IPointerOrMouseEvent*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TriggerEvent = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_PickingPointerPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PickingPointerPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_PickingPointerPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PickingPointerPositions;
}
constexpr void UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_set_m_PickingPointerPositions(::ArrayW<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PickingPointerPositions = value;
}
constexpr ::ArrayW<bool>& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_IsPickingPointerTemporaries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPickingPointerTemporaries;
}
constexpr ::ArrayW<bool> const& UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_get_m_IsPickingPointerTemporaries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPickingPointerTemporaries;
}
constexpr void UnityEngine::UIElements::ElementUnderPointer::__cordl_internal_set_m_IsPickingPointerTemporaries(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsPickingPointerTemporaries = value;
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ElementUnderPointer::GetTopElementUnderPointer(int32_t pointerId, ::by_ref<::UnityEngine::Vector2> pickPosition,
                                                                                                                         ::by_ref<bool> isTemporary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                                       { "GetTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, pointerId, pickPosition, isTemporary);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ElementUnderPointer::GetTopElementUnderPointer(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(), { "GetTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::ElementUnderPointer::SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId,
                                                                                 ::UnityEngine::Vector2 pointerPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                          { "SetElementUnderPointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newElementUnderPointer, pointerId, pointerPos);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ElementUnderPointer::GetEventPointerPosition(::UnityEngine::UIElements::EventBase* triggerEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                                                                                         { "GetEventPointerPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, triggerEvent);
}
inline void UnityEngine::UIElements::ElementUnderPointer::SetTemporaryElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId,
                                                                                          ::UnityEngine::UIElements::EventBase* triggerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                                       { "SetTemporaryElementUnderPointer",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newElementUnderPointer, pointerId, triggerEvent);
}
inline void UnityEngine::UIElements::ElementUnderPointer::SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId,
                                                                                 ::UnityEngine::UIElements::EventBase* triggerEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
          { "SetElementUnderPointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newElementUnderPointer, pointerId, triggerEvent);
}
inline void UnityEngine::UIElements::ElementUnderPointer::SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId,
                                                                                 ::UnityEngine::UIElements::EventBase* triggerEvent, bool temporary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(), { "SetElementUnderPointer",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newElementUnderPointer, pointerId, triggerEvent, temporary);
}
inline void UnityEngine::UIElements::ElementUnderPointer::CommitElementUnderPointers(::UnityEngine::UIElements::EventDispatcher* dispatcher, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(),
                          { "CommitElementUnderPointers", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventDispatcher*>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dispatcher, contextType);
}
inline void UnityEngine::UIElements::ElementUnderPointer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ElementUnderPointer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ElementUnderPointer* UnityEngine::UIElements::ElementUnderPointer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ElementUnderPointer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ElementUnderPointer::ElementUnderPointer() {}
