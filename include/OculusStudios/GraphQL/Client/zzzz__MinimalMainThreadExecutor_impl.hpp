#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MinimalMainThreadExecutor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MinimalMainThreadExecutor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor.StartOnMainThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)(::System::Collections::IEnumerator*, bool)>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::StartOnMainThread)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d7359c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), "StartOnMainThread", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor.RunOnMainThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)(::System::Action*)>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunOnMainThread)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d735d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), "RunOnMainThread",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor.RunPendingActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)()>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunPendingActions)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5d70fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), "RunPendingActions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::*)()>(
    &::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d71f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actions_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toRun_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::StartOnMainThread(::System::Collections::IEnumerator* func, bool enableStop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), "StartOnMainThread", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, func, enableStop);
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunOnMainThread(::System::Action* runnable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), "RunOnMainThread",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runnable);
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::RunPendingActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), "RunPendingActions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor::MinimalMainThreadExecutor() {}
