#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimerEventScheduler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TimerEventScheduler_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScheduledItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.Schedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::Schedule)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6ba525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScheduledItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.RemovedScheduledItemAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TimerEventScheduler::*)(int32_t)>(
    &::UnityEngine::UIElements::TimerEventScheduler::RemovedScheduledItemAt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6ba5428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "RemovedScheduledItemAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.Unschedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::Unschedule)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6ba54b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "Unschedule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScheduledItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.PrivateUnSchedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TimerEventScheduler::*)(::UnityEngine::UIElements::ScheduledItem*)>(
    &::UnityEngine::UIElements::TimerEventScheduler::PrivateUnSchedule)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ba5668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "PrivateUnSchedule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScheduledItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.get_FrameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::TimerEventScheduler::*)()>(
    &::UnityEngine::UIElements::TimerEventScheduler::get_FrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ba5734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(),
                                                                               "get_FrameCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.set_FrameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)(int64_t)>(
    &::UnityEngine::UIElements::TimerEventScheduler::set_FrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ba573c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "set_FrameCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler.UpdateScheduledEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)()>(
    &::UnityEngine::UIElements::TimerEventScheduler::UpdateScheduledEvents)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6ba5744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(),
                                                                               "UpdateScheduledEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerEventScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TimerEventScheduler::*)()>(&::UnityEngine::UIElements::TimerEventScheduler::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ba5ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScheduledItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScheduleTransactions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnscheduleTransactions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void UnityEngine::UIElements::TimerEventScheduler::Schedule(::UnityEngine::UIElements::ScheduledItem* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScheduledItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline bool UnityEngine::UIElements::TimerEventScheduler::RemovedScheduledItemAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "RemovedScheduledItemAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::TimerEventScheduler::Unschedule(::UnityEngine::UIElements::ScheduledItem* item) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "Unschedule", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScheduledItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline bool UnityEngine::UIElements::TimerEventScheduler::PrivateUnSchedule(::UnityEngine::UIElements::ScheduledItem* sItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "PrivateUnSchedule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScheduledItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sItem);
}
inline int64_t UnityEngine::UIElements::TimerEventScheduler::get_FrameCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(),
                                                                             "get_FrameCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TimerEventScheduler::set_FrameCount(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), "set_FrameCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TimerEventScheduler::UpdateScheduledEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(),
                                                                             "UpdateScheduledEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TimerEventScheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TimerEventScheduler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimerEventScheduler* UnityEngine::UIElements::TimerEventScheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TimerEventScheduler*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IScheduler"
constexpr UnityEngine::UIElements::TimerEventScheduler::operator ::UnityEngine::UIElements::IScheduler*() noexcept {
  return static_cast<::UnityEngine::UIElements::IScheduler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IScheduler"
constexpr ::UnityEngine::UIElements::IScheduler* UnityEngine::UIElements::TimerEventScheduler::i___UnityEngine__UIElements__IScheduler() noexcept {
  return static_cast<::UnityEngine::UIElements::IScheduler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TimerEventScheduler::TimerEventScheduler() {}
