#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IScheduler.hpp"
#include "UnityEngine/UIElements/zzzz__IScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScheduledItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IScheduler.Unschedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::IScheduler::Unschedule)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), { ::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IScheduler.Schedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(&::UnityEngine::UIElements::IScheduler::Schedule)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), { ::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IScheduler.UpdateScheduledEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IScheduler::*)()>(&::UnityEngine::UIElements::IScheduler::UpdateScheduledEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), { ::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IScheduler::Unschedule(::UnityEngine::UIElements::ScheduledItem* item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::IScheduler::Schedule(::UnityEngine::UIElements::ScheduledItem* item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::IScheduler::UpdateScheduledEvents() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IScheduler*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
