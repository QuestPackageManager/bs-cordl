#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInit__AppStartType::__AppInit__AppStartType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInit__AppStartType::__AppInit__AppStartType() {}
constexpr ::GlobalNamespace::__AppInit__AppStartType GlobalNamespace::__AppInit__AppStartType::AppStart{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AppInit__AppStartType GlobalNamespace::__AppInit__AppStartType::AppRestart{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__AppInit__AppStartType GlobalNamespace::__AppInit__AppStartType::MultiSceneEditor{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__AppInit___Awake_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit___Awake_d__10::*)()>(&::GlobalNamespace::__AppInit___Awake_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xe3f618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___Awake_d__10>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInit___Awake_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit___Awake_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__AppInit___Awake_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3f840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___Awake_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AppInit___Awake_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AppInit___Awake_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AppInit___Awake_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___Awake_d__10>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AppInit___Awake_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___Awake_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInit___Awake_d__10::__AppInit___Awake_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                              ::UnityW<::GlobalNamespace::AppInit> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInit___Awake_d__10::__AppInit___Awake_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::__AppInit___StartGameAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit___StartGameAsync_d__11::*)()>(
    &::GlobalNamespace::__AppInit___StartGameAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xe3f84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___StartGameAsync_d__11>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInit___StartGameAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit___StartGameAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AppInit___StartGameAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3fbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___StartGameAsync_d__11>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AppInit___StartGameAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AppInit___StartGameAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AppInit___StartGameAsync_d__11::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___StartGameAsync_d__11>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AppInit___StartGameAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___StartGameAsync_d__11>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInit___StartGameAsync_d__11::__AppInit___StartGameAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInit___StartGameAsync_d__11::__AppInit___StartGameAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::__AppInit____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit____c::*)()>(&::GlobalNamespace::__AppInit____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3fc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInit____c._InitializeAsync_b__13_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AppInit____c::*)()>(&::GlobalNamespace::__AppInit____c::_InitializeAsync_b__13_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3fc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get(),
                                                                               "<InitializeAsync>b__13_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AppInit____c::setStaticF___9(::GlobalNamespace::__AppInit____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__AppInit____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get>(
      std::forward<::GlobalNamespace::__AppInit____c*>(value));
}
inline ::GlobalNamespace::__AppInit____c* GlobalNamespace::__AppInit____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__AppInit____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get>();
}
inline void GlobalNamespace::__AppInit____c::setStaticF___9__13_1(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__13_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::__AppInit____c::getStaticF___9__13_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__13_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get>();
}
inline ::GlobalNamespace::__AppInit____c* GlobalNamespace::__AppInit____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AppInit____c*>());
}
inline void GlobalNamespace::__AppInit____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AppInit____c::_InitializeAsync_b__13_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit____c*>::get(),
                                                                             "<InitializeAsync>b__13_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInit____c::__AppInit____c() {}
//  Writing Method size for method: ::GlobalNamespace::__AppInit___InitializeAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit___InitializeAsync_d__13::*)()>(
    &::GlobalNamespace::__AppInit___InitializeAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xe3fc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___InitializeAsync_d__13>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInit___InitializeAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInit___InitializeAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AppInit___InitializeAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe40288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___InitializeAsync_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AppInit___InitializeAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AppInit___InitializeAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AppInit___InitializeAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___InitializeAsync_d__13>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AppInit___InitializeAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInit___InitializeAsync_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_startType_5__2", ty: "::GlobalNamespace::__AppInit__AppStartType", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInit___InitializeAsync_d__13::__AppInit___InitializeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                  ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                                                                                  ::GlobalNamespace::__AppInit__AppStartType _startType_5__2,
                                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_startType_5__2 = _startType_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInit___InitializeAsync_d__13::__AppInit___InitializeAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::AppInit.get_gameScenesManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::GameScenesManager> (::GlobalNamespace::AppInit::*)()>(
    &::GlobalNamespace::AppInit::get_gameScenesManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3efe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "get_gameScenesManager",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.get_isTestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::get_isTestContext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe3eff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "get_isTestContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe3f010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.StartGameAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::StartGameAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe3f0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "StartGameAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.PreloadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::PreloadAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe3f16c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::InitializeAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe3f1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "InitializeAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xe3f2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.HandleBeforeDismissingScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::HandleBeforeDismissingScenes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3f42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(),
                                                                               "HandleBeforeDismissingScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.GetAppStartType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AppInit__AppStartType (::GlobalNamespace::AppInit::*)()>(
    &::GlobalNamespace::AppInit::GetAppStartType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe3f4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "GetAppStartType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe3f55c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.AppStartAndMultiSceneEditorSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(
    &::GlobalNamespace::AppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe3f560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit._InitializeAsync_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::_InitializeAsync_b__13_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe3f5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "<InitializeAsync>b__13_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AppInit::__cordl_internal_get__cameraGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AppInit::__cordl_internal_get__cameraGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraGO;
}
constexpr void GlobalNamespace::AppInit::__cordl_internal_set__cameraGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>& GlobalNamespace::AppInit::__cordl_internal_get__asyncSceneContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncSceneContext;
}
constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> const& GlobalNamespace::AppInit::__cordl_internal_get__asyncSceneContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncSceneContext;
}
constexpr void GlobalNamespace::AppInit::__cordl_internal_set__asyncSceneContext(::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncSceneContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*& GlobalNamespace::AppInit::__cordl_internal_get_sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*> const&
GlobalNamespace::AppInit::__cordl_internal_get_sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneSetupData;
}
constexpr void GlobalNamespace::AppInit::__cordl_internal_set_sceneSetupData(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppInitSetupData*& GlobalNamespace::AppInit::__cordl_internal_get__setupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& GlobalNamespace::AppInit::__cordl_internal_get__setupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr void GlobalNamespace::AppInit::__cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::AppInit::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::AppInit::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::AppInit::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::GameScenesManager> GlobalNamespace::AppInit::get_gameScenesManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "get_gameScenesManager",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameScenesManager>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AppInit::get_isTestContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "get_isTestContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::StartGameAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "StartGameAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::PreloadAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "InitializeAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::HandleBeforeDismissingScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "HandleBeforeDismissingScenes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AppInit__AppStartType GlobalNamespace::AppInit::GetAppStartType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "GetAppStartType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AppInit__AppStartType, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::AppStartAndMultiSceneEditorSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::RepeatableSetupAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::TransitionToNextScene() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInit* GlobalNamespace::AppInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AppInit*>());
}
inline void GlobalNamespace::AppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AppInit::_InitializeAsync_b__13_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInit*>::get(), "<InitializeAsync>b__13_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInit::AppInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
