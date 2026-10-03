#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimerEventScheduler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TimerEventScheduler_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScheduledItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x726b788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.Schedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::Schedule)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x7278f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "Schedule", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScheduledItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.RemovedScheduledItemAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TimerEventScheduler::*)(int32_t)>(&::UnityEngine::UIElements::TimerEventScheduler::RemovedScheduledItemAt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x727914c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "RemovedScheduledItemAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.Unschedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::Unschedule)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x72791d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "Unschedule", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScheduledItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.PrivateUnSchedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::PrivateUnSchedule)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x727938c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(),
                                                                                           { "PrivateUnSchedule", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScheduledItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.get_FrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::TimerEventScheduler::*)()>(&::UnityEngine::UIElements::TimerEventScheduler::get_FrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7279458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "get_FrameCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.set_FrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(int64_t)>(&::UnityEngine::UIElements::TimerEventScheduler::set_FrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7279460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "set_FrameCount", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.UpdateScheduledEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)()>(&::UnityEngine::UIElements::TimerEventScheduler::UpdateScheduledEvents)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x726e554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "UpdateScheduledEvents", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_ScheduledItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledItems;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_ScheduledItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledItems;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_m_ScheduledItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScheduledItems = value;
}
constexpr bool& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_TransactionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransactionMode;
}
constexpr bool const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_TransactionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransactionMode;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_m_TransactionMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransactionMode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_ScheduleTransactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduleTransactions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_ScheduleTransactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduleTransactions;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_m_ScheduleTransactions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScheduleTransactions = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>*& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_UnscheduleTransactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnscheduleTransactions;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>* const&
UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_UnscheduleTransactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnscheduleTransactions;
}
constexpr void
UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_m_UnscheduleTransactions(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnscheduleTransactions = value;
}
constexpr bool& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_disableThrottling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableThrottling;
}
constexpr bool const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_disableThrottling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableThrottling;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_disableThrottling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableThrottling = value;
}
constexpr int32_t& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_LastUpdatedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdatedIndex;
}
constexpr int32_t const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_m_LastUpdatedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdatedIndex;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_m_LastUpdatedIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastUpdatedIndex = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
constexpr int64_t& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_frameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr int64_t const& UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_get_frameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr void UnityEngine::UIElements::TimerEventScheduler::__cordl_internal_set_frameCount(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameCount = value;
}
inline void UnityEngine::UIElements::TimerEventScheduler::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void UnityEngine::UIElements::TimerEventScheduler::Schedule(::UnityEngine::UIElements::ScheduledItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "Schedule", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScheduledItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool UnityEngine::UIElements::TimerEventScheduler::RemovedScheduledItemAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "RemovedScheduledItemAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::TimerEventScheduler::Unschedule(::UnityEngine::UIElements::ScheduledItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "Unschedule", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScheduledItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool UnityEngine::UIElements::TimerEventScheduler::PrivateUnSchedule(::UnityEngine::UIElements::ScheduledItem* sItem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(),
                                                                                         { "PrivateUnSchedule", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScheduledItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sItem);
}
inline int64_t UnityEngine::UIElements::TimerEventScheduler::get_FrameCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "get_FrameCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TimerEventScheduler::set_FrameCount(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "set_FrameCount", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TimerEventScheduler::UpdateScheduledEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerEventScheduler*>(), { "UpdateScheduledEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimerEventScheduler* UnityEngine::UIElements::TimerEventScheduler::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* p) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TimerEventScheduler*>(p));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TimerEventScheduler::TimerEventScheduler() {}
