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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::*)()>(
    &::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a7de68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::*)()>(
    &::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a7dc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ClickDetector_ButtonClickStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus* UnityEngine::UIElements::ClickDetector_ButtonClickStatus::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus::ClickDetector_ButtonClickStatus() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.get_s_DoubleClickTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::UIElements::ClickDetector::get_s_DoubleClickTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a7d90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(),
                                                                               "get_s_DoubleClickTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.set_s_DoubleClickTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::ClickDetector::set_s_DoubleClickTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a7d968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "set_s_DoubleClickTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)()>(&::UnityEngine::UIElements::ClickDetector::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6a7d9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.StartClickTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ClickDetector::StartClickTracking)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6a7dc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "StartClickTracking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.SendClickEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ClickDetector::SendClickEvent)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6a7ded0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "SendClickEvent", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.CancelClickTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ClickDetector::CancelClickTracking)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a7e32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "CancelClickTracking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.ContainsPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::ClickDetector::ContainsPointer)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6a7e178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "ContainsPointer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickDetector.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClickDetector::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::ClickDetector::Cleanup)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6a7e430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "Cleanup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClickStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::ClickDetector::setStaticF__s_DoubleClickTime_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<s_DoubleClickTime>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::ClickDetector::getStaticF__s_DoubleClickTime_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<s_DoubleClickTime>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get>();
}
inline int32_t UnityEngine::UIElements::ClickDetector::get_s_DoubleClickTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(),
                                                                             "get_s_DoubleClickTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::ClickDetector::set_s_DoubleClickTime(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "set_s_DoubleClickTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::ClickDetector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ClickDetector::StartClickTracking(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "StartClickTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ClickDetector::SendClickEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "SendClickEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ClickDetector::CancelClickTracking(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "CancelClickTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TEvent> inline void UnityEngine::UIElements::ClickDetector::ProcessEvent(::UnityEngine::UIElements::PointerEventBase_1<TEvent>* evt) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "ProcessEvent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerEventBase_1<TEvent>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::ClickDetector::ContainsPointer(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::IPointerEvent* pe) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "ContainsPointer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, element, pe);
}
inline void UnityEngine::UIElements::ClickDetector::Cleanup(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClickDetector*>::get(), "Cleanup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elements);
}
inline ::UnityEngine::UIElements::ClickDetector* UnityEngine::UIElements::ClickDetector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ClickDetector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ClickDetector::ClickDetector() {}
