#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarAdapter\AvatarEditor\EditAvatarAnalytics.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarAnalytics_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatAvatarEditorFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::Awake)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3279030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::OnDestroy)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x32791bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics.HandleAvatarEditorFlowCoordinatorDidSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::HandleAvatarEditorFlowCoordinatorDidSetup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x32793cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(),
                                                { "HandleAvatarEditorFlowCoordinatorDidSetup", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics.HandleAvatarEditorFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3279800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(),
                                                { "HandleAvatarEditorFlowCoordinatorDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(),
                                                    ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics.HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3279904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(),
                                                                                           { "HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics.CreateEditAvatarEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::CreateEditAvatarEventData)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x32794b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { "CreateEditAvatarEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32799dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator>& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__avatarEditorFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditorFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__avatarEditorFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditorFlowCoordinator;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_set__avatarEditorFlowCoordinator(::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarEditorFlowCoordinator = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarDataModel = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__lastEditMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEditMode;
}
constexpr ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_get__lastEditMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEditMode;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::__cordl_internal_set__lastEditMode(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastEditMode = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::HandleAvatarEditorFlowCoordinatorDidSetup(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode editMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(),
                                                           { "HandleAvatarEditorFlowCoordinatorDidSetup", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editMode);
}
inline void
BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                            ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata,
                                                                                                            ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(),
                                              { "HandleAvatarEditorFlowCoordinatorDidFinish",
                                                {},
                                                { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(),
                                                  ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, avatarSystemMetadata, finishAction);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(),
                                                                                         { "HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::CreateEditAvatarEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { "CreateEditAvatarEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics* BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics::EditAvatarAnalytics() {}
