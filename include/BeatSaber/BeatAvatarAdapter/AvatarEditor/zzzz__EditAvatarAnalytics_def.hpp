#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EditAvatarAnalytics)
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__FinishAction;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace GlobalNamespace {
class BeatAvatarEditorFlowCoordinator;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics);
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarAnalytics
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15171))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15269))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarAnalytics*
class CORDL_TYPE EditAvatarAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarEditorFlowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarEditorFlowCoordinator,
                      put = __cordl_internal_set__avatarEditorFlowCoordinator))::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator> _avatarEditorFlowCoordinator;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _avatarDataModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarDataModel, put = __cordl_internal_set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _lastEditMode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastEditMode, put = __cordl_internal_set__lastEditMode))::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode _lastEditMode;

  constexpr ::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator>& __cordl_internal_get__avatarEditorFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator> const& __cordl_internal_get__avatarEditorFlowCoordinator() const;

  constexpr void __cordl_internal_set__avatarEditorFlowCoordinator(::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator> value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __cordl_internal_get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __cordl_internal_get__avatarDataModel() const;

  constexpr void __cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode& __cordl_internal_get__lastEditMode();

  constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode const& __cordl_internal_get__lastEditMode() const;

  constexpr void __cordl_internal_set__lastEditMode(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode value);

  /// @brief Method Awake, addr 0xe17a38, size 0x154, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0xe17b8c, size 0x1a0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleAvatarEditorFlowCoordinatorDidSetup, addr 0xe17d2c, size 0xd8, virtual false, abstract: false, final false
  inline void HandleAvatarEditorFlowCoordinatorDidSetup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode editMode);

  /// @brief Method HandleAvatarEditorFlowCoordinatorDidFinish, addr 0xe1807c, size 0xf8, virtual false, abstract: false, final false
  inline void HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata,
                                                         ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction finishAction);

  /// @brief Method HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed, addr 0xe18174, size 0xd0, virtual false, abstract: false, final false
  inline void HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed();

  /// @brief Method CreateEditAvatarEventData, addr 0xe17e04, size 0x278, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateEditAvatarEventData();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics* New_ctor();

  /// @brief Method .ctor, addr 0xe18244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarAnalytics(EditAvatarAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarAnalytics(EditAvatarAnalytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarAnalytics();

public:
  /// @brief Field _avatarEditorFlowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatAvatarEditorFlowCoordinator> ____avatarEditorFlowCoordinator;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _avatarDataModel, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _lastEditMode, offset: 0x30, size: 0x4, def value: None
  ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode ____lastEditMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics, ____avatarEditorFlowCoordinator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics, ____avatarDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics, ____lastEditMode) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "EditAvatarAnalytics");
