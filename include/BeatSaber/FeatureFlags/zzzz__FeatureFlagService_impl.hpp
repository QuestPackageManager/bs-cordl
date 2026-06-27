#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlagService.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureFlagService_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_RemoteWithDependency_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureFlagService_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlags_def.hpp"
#include "BeatSaber/GraphQL/zzzz__IGraphQLClientProvider_def.hpp"
#include "Main/GraphQL/Models/zzzz__FeatureFlagsEnabledModel_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State::FeatureFlagService_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State::FeatureFlagService_State()   {
}
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State  BeatSaber::FeatureFlags::FeatureFlagService_State::Initializing{static_cast<int32_t>(0x0)};
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State  BeatSaber::FeatureFlags::FeatureFlagService_State::Ready{static_cast<int32_t>(0x1)};
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State  BeatSaber::FeatureFlags::FeatureFlagService_State::Offline{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService___c::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31f6878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService___c._QueryRemoteFlagsAsync_b__12_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::FeatureFlags::FeatureFlagService___c::*)(::GlobalNamespace::FeatureConfiguration_Remote*)>(&::BeatSaber::FeatureFlags::FeatureFlagService___c::_QueryRemoteFlagsAsync_b__12_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31f687c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get(),
                        "<QueryRemoteFlagsAsync>b__12_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FeatureConfiguration_Remote*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagService___c::setStaticF___9(::BeatSaber::FeatureFlags::FeatureFlagService___c*  value)  {
::cordl_internals::setStaticField<::BeatSaber::FeatureFlags::FeatureFlagService___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get>(std::forward<::BeatSaber::FeatureFlags::FeatureFlagService___c*>(value));
}
inline ::BeatSaber::FeatureFlags::FeatureFlagService___c* BeatSaber::FeatureFlags::FeatureFlagService___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::BeatSaber::FeatureFlags::FeatureFlagService___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get>();
}
inline void BeatSaber::FeatureFlags::FeatureFlagService___c::setStaticF___9__12_0(::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>* BeatSaber::FeatureFlags::FeatureFlagService___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get>();
}
inline void BeatSaber::FeatureFlags::FeatureFlagService___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::FeatureFlags::FeatureFlagService___c::_QueryRemoteFlagsAsync_b__12_0(::GlobalNamespace::FeatureConfiguration_Remote*  remote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService___c*>::get(),
                        "<QueryRemoteFlagsAsync>b__12_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FeatureConfiguration_Remote*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, remote);
}
inline ::BeatSaber::FeatureFlags::FeatureFlagService___c* BeatSaber::FeatureFlags::FeatureFlagService___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::FeatureFlags::FeatureFlagService___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService___c::FeatureFlagService___c()   {
}
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x31f6890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31f6fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::FeatureFlagService__InitializeAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11::FeatureFlagService__InitializeAsync_d__11()   {
}
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x31f705c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31f7378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "feature", ty: "::BeatSaber::FeatureFlags::Feature", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::FeatureFlagService__IsFeatureEnabledAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::BeatSaber::FeatureFlags::Feature  feature, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->feature = feature;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14::FeatureFlagService__IsFeatureEnabledAsync_d__14()   {
}
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x31f73f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31f7cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::FeatureFlagService__QueryRemoteFlagsAsync_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12::FeatureFlagService__QueryRemoteFlagsAsync_d__12()   {
}
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x31f7d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31f7ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::FeatureFlagService__WaitForInitialization_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17::FeatureFlagService__WaitForInitialization_d__17()   {
}
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService::*)(::BeatSaber::GraphQL::IGraphQLClientProvider*, ::BeatSaber::FeatureFlags::IFeatureFlags*, int32_t)>(&::BeatSaber::FeatureFlags::FeatureFlagService::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x31f5db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::IFeatureFlags*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService::Initialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31f5ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.InitializeAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>* (::BeatSaber::FeatureFlags::FeatureFlagService::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService::InitializeAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x31f5f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.QueryRemoteFlagsAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::FeatureFlags::FeatureFlagService::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService::QueryRemoteFlagsAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31f6064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "QueryRemoteFlagsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.IsFeatureEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::BeatSaber::FeatureFlags::FeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(&::BeatSaber::FeatureFlags::FeatureFlagService::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x31f6114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "IsFeatureEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.IsFeatureEnabledAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::FeatureFlags::FeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(&::BeatSaber::FeatureFlags::FeatureFlagService::IsFeatureEnabledAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x31f65d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "IsFeatureEnabledAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.GetRemoteFlag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::BeatSaber::FeatureFlags::FeatureFlagService::*)(::GlobalNamespace::FeatureConfiguration_Remote*)>(&::BeatSaber::FeatureFlags::FeatureFlagService::GetRemoteFlag)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x31f64ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "GetRemoteFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FeatureConfiguration_Remote*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.GetRemoteFlagWithDependency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::BeatSaber::FeatureFlags::FeatureFlagService::*)(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*)>(&::BeatSaber::FeatureFlags::FeatureFlagService::GetRemoteFlagWithDependency)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31f63ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "GetRemoteFlagWithDependency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService.WaitForInitialization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::FeatureFlags::FeatureFlagService::*)()>(&::BeatSaber::FeatureFlags::FeatureFlagService::WaitForInitialization)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31f66c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "WaitForInitialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagService._Initialize_b__10_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagService::*)(::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>*)>(&::BeatSaber::FeatureFlags::FeatureFlagService::_Initialize_b__10_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31f6774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "<Initialize>b__10_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider*& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__graphQlClientProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQlClientProvider;
}
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__graphQlClientProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQlClientProvider;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__graphQlClientProvider(::BeatSaber::GraphQL::IGraphQLClientProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQlClientProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::FeatureFlags::IFeatureFlags*& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__features()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____features;
}
constexpr ::BeatSaber::FeatureFlags::IFeatureFlags* const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__features() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____features;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__features(::BeatSaber::FeatureFlags::IFeatureFlags*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____features)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get_kLogPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kLogPrefix;
}
constexpr ::StringW const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get_kLogPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kLogPrefix;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set_kLogPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kLogPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__initializationTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__initializationTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTask;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::TimeSpan& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__initializationTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTimeout;
}
constexpr ::System::TimeSpan const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__initializationTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTimeout;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__initializationTimeout(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializationTimeout = value;
}
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__state(::BeatSaber::FeatureFlags::FeatureFlagService_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__remoteFlagsResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteFlagsResponse;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__remoteFlagsResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteFlagsResponse;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__remoteFlagsResponse(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____remoteFlagsResponse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__graphQLClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClient;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_get__graphQLClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClient;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlagService::__cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::FeatureFlags::FeatureFlagService::_ctor(::BeatSaber::GraphQL::IGraphQLClientProvider*  graphQlClientProvider, ::BeatSaber::FeatureFlags::IFeatureFlags*  features, int32_t  initializationTimeoutSecs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::IFeatureFlags*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphQlClientProvider, features, initializationTimeoutSecs);
}
inline void BeatSaber::FeatureFlags::FeatureFlagService::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>* BeatSaber::FeatureFlags::FeatureFlagService::InitializeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::FeatureFlags::FeatureFlagService::QueryRemoteFlagsAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "QueryRemoteFlagsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> BeatSaber::FeatureFlags::FeatureFlagService::IsFeatureEnabled(::BeatSaber::FeatureFlags::Feature  feature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "IsFeatureEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::FeatureFlags::FeatureFlagService::IsFeatureEnabledAsync(::BeatSaber::FeatureFlags::Feature  feature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "IsFeatureEnabledAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, feature);
}
inline ::System::Nullable_1<bool> BeatSaber::FeatureFlags::FeatureFlagService::GetRemoteFlag(::GlobalNamespace::FeatureConfiguration_Remote*  remoteFlag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "GetRemoteFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FeatureConfiguration_Remote*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, remoteFlag);
}
inline ::System::Nullable_1<bool> BeatSaber::FeatureFlags::FeatureFlagService::GetRemoteFlagWithDependency(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*  remoteWithDep)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "GetRemoteFlagWithDependency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, remoteWithDep);
}
inline ::System::Threading::Tasks::Task* BeatSaber::FeatureFlags::FeatureFlagService::WaitForInitialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "WaitForInitialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::FeatureFlagService::_Initialize_b__10_0(::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagService*>::get(),
                        "<Initialize>b__10_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::BeatSaber::FeatureFlags::FeatureFlagService* BeatSaber::FeatureFlags::FeatureFlagService::New_ctor(::BeatSaber::GraphQL::IGraphQLClientProvider*  graphQlClientProvider, ::BeatSaber::FeatureFlags::IFeatureFlags*  features, int32_t  initializationTimeoutSecs)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::FeatureFlags::FeatureFlagService*>(graphQlClientProvider, features, initializationTimeoutSecs));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  BeatSaber::FeatureFlags::FeatureFlagService::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::FeatureFlags::FeatureFlagService::i___Zenject__IInitializable() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BeatSaber::FeatureFlags::IFeatureFlagService"
constexpr  BeatSaber::FeatureFlags::FeatureFlagService::operator ::BeatSaber::FeatureFlags::IFeatureFlagService*() noexcept {
return static_cast<::BeatSaber::FeatureFlags::IFeatureFlagService*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::FeatureFlags::IFeatureFlagService"
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* BeatSaber::FeatureFlags::FeatureFlagService::i___BeatSaber__FeatureFlags__IFeatureFlagService() noexcept {
return static_cast<::BeatSaber::FeatureFlags::IFeatureFlagService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagService::FeatureFlagService()   {
}
