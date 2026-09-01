#pragma once
// IWYU pragma private; include "GlobalNamespace\RecordingToolSettingsFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a0d4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0d5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&::GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a0d680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator.HandleRecordingToolSettingsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a0d6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), { "HandleRecordingToolSettingsViewControllerDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&::GlobalNamespace::RecordingToolSettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0d734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), { ".ctor", {}, {} })));
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
  this->____recordingToolConfigViewController = value;
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
  this->____recordingToolSettingsViewController = value;
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
  this->____recordingToolLoggingViewController = value;
}
constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSceneSetupData;
}
constexpr ::GlobalNamespace::RecordingToolSceneSetupData* const& GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_get__recordingToolSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSceneSetupData;
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__cordl_internal_set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingToolSceneSetupData = value;
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), { "HandleRecordingToolSettingsViewControllerDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolSettingsFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator* GlobalNamespace::RecordingToolSettingsFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolSettingsFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettingsFlowCoordinator::RecordingToolSettingsFlowCoordinator() {}
