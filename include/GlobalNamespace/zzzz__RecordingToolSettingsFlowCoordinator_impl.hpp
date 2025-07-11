#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettingsFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*)>(&::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c084dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::__cordl_internal_get_nextScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::__cordl_internal_get_nextScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::__cordl_internal_set_nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextScenesTransitionSetupData);
}
inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData*
GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData*>(nextScenesTransitionSetupData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData::RecordingToolSettingsFlowCoordinator_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3c082e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c083cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c08468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.HandleRecordingToolSettingsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c08494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                 "HandleRecordingToolSettingsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.GoToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::GoToNextScene)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3c08498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                                               "GoToNextScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c084d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RecordingToolConfigViewController>& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolConfigViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolConfigViewController;
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolConfigViewController> const& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolConfigViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolConfigViewController;
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_set__recordingToolConfigViewController(::UnityW<::GlobalNamespace::RecordingToolConfigViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolConfigViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController>& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolSettingsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSettingsViewController;
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> const&
GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolSettingsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSettingsViewController;
}
constexpr void
GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_set__recordingToolSettingsViewController(::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolSettingsViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController>& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolLoggingViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolLoggingViewController;
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> const&
GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolLoggingViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolLoggingViewController;
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_set__recordingToolLoggingViewController(::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolLoggingViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData*& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData* const& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_set__initData(::GlobalNamespace::RecordingToolSettingsFlowCoordinator_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                               "HandleRecordingToolSettingsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::GoToNextScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                                             "GoToNextScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator* GlobalNamespace::RecordingToolSettingsFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettingsFlowCoordinator::RecordingToolSettingsFlowCoordinator() {}
