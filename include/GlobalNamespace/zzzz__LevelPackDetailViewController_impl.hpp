#pragma once
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelPackDetailViewController__ContentType::__LevelPackDetailViewController__ContentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelPackDetailViewController__ContentType::__LevelPackDetailViewController__ContentType() {}
constexpr ::GlobalNamespace::__LevelPackDetailViewController__ContentType GlobalNamespace::__LevelPackDetailViewController__ContentType::Loading{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LevelPackDetailViewController__ContentType GlobalNamespace::__LevelPackDetailViewController__ContentType::Owned{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__LevelPackDetailViewController__ContentType GlobalNamespace::__LevelPackDetailViewController__ContentType::Buy{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__LevelPackDetailViewController__ContentType GlobalNamespace::__LevelPackDetailViewController__ContentType::Error{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0._DidActivate_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22c06e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>::get(),
                                                 "<DidActivate>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0._DidActivate_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22c0710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>::get(),
                                                 "<DidActivate>b__2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__get_handleDidPressRefreshButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handleDidPressRefreshButton;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__get_handleDidPressRefreshButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handleDidPressRefreshButton;
}
constexpr void GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__set_handleDidPressRefreshButton(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handleDidPressRefreshButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelPackDetailViewController*& GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> const&
GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__set___4__this(::GlobalNamespace::LevelPackDetailViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0* GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>::get(),
                                               "<DidActivate>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::_DidActivate_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*>::get(),
                                               "<DidActivate>b__2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0::__LevelPackDetailViewController____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::*)()>(
    &::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x22c073c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c0bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelPackDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelPackDetailViewController* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::*)()>(
    &::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x22c0bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c0fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelPackDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelPackDetailViewController* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(::GlobalNamespace::IBeatmapLevelPack*)>(
    &::GlobalNamespace::LevelPackDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x22bafcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelPackDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x22bfd34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(bool, bool)>(
    &::GlobalNamespace::LevelPackDetailViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22bff88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x22c0094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.RefreshAvailabilityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22bfca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                               "RefreshAvailabilityAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22c0200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                               "BuyPackButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22c030c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                               "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.ShowContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(
    ::GlobalNamespace::__LevelPackDetailViewController__ContentType, ::StringW)>(&::GlobalNamespace::LevelPackDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x22c03a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), "ShowContent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelPackDetailViewController__ContentType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22c0674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                               "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22c0678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController._DidActivate_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__16_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22c06e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                               "<DidActivate>b__16_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelPackDetailViewController::__get__detailWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelPackDetailViewController::__get__detailWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailWrapper;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__detailWrapper(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____detailWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::LevelPackDetailViewController::__get__packImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packImage;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::LevelPackDetailViewController::__get__packImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packImage;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__packImage(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::LevelPackDetailViewController::__get__buyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::LevelPackDetailViewController::__get__buyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyButton;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__buyButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelPackDetailViewController::__get__buyContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelPackDetailViewController::__get__buyContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyContainer;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__buyContainer(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buyContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LoadingControl*& GlobalNamespace::LevelPackDetailViewController::__get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& GlobalNamespace::LevelPackDetailViewController::__get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__loadingControl(::GlobalNamespace::LoadingControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelPackDetailViewController::__get__requireInternetContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireInternetContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelPackDetailViewController::__get__requireInternetContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireInternetContainer;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__requireInternetContainer(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requireInternetContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO*& GlobalNamespace::LevelPackDetailViewController::__get__kawaseBlurRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> const& GlobalNamespace::LevelPackDetailViewController::__get__kawaseBlurRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kawaseBlurRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::LevelPackDetailViewController::__get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& GlobalNamespace::LevelPackDetailViewController::__get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::LevelPackDetailViewController::__get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& GlobalNamespace::LevelPackDetailViewController::__get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::LevelPackDetailViewController::__get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::LevelPackDetailViewController::__get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::LevelPackDetailViewController::__get__eventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& GlobalNamespace::LevelPackDetailViewController::__get__eventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__eventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelPackDetailViewController::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::LevelPackDetailViewController::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack*& GlobalNamespace::LevelPackDetailViewController::__get__pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& GlobalNamespace::LevelPackDetailViewController::__get__pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__pack(::GlobalNamespace::IBeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::LevelPackDetailViewController::__get__blurredPackArtwork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurredPackArtwork;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::LevelPackDetailViewController::__get__blurredPackArtwork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurredPackArtwork;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__set__blurredPackArtwork(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blurredPackArtwork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelPackDetailViewController::SetData(::GlobalNamespace::IBeatmapLevelPack* pack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack);
}
inline void GlobalNamespace::LevelPackDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelPackDetailViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelPackDetailViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                             "RefreshAvailabilityAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                             "BuyPackButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                             "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param errorText: ::StringW (default: u"")
inline void GlobalNamespace::LevelPackDetailViewController::ShowContent(::GlobalNamespace::__LevelPackDetailViewController__ContentType contentType, ::StringW errorText) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), "ShowContent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelPackDetailViewController__ContentType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, errorText);
}
inline void GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                             "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelPackDetailViewController* GlobalNamespace::LevelPackDetailViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelPackDetailViewController*>());
}
inline void GlobalNamespace::LevelPackDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__16_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackDetailViewController*>::get(),
                                                                             "<DidActivate>b__16_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackDetailViewController::LevelPackDetailViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
