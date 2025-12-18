#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType::TutorialScenesTransitionSetupDataSO_TutorialEndStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType::TutorialScenesTransitionSetupDataSO_TutorialEndStateType() {}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType::Completed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType::ReturnToMenu{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType::Restart{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x577ec74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x577e198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::GameplayAdditionalInformation*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x577ed34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57805e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578060c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* const&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                       ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                                       ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSpecificSettings, environmentsListModel, gameplayAdditionalInformation);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType endState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endState);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* GlobalNamespace::TutorialScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialScenesTransitionSetupDataSO() {}
