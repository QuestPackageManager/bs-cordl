#pragma once
// IWYU pragma private; include "OSCE/Analytics/LoggerAnalyticsBatch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsEvent_def.hpp"
#include "OSCE/Networking/zzzz__IPureCSharpPoolElement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f39c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.get_FailedAttempts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::get_FailedAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "get_FailedAttempts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.get_CreatedByPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::get_CreatedByPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "get_CreatedByPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.set_CreatedByPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)(bool)>(&::OSCE::Analytics::LoggerAnalyticsBatch::set_CreatedByPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "set_CreatedByPool", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::ReturnedToPool)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f3b078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "ReturnedToPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.ConvertEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::ConvertEvents)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f38ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "ConvertEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.AddEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)(::OSCE::Analytics::BaseAnalyticsEvent*)>(&::OSCE::Analytics::LoggerAnalyticsBatch::AddEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f389f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "AddEvent", {}, { ::i2c::type_of<::OSCE::Analytics::BaseAnalyticsEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.ApplyOtherBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)(::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::LoggerAnalyticsBatch::ApplyOtherBatch)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f39d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "ApplyOtherBatch", {}, { ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch.OnBatchFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::OnBatchFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f398f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "OnBatchFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::LoggerAnalyticsBatch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::LoggerAnalyticsBatch::*)()>(&::OSCE::Analytics::LoggerAnalyticsBatch::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f3b190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>*& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get_logs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logs;
}
constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>* const& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get_logs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logs;
}
constexpr void OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_set_logs(::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logs = value;
}
constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>*& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get__eventsToSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsToSend;
}
constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* const& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get__eventsToSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsToSend;
}
constexpr void OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_set__eventsToSend(::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventsToSend = value;
}
constexpr int32_t& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get__failedAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedAttempts;
}
constexpr int32_t const& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get__failedAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedAttempts;
}
constexpr void OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_set__failedAttempts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedAttempts = value;
}
constexpr bool& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get__CreatedByPool_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatedByPool_k__BackingField;
}
constexpr bool const& OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_get__CreatedByPool_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatedByPool_k__BackingField;
}
constexpr void OSCE::Analytics::LoggerAnalyticsBatch::__cordl_internal_set__CreatedByPool_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreatedByPool_k__BackingField = value;
}
inline int32_t OSCE::Analytics::LoggerAnalyticsBatch::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t OSCE::Analytics::LoggerAnalyticsBatch::get_FailedAttempts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "get_FailedAttempts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool OSCE::Analytics::LoggerAnalyticsBatch::get_CreatedByPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "get_CreatedByPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::set_CreatedByPool(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "set_CreatedByPool", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::ReturnedToPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "ReturnedToPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::ConvertEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "ConvertEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::AddEvent(::OSCE::Analytics::BaseAnalyticsEvent* eventToSend) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "AddEvent", {}, { ::i2c::type_of<::OSCE::Analytics::BaseAnalyticsEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventToSend);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::ApplyOtherBatch(::OSCE::Analytics::LoggerAnalyticsBatch* otherBatch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "ApplyOtherBatch", {}, { ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherBatch);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::OnBatchFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { "OnBatchFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::LoggerAnalyticsBatch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OSCE::Analytics::LoggerAnalyticsBatch* OSCE::Analytics::LoggerAnalyticsBatch::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Analytics::LoggerAnalyticsBatch*>());
}
/// @brief Convert operator to "::OSCE::Networking::IPureCSharpPoolElement"
constexpr OSCE::Analytics::LoggerAnalyticsBatch::operator ::OSCE::Networking::IPureCSharpPoolElement*() noexcept {
  return static_cast<::OSCE::Networking::IPureCSharpPoolElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::OSCE::Networking::IPureCSharpPoolElement"
constexpr ::OSCE::Networking::IPureCSharpPoolElement* OSCE::Analytics::LoggerAnalyticsBatch::i___OSCE__Networking__IPureCSharpPoolElement() noexcept {
  return static_cast<::OSCE::Networking::IPureCSharpPoolElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::LoggerAnalyticsBatch::LoggerAnalyticsBatch() {}
