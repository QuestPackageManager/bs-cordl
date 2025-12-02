#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEventRepeatHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEventRepeatHelper_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEventRepeatHelper.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::NavigationEventRepeatHelper::*)()>(
    &::UnityEngine::InputForUI::NavigationEventRepeatHelper::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x692c144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEventRepeatHelper.ShouldSendMoveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::NavigationEventRepeatHelper::*)(
    ::Unity::IntegerTime::DiscreteTime, ::UnityEngine::InputForUI::NavigationEvent_Direction, bool)>(&::UnityEngine::InputForUI::NavigationEventRepeatHelper::ShouldSendMoveEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x692c1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>::get(), "ShouldSendMoveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::NavigationEvent_Direction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEventRepeatHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::NavigationEventRepeatHelper::*)()>(
    &::UnityEngine::InputForUI::NavigationEventRepeatHelper::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6929780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_ConsecutiveMoveCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_ConsecutiveMoveCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr void UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_set_m_ConsecutiveMoveCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConsecutiveMoveCount = value;
}
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_LastDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDirection;
}
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction const& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_LastDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDirection;
}
constexpr void UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_set_m_LastDirection(::UnityEngine::InputForUI::NavigationEvent_Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastDirection = value;
}
constexpr ::Unity::IntegerTime::DiscreteTime& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_PrevActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr ::Unity::IntegerTime::DiscreteTime const& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_PrevActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr void UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_set_m_PrevActionTime(::Unity::IntegerTime::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevActionTime = value;
}
constexpr ::Unity::IntegerTime::DiscreteTime& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_InitialRepeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialRepeatDelay;
}
constexpr ::Unity::IntegerTime::DiscreteTime const& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_InitialRepeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialRepeatDelay;
}
constexpr void UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_set_m_InitialRepeatDelay(::Unity::IntegerTime::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitialRepeatDelay = value;
}
constexpr ::Unity::IntegerTime::DiscreteTime& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_ConsecutiveRepeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveRepeatDelay;
}
constexpr ::Unity::IntegerTime::DiscreteTime const& UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_get_m_ConsecutiveRepeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveRepeatDelay;
}
constexpr void UnityEngine::InputForUI::NavigationEventRepeatHelper::__cordl_internal_set_m_ConsecutiveRepeatDelay(::Unity::IntegerTime::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConsecutiveRepeatDelay = value;
}
inline void UnityEngine::InputForUI::NavigationEventRepeatHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::NavigationEventRepeatHelper::ShouldSendMoveEvent(::Unity::IntegerTime::DiscreteTime timestamp, ::UnityEngine::InputForUI::NavigationEvent_Direction direction,
                                                                                      bool axisButtonsWherePressedThisFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>::get(), "ShouldSendMoveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::NavigationEvent_Direction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timestamp, direction, axisButtonsWherePressedThisFrame);
}
inline void UnityEngine::InputForUI::NavigationEventRepeatHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::NavigationEventRepeatHelper* UnityEngine::InputForUI::NavigationEventRepeatHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper::NavigationEventRepeatHelper() {}
