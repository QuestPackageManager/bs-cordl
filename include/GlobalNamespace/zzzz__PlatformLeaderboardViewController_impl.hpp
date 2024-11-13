#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformLeaderboardViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LevelStatsView_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::*)()>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3afa9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3afacac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "showLoadingIndicator", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "clear", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::__PlatformLeaderboardViewController___Refresh_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> __4__this, bool showLoadingIndicator,
    bool clear, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->showLoadingIndicator = showLoadingIndicator;
  this->clear = clear;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__31::__PlatformLeaderboardViewController___Refresh_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::*)(int32_t)>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3afa884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::*)()>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3afacb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::*)()>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3afacbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::*)()>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3afaf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::*)()>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3afaf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::*)()>(
    &::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3afaf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> const& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get_clear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clear;
}
constexpr bool const& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get_clear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clear;
}
constexpr void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_set_clear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clear = value;
}
constexpr bool& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get_showLoadingIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showLoadingIndicator;
}
constexpr bool const& GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_get_showLoadingIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showLoadingIndicator;
}
constexpr void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__cordl_internal_set_showLoadingIndicator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showLoadingIndicator = value;
}
inline ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33* GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>(__1__state));
}
inline void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__33::__PlatformLeaderboardViewController___RefreshDelayed_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.get_leaderboardsModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::get_leaderboardsModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3af99b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                               "get_leaderboardsModel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::SetData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3af99b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.RefreshLevelStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::RefreshLevelStats)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3af9b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::DidActivate)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x3af9b30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3afa100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3afa218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.ScoreScopeToScoreScopeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlatformLeaderboardViewController::*)(
    ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope)>(&::GlobalNamespace::PlatformLeaderboardViewController::ScoreScopeToScoreScopeIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3afa06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "ScoreScopeToScoreScopeIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.ScopeScopeIndexToScoreScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope (::GlobalNamespace::PlatformLeaderboardViewController::*)(
    int32_t)>(&::GlobalNamespace::PlatformLeaderboardViewController::ScopeScopeIndexToScoreScope)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3afa3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "ScopeScopeIndexToScoreScope",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.HandleDidPressRefreshButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::HandleDidPressRefreshButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3afa414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                               "HandleDidPressRefreshButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.HandleLeaderboardsResultsReturned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)(
    ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult,
    ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>, int32_t)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::HandleLeaderboardsResultsReturned)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3afa420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "HandleLeaderboardsResultsReturned",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.HandleScopeSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3afa684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                 "HandleScopeSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.HandlePlatformLeaderboardsModelAllScoresDidUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::HandlePlatformLeaderboardsModelAllScoresDidUpload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3afa6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                 "HandlePlatformLeaderboardsModelAllScoresDidUpload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::Refresh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3af9a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.RefreshAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::RefreshAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3afa700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "RefreshAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.RefreshDelayed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(
    &::GlobalNamespace::PlatformLeaderboardViewController::RefreshDelayed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3afa804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "RefreshDelayed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController.ClearContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::ClearContent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3afa8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                               "ClearContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardViewController::*)()>(
    &::GlobalNamespace::PlatformLeaderboardViewController::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3afa968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LeaderboardTableView>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__leaderboardTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardTableView;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardTableView> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__leaderboardTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardTableView;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__leaderboardTableView(::UnityW<::GlobalNamespace::LeaderboardTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardTableView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::IconSegmentedControl>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__scopeSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scopeSegmentedControl;
}
constexpr ::UnityW<::HMUI::IconSegmentedControl> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__scopeSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scopeSegmentedControl;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__scopeSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scopeSegmentedControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__globalLeaderboardIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalLeaderboardIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__globalLeaderboardIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalLeaderboardIcon;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__globalLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalLeaderboardIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__aroundPlayerLeaderboardIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aroundPlayerLeaderboardIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__aroundPlayerLeaderboardIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aroundPlayerLeaderboardIcon;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__aroundPlayerLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____aroundPlayerLeaderboardIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__friendsLeaderboardIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendsLeaderboardIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__friendsLeaderboardIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendsLeaderboardIcon;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__friendsLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____friendsLeaderboardIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelStatsView>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__levelStatsView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStatsView;
}
constexpr ::UnityW<::GlobalNamespace::LevelStatsView> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__levelStatsView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStatsView;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__levelStatsView(::UnityW<::GlobalNamespace::LevelStatsView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelStatsView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__leaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsModel;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__leaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardsModel;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__leaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HMAsyncRequest*& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__getScoresAsyncRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getScoresAsyncRequest;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMAsyncRequest*> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__getScoresAsyncRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getScoresAsyncRequest;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__getScoresAsyncRequest(::GlobalNamespace::HMAsyncRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getScoresAsyncRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*> const&
GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__playerScorePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerScorePos;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__playerScorePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerScorePos;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__playerScorePos(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerScorePos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey = value;
}
constexpr bool& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__refreshIsNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshIsNeeded;
}
constexpr bool const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__refreshIsNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshIsNeeded;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__refreshIsNeeded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshIsNeeded = value;
}
constexpr bool& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__hasScoresData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasScoresData;
}
constexpr bool const& GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__hasScoresData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasScoresData;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__hasScoresData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasScoresData = value;
}
constexpr ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*>&
GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__scoreScopes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreScopes;
}
constexpr ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> const&
GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_get__scoreScopes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreScopes;
}
constexpr void GlobalNamespace::PlatformLeaderboardViewController::__cordl_internal_set__scoreScopes(
    ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreScopes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlatformLeaderboardViewController::setStaticF__scoresScope(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, "_scoresScope",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get>(
      std::forward<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>(value));
}
inline ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope GlobalNamespace::PlatformLeaderboardViewController::getStaticF__scoresScope() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, "_scoresScope",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get>();
}
inline ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> GlobalNamespace::PlatformLeaderboardViewController::get_leaderboardsModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                             "get_leaderboardsModel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::SetData(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::RefreshLevelStats() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlatformLeaderboardViewController::ScoreScopeToScoreScopeIndex(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scoresScope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "ScoreScopeToScoreScopeIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, scoresScope);
}
inline ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope GlobalNamespace::PlatformLeaderboardViewController::ScopeScopeIndexToScoreScope(int32_t scoreScopeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "ScopeScopeIndexToScoreScope",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, false>(this, ___internal_method, scoreScopeIndex);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::HandleDidPressRefreshButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                             "HandleDidPressRefreshButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::HandleLeaderboardsResultsReturned(
    ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
    ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores, int32_t playerScoreIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "HandleLeaderboardsResultsReturned",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, scores, playerScoreIndex);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                               "HandleScopeSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentedControl, cellNumber);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::HandlePlatformLeaderboardsModelAllScoresDidUpload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                               "HandlePlatformLeaderboardsModelAllScoresDidUpload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::Refresh(bool showLoadingIndicator, bool clear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showLoadingIndicator, clear);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformLeaderboardViewController::RefreshAsync(bool showLoadingIndicator, bool clear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "RefreshAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, showLoadingIndicator, clear);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PlatformLeaderboardViewController::RefreshDelayed(bool showLoadingIndicator, bool clear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(), "RefreshDelayed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, showLoadingIndicator, clear);
}
inline void GlobalNamespace::PlatformLeaderboardViewController::ClearContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                             "ClearContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformLeaderboardViewController* GlobalNamespace::PlatformLeaderboardViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformLeaderboardViewController*>());
}
inline void GlobalNamespace::PlatformLeaderboardViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardViewController::PlatformLeaderboardViewController() {}
