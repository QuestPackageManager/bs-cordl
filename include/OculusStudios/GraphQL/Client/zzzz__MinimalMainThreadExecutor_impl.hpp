#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MinimalMainThreadExecutor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MinimalMainThreadExecutor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor.StartOnMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)(::System::Collections::IEnumerator*, bool)>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::StartOnMainThread)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f1f830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(),
                                                             { "StartOnMainThread", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor.RunOnMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)(::System::Action*)>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunOnMainThread)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f1f868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(), { "RunOnMainThread", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor.RunPendingActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)()>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunPendingActions)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5f1d264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(), { "RunPendingActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)()>(&::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f1e228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::__cordl_internal_get_actions_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions_;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::__cordl_internal_get_actions_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions_;
}
constexpr void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::__cordl_internal_set_actions_(::System::Collections::Generic::List_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actions_ = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::__cordl_internal_get_toRun_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toRun_;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::__cordl_internal_get_toRun_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toRun_;
}
constexpr void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::__cordl_internal_set_toRun_(::System::Collections::Generic::List_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toRun_ = value;
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::StartOnMainThread(::System::Collections::IEnumerator* func, bool enableStop) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(),
                                                           { "StartOnMainThread", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, func, enableStop);
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunOnMainThread(::System::Action* runnable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(), { "RunOnMainThread", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runnable);
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunPendingActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(), { "RunPendingActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::MinimalMainThreadExecutor() {}
