#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusTestExperiment_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusTestExperiment_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusTestExperiment__ExperimentData.get_experimentPlatformKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusTestExperiment__ExperimentData::*)()>(
    &::GlobalNamespace::__OculusTestExperiment__ExperimentData::get_experimentPlatformKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23232a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment__ExperimentData*>::get(), "get_experimentPlatformKey",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusTestExperiment__ExperimentData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusTestExperiment__ExperimentData::*)(::StringW)>(
    &::GlobalNamespace::__OculusTestExperiment__ExperimentData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23232ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment__ExperimentData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IExperimentData"
constexpr GlobalNamespace::__OculusTestExperiment__ExperimentData::operator ::GlobalNamespace::IExperimentData*() noexcept {
  return static_cast<::GlobalNamespace::IExperimentData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IExperimentData"
constexpr ::GlobalNamespace::IExperimentData* GlobalNamespace::__OculusTestExperiment__ExperimentData::i___GlobalNamespace__IExperimentData() noexcept {
  return static_cast<::GlobalNamespace::IExperimentData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__OculusTestExperiment__ExperimentData::__get__experimentPlatformKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentPlatformKey;
}
constexpr ::StringW const& GlobalNamespace::__OculusTestExperiment__ExperimentData::__get__experimentPlatformKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentPlatformKey;
}
constexpr void GlobalNamespace::__OculusTestExperiment__ExperimentData::__set__experimentPlatformKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____experimentPlatformKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__OculusTestExperiment__ExperimentData::get_experimentPlatformKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment__ExperimentData*>::get(),
                                                                             "get_experimentPlatformKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OculusTestExperiment__ExperimentData* GlobalNamespace::__OculusTestExperiment__ExperimentData::New_ctor(::StringW experimentPlatformKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusTestExperiment__ExperimentData*>(experimentPlatformKey));
}
inline void GlobalNamespace::__OculusTestExperiment__ExperimentData::_ctor(::StringW experimentPlatformKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment__ExperimentData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, experimentPlatformKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusTestExperiment__ExperimentData::__OculusTestExperiment__ExperimentData() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusTestExperiment___Init_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusTestExperiment___Init_d__3::*)()>(
    &::GlobalNamespace::__OculusTestExperiment___Init_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x23232d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment___Init_d__3>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusTestExperiment___Init_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusTestExperiment___Init_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusTestExperiment___Init_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2323744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment___Init_d__3>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusTestExperiment___Init_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__OculusTestExperiment___Init_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OculusTestExperiment___Init_d__3::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment___Init_d__3>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusTestExperiment___Init_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusTestExperiment___Init_d__3>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusTestExperiment*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusTestExperiment___Init_d__3::__OculusTestExperiment___Init_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                    ::GlobalNamespace::OculusTestExperiment* __4__this,
                                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusTestExperiment___Init_d__3::__OculusTestExperiment___Init_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusTestExperiment::*)()>(&::GlobalNamespace::OculusTestExperiment::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2323208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusTestExperiment*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusTestExperiment::*)()>(&::GlobalNamespace::OculusTestExperiment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232329c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusTestExperiment*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IExperimentModel*& GlobalNamespace::OculusTestExperiment::__get__experimentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IExperimentModel*> const& GlobalNamespace::OculusTestExperiment::__get__experimentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentModel;
}
constexpr void GlobalNamespace::OculusTestExperiment::__set__experimentModel(::GlobalNamespace::IExperimentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____experimentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusTestExperiment::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusTestExperiment*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusTestExperiment* GlobalNamespace::OculusTestExperiment::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OculusTestExperiment*>());
}
inline void GlobalNamespace::OculusTestExperiment::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusTestExperiment*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusTestExperiment::OculusTestExperiment() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
