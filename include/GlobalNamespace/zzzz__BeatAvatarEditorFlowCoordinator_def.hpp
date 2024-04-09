#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarEditorFlowCoordinator)
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarTweenController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarColorViewController;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatAvatarEditorFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatAvatarEditorFlowCoordinator);
// Type: ::BeatAvatarEditorFlowCoordinator
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatAvatarEditorFlowCoordinator*
class CORDL_TYPE BeatAvatarEditorFlowCoordinator : public ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator {
public:
  // Declarations
  /// @brief Field _avatarContainerGameObject, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarContainerGameObject, put = __cordl_internal_set__avatarContainerGameObject))::UnityW<::UnityEngine::GameObject> _avatarContainerGameObject;

  /// @brief Field _avatarDataModel, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarDataModel, put = __cordl_internal_set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _avatarTweenController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarTweenController,
                      put = __cordl_internal_set__avatarTweenController))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> _avatarTweenController;

  /// @brief Field _avatarVisualController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarVisualController,
                      put = __cordl_internal_set__avatarVisualController))::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> _avatarVisualController;

  /// @brief Field _beatAvatarEditorViewController, offset 0xe8, size 0x8
  __declspec(
      property(get = __cordl_internal_get__beatAvatarEditorViewController,
               put = __cordl_internal_set__beatAvatarEditorViewController))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> _beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__editAvatarColorViewController,
                      put = __cordl_internal_set__editAvatarColorViewController))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> _editAvatarColorViewController;

  /// @brief Field _parameterChangedAnimationCallbacks, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterChangedAnimationCallbacks,
                      put = __cordl_internal_set__parameterChangedAnimationCallbacks))::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,
                                                                                                                                   ::System::Action*>* _parameterChangedAnimationCallbacks;

  /// @brief Method DidActivate, addr 0xf55908, size 0x4f0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0xf56654, size 0x29c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleBeatAvatarEditorViewCancelButtonWasPressed, addr 0xf56fcc, size 0xc, virtual false, abstract: false, final false
  inline void HandleBeatAvatarEditorViewCancelButtonWasPressed();

  /// @brief Method HandleBeatAvatarEditorViewOkButtonWasPressed, addr 0xf56fd8, size 0xc, virtual false, abstract: false, final false
  inline void HandleBeatAvatarEditorViewOkButtonWasPressed();

  /// @brief Method HandleBeatAvatarViewControllerChangedAvatarPart, addr 0xf56f2c, size 0xa0, virtual false, abstract: false, final false
  inline void HandleBeatAvatarViewControllerChangedAvatarPart(::BeatSaber::BeatAvatarSDK::AvatarPart avatarPart);

  /// @brief Method HandleBeatAvatarViewControllerDidRequestColorChange, addr 0xf56e50, size 0x74, virtual false, abstract: false, final false
  inline void HandleBeatAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>* colorCallback, ::UnityEngine::Color currentColor,
                                                                  ::BeatSaber::BeatAvatarSDK::AvatarPart editPart, int32_t uvSegment);

  /// @brief Method HandleEditColorViewControllerControllerDidFinish, addr 0xf5700c, size 0x44, virtual false, abstract: false, final false
  inline void HandleEditColorViewControllerControllerDidFinish(bool apply);

  /// @brief Method HandleEditColorViewControllerDidChangedColor, addr 0xf56fe4, size 0x28, virtual false, abstract: false, final false
  inline void HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color);

  static inline ::GlobalNamespace::BeatAvatarEditorFlowCoordinator* New_ctor();

  /// @brief Method OneTimeInitialize, addr 0xf57050, size 0x4, virtual true, abstract: false, final false
  inline void OneTimeInitialize();

  /// @brief Method Setup, addr 0xf55840, size 0x38, virtual true, abstract: false, final false
  inline void Setup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode editMode);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__avatarContainerGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__avatarContainerGameObject();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __cordl_internal_get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __cordl_internal_get__avatarDataModel() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const& __cordl_internal_get__avatarTweenController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>& __cordl_internal_get__avatarTweenController();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> const& __cordl_internal_get__avatarVisualController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>& __cordl_internal_get__avatarVisualController();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const& __cordl_internal_get__beatAvatarEditorViewController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>& __cordl_internal_get__beatAvatarEditorViewController();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> const& __cordl_internal_get__editAvatarColorViewController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController>& __cordl_internal_get__editAvatarColorViewController();

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>*& __cordl_internal_get__parameterChangedAnimationCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>*> const&
  __cordl_internal_get__parameterChangedAnimationCallbacks() const;

  constexpr void __cordl_internal_set__avatarContainerGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr void __cordl_internal_set__avatarTweenController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value);

  constexpr void __cordl_internal_set__avatarVisualController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> value);

  constexpr void __cordl_internal_set__beatAvatarEditorViewController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value);

  constexpr void __cordl_internal_set__editAvatarColorViewController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> value);

  constexpr void __cordl_internal_set__parameterChangedAnimationCallbacks(::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* value);

  /// @brief Method .ctor, addr 0xf57054, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarEditorFlowCoordinator(BeatAvatarEditorFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarEditorFlowCoordinator(BeatAvatarEditorFlowCoordinator const&) = delete;

  /// @brief Field _avatarTweenController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> ____avatarTweenController;

  /// @brief Field _avatarContainerGameObject, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____avatarContainerGameObject;

  /// @brief Field _avatarVisualController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> ____avatarVisualController;

  /// @brief Field _beatAvatarEditorViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> ____beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> ____editAvatarColorViewController;

  /// @brief Field _avatarDataModel, offset: 0xf8, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _parameterChangedAnimationCallbacks, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* ____parameterChangedAnimationCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatAvatarEditorFlowCoordinator, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____avatarTweenController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____avatarContainerGameObject) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____avatarVisualController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____beatAvatarEditorViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____editAvatarColorViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____avatarDataModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatAvatarEditorFlowCoordinator, ____parameterChangedAnimationCallbacks) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatAvatarEditorFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatAvatarEditorFlowCoordinator*, "", "BeatAvatarEditorFlowCoordinator");
