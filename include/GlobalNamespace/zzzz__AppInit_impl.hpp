#pragma once
// IWYU pragma private; include "GlobalNamespace\AppInit.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__InitializationTime_def.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppInit___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit___c::*)()>(&::GlobalNamespace::AppInit___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ffc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit___c._InitializeAsync_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AppInit___c::*)()>(&::GlobalNamespace::AppInit___c::_InitializeAsync_b__10_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32ffc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit___c*>(), { "<InitializeAsync>b__10_1", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInit___c::setStaticF___9(::GlobalNamespace::AppInit___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::AppInit___c*, "<>9", ::GlobalNamespace::AppInit___c*>(std::forward<::GlobalNamespace::AppInit___c*>(value));
}
inline ::GlobalNamespace::AppInit___c* GlobalNamespace::AppInit___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::AppInit___c*, "<>9", ::GlobalNamespace::AppInit___c*>();
}
inline void GlobalNamespace::AppInit___c::setStaticF___9__10_1(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__10_1", ::GlobalNamespace::AppInit___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::AppInit___c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__10_1", ::GlobalNamespace::AppInit___c*>();
}
inline void GlobalNamespace::AppInit___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AppInit___c::_InitializeAsync_b__10_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit___c*>(), { "<InitializeAsync>b__10_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInit___c* GlobalNamespace::AppInit___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppInit___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInit___c::AppInit___c() {}
//  Writing Method size for method: ::GlobalNamespace::AppInit__Awake_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit__Awake_d__7::*)()>(&::GlobalNamespace::AppInit__Awake_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x32ffc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__Awake_d__7>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit__Awake_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit__Awake_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AppInit__Awake_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ffe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__Awake_d__7>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInit__Awake_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__Awake_d__7>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AppInit__Awake_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__Awake_d__7>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AppInit__Awake_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AppInit__Awake_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AppInit__Awake_d__7::AppInit__Awake_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                      ::UnityW<::GlobalNamespace::AppInit> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInit__Awake_d__7::AppInit__Awake_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::AppInit__InitializeAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit__InitializeAsync_d__10::*)()>(&::GlobalNamespace::AppInit__InitializeAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x32ffe80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__InitializeAsync_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit__InitializeAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit__InitializeAsync_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AppInit__InitializeAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3300584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__InitializeAsync_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInit__InitializeAsync_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__InitializeAsync_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AppInit__InitializeAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__InitializeAsync_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AppInit__InitializeAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AppInit__InitializeAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AppInit__InitializeAsync_d__10::AppInit__InitializeAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                            ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInit__InitializeAsync_d__10::AppInit__InitializeAsync_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::AppInit__StartGameAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit__StartGameAsync_d__8::*)()>(&::GlobalNamespace::AppInit__StartGameAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x33005f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__StartGameAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit__StartGameAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit__StartGameAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AppInit__StartGameAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3300cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__StartGameAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInit__StartGameAsync_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__StartGameAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AppInit__StartGameAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit__StartGameAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AppInit__StartGameAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AppInit__StartGameAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_currentInitialization_5__2", ty: "::BGLib::AppFlow::Initialization::InitializationTime*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AppInit__StartGameAsync_d__8::AppInit__StartGameAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                        ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                                                                        ::BGLib::AppFlow::Initialization::InitializationTime* _currentInitialization_5__2,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_currentInitialization_5__2 = _currentInitialization_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInit__StartGameAsync_d__8::AppInit__StartGameAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::AppInit.get_asyncSceneContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> (::GlobalNamespace::AppInit::*)()>(
    &::GlobalNamespace::AppInit::get_asyncSceneContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ff730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "get_asyncSceneContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.get_gameScenesManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameScenesManager> (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::get_gameScenesManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ff738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "get_gameScenesManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32ff740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.StartGameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::StartGameAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32ff7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "StartGameAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.PreInitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::AppInit::PreInitializeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { ::i2c::class_of<::GlobalNamespace::AppInit*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::AppInit::InitializeAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32ff898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "InitializeAsync", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32ff948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.HandleBeforeDismissingScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(
    &::GlobalNamespace::AppInit::HandleBeforeDismissingScenes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x32ffae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(),
                                                             { "HandleBeforeDismissingScenes", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { ::i2c::class_of<::GlobalNamespace::AppInit*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit.TransitionToNextSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::TransitionToNextSceneAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { ::i2c::class_of<::GlobalNamespace::AppInit*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ffb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInit._InitializeAsync_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AppInit::*)()>(&::GlobalNamespace::AppInit::_InitializeAsync_b__10_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32ffb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "<InitializeAsync>b__10_0", {}, {} })));
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
  this->____cameraGO = value;
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
  this->____asyncSceneContext = value;
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
  this->____gameScenesManager = value;
}
inline ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> GlobalNamespace::AppInit::get_asyncSceneContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "get_asyncSceneContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameScenesManager> GlobalNamespace::AppInit::get_gameScenesManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "get_gameScenesManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameScenesManager>>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::StartGameAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "StartGameAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::PreInitializeAsync(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AppInit*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::InitializeAsync(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "InitializeAsync", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, container);
}
inline void GlobalNamespace::AppInit::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::HandleBeforeDismissingScenes(::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "HandleBeforeDismissingScenes", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenes);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::RepeatableSetupAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AppInit*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AppInit::TransitionToNextSceneAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AppInit*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::AppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AppInit::_InitializeAsync_b__10_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInit*>(), { "<InitializeAsync>b__10_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInit* GlobalNamespace::AppInit::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppInit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInit::AppInit() {}
