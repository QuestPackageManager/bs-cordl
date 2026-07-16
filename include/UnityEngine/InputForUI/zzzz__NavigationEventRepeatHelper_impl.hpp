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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::NavigationEventRepeatHelper::*)()>(&::UnityEngine::InputForUI::NavigationEventRepeatHelper::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b5cf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEventRepeatHelper.ShouldSendMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::NavigationEventRepeatHelper::*)(
    ::Unity::IntegerTime::DiscreteTime, ::UnityEngine::InputForUI::NavigationEvent_Direction, bool)>(&::UnityEngine::InputForUI::NavigationEventRepeatHelper::ShouldSendMoveEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b5cf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>(),
            { "ShouldSendMoveEvent", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent_Direction>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEventRepeatHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::NavigationEventRepeatHelper::*)()>(&::UnityEngine::InputForUI::NavigationEventRepeatHelper::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6b5a560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>(), { ".ctor", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::NavigationEventRepeatHelper::ShouldSendMoveEvent(::Unity::IntegerTime::DiscreteTime timestamp, ::UnityEngine::InputForUI::NavigationEvent_Direction direction,
                                                                                      bool axisButtonsWherePressedThisFrame) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>(),
          { "ShouldSendMoveEvent", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent_Direction>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timestamp, direction, axisButtonsWherePressedThisFrame);
}
inline void UnityEngine::InputForUI::NavigationEventRepeatHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::NavigationEventRepeatHelper* UnityEngine::InputForUI::NavigationEventRepeatHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputForUI::NavigationEventRepeatHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper::NavigationEventRepeatHelper() {}
