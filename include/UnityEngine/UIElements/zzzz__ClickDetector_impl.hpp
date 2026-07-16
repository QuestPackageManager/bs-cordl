#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClickDetector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ClickDetector_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClickDetector_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::*)()>(&::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c461a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::*)()>(&::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c45f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Target = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_PointerDownPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_PointerDownPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownPosition;
}
constexpr void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_set_m_PointerDownPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerDownPosition = value;
}
constexpr int64_t& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_LastPointerDownTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPointerDownTime;
}
constexpr int64_t const& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_LastPointerDownTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPointerDownTime;
}
constexpr void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_set_m_LastPointerDownTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPointerDownTime = value;
}
constexpr int32_t& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_ClickCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickCount;
}
constexpr int32_t const& UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_get_m_ClickCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickCount;
}
constexpr void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::__cordl_internal_set_m_ClickCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClickCount = value;
}
inline void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus* UnityEngine::UIElements::ClickDetector_ButtonClickStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::ClickDetector_ButtonClickStatus() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.get_s_DoubleClickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::UIElements::ClickDetector::get_s_DoubleClickTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c45c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "get_s_DoubleClickTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.set_s_DoubleClickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::ClickDetector::set_s_DoubleClickTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c45ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "set_s_DoubleClickTime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)()>(&::UnityEngine::UIElements::ClickDetector::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6c45d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.StartClickTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ClickDetector::StartClickTracking)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6c45f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "StartClickTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.SendClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ClickDetector::SendClickEvent)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6c46208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "SendClickEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.CancelClickTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ClickDetector::CancelClickTracking)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c46664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "CancelClickTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.ContainsPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::ClickDetector::ContainsPointer)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c464b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(),
                                         { "ContainsPointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::ClickDetector::Cleanup)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c46768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(),
                                                             { "Cleanup", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>*& UnityEngine::UIElements::ClickDetector::__cordl_internal_get_m_ClickStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickStatus;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>* const&
UnityEngine::UIElements::ClickDetector::__cordl_internal_get_m_ClickStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickStatus;
}
constexpr void UnityEngine::UIElements::ClickDetector::__cordl_internal_set_m_ClickStatus(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClickStatus = value;
}
inline void UnityEngine::UIElements::ClickDetector::setStaticF__s_DoubleClickTime_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<s_DoubleClickTime>k__BackingField", ::UnityEngine::UIElements::ClickDetector*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::ClickDetector::getStaticF__s_DoubleClickTime_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<s_DoubleClickTime>k__BackingField", ::UnityEngine::UIElements::ClickDetector*>();
}
inline int32_t UnityEngine::UIElements::ClickDetector::get_s_DoubleClickTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "get_s_DoubleClickTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::ClickDetector::set_s_DoubleClickTime(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "set_s_DoubleClickTime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::ClickDetector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ClickDetector::StartClickTracking(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "StartClickTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ClickDetector::SendClickEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "SendClickEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ClickDetector::CancelClickTracking(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(), { "CancelClickTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TEvent> inline void UnityEngine::UIElements::ClickDetector::ProcessEvent(::UnityEngine::UIElements::PointerEventBase_1<TEvent>* evt) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(),
                                                           { "ProcessEvent", { ::i2c::class_of<TEvent>() }, { ::i2c::type_of<::UnityEngine::UIElements::PointerEventBase_1<TEvent>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEvent>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::ClickDetector::ContainsPointer(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::IPointerEvent* pe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(),
                                       { "ContainsPointer", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, pe);
}
inline void UnityEngine::UIElements::ClickDetector::Cleanup(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickDetector*>(),
                                                           { "Cleanup", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements);
}
inline ::UnityEngine::UIElements::ClickDetector* UnityEngine::UIElements::ClickDetector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ClickDetector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ClickDetector::ClickDetector() {}
