#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task_DelayPromise.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_DelayPromise_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Task_DelayPromise._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Task_DelayPromise::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::Task_DelayPromise::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3e74a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_DelayPromise*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_DelayPromise.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Task_DelayPromise::*)()>(&::GlobalNamespace::Task_DelayPromise::Complete)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3e765dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_DelayPromise*>::get(), "Complete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Token;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Token;
}
constexpr void GlobalNamespace::Task_DelayPromise::__cordl_internal_set_Token(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Token = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Registration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Registration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Registration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Registration;
}
constexpr void GlobalNamespace::Task_DelayPromise::__cordl_internal_set_Registration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Registration = value;
}
constexpr ::System::Threading::Timer*& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timer;
}
constexpr ::System::Threading::Timer* const& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timer;
}
constexpr void GlobalNamespace::Task_DelayPromise::__cordl_internal_set_Timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Timer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::Task_DelayPromise::_ctor(::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_DelayPromise*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void GlobalNamespace::Task_DelayPromise::Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_DelayPromise*>::get(), "Complete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Task_DelayPromise* GlobalNamespace::Task_DelayPromise::New_ctor(::System::Threading::CancellationToken token) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Task_DelayPromise*>(token));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Task_DelayPromise::Task_DelayPromise() {}
