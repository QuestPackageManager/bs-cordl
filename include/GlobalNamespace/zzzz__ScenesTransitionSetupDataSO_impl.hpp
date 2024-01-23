#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::*)()>(
    &::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xe2383c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe23a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> __4__this, bool runAsync,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->runAsync = runAsync;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::*)()>(
    &::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xe23a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe23c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.get_scenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> (
    ::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe236c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                                               "get_scenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.set_scenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(
    ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>)>(&::GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe236d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "set_scenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.get_beforeScenesWillBeActivatedTaskIsComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::get_beforeScenesWillBeActivatedTaskIsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe236d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                 "get_beforeScenesWillBeActivatedTaskIsComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.set_beforeScenesWillBeActivatedTaskIsComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(bool)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::set_beforeScenesWillBeActivatedTaskIsComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe236e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "set_beforeScenesWillBeActivatedTaskIsComplete",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(
    ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>, ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe23694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.BeforeScenesWillBeActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(bool)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe23270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "BeforeScenesWillBeActivated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.BeforeScenesWillBeActivatedAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe236ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xe21a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "InstallBindings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::ScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe236a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupDataSO._BeforeScenesWillBeActivated_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::ScenesTransitionSetupDataSO::_BeforeScenesWillBeActivated_b__10_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe23774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "<BeforeScenesWillBeActivated>b__10_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>&
GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__scenes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenes_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> const&
GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__scenes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenes_k__BackingField;
}
constexpr void
GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_set__scenes_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__sceneSetupDataArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupDataArray;
}
constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> const&
GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__sceneSetupDataArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupDataArray;
}
constexpr void
GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupDataArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeScenesWillBeActivatedTaskIsComplete_k__BackingField;
}
constexpr bool const& GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeScenesWillBeActivatedTaskIsComplete_k__BackingField;
}
constexpr void GlobalNamespace::ScenesTransitionSetupDataSO::__cordl_internal_set__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beforeScenesWillBeActivatedTaskIsComplete_k__BackingField = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                                             "get_scenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "set_scenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ScenesTransitionSetupDataSO::get_beforeScenesWillBeActivatedTaskIsComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                               "get_beforeScenesWillBeActivatedTaskIsComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::set_beforeScenesWillBeActivatedTaskIsComplete(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "set_beforeScenesWillBeActivatedTaskIsComplete",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::Init(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> scenes,
                                                               ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> sceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenes, sceneSetupData);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated(bool runAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "BeforeScenesWillBeActivated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runAsync);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "InstallBindings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::ScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::ScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ScenesTransitionSetupDataSO::_BeforeScenesWillBeActivated_b__10_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), "<BeforeScenesWillBeActivated>b__10_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO::ScenesTransitionSetupDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
