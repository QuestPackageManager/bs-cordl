#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarEditorFlowCoordinator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarTweenController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarColorViewController;
}
namespace System {
class Action;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15172))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15254))
// CS Name: ::BeatAvatarEditorFlowCoordinator*
class CORDL_TYPE BeatAvatarEditorFlowCoordinator : public ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator {
public:
  // Declarations
  /// @brief Field _avatarTweenController, offset 0xd0, size 0x8
  __declspec(property(get = __get__avatarTweenController, put = __set__avatarTweenController))::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* _avatarTweenController;

  /// @brief Field _avatarContainerGameObject, offset 0xd8, size 0x8
  __declspec(property(get = __get__avatarContainerGameObject, put = __set__avatarContainerGameObject))::UnityEngine::GameObject* _avatarContainerGameObject;

  /// @brief Field _avatarVisualController, offset 0xe0, size 0x8
  __declspec(property(get = __get__avatarVisualController, put = __set__avatarVisualController))::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* _avatarVisualController;

  /// @brief Field _beatAvatarEditorViewController, offset 0xe8, size 0x8
  __declspec(property(get = __get__beatAvatarEditorViewController,
                      put = __set__beatAvatarEditorViewController))::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* _beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorViewController, offset 0xf0, size 0x8
  __declspec(property(get = __get__editAvatarColorViewController,
                      put = __set__editAvatarColorViewController))::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* _editAvatarColorViewController;

  /// @brief Field _avatarDataModel, offset 0xf8, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _parameterChangedAnimationCallbacks, offset 0x100, size 0x8
  __declspec(property(
      get = __get__parameterChangedAnimationCallbacks,
      put = __set__parameterChangedAnimationCallbacks))::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* _parameterChangedAnimationCallbacks;

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*& __get__avatarTweenController();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> const& __get__avatarTweenController() const;

  constexpr void __set__avatarTweenController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* value);

  constexpr ::UnityEngine::GameObject*& __get__avatarContainerGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__avatarContainerGameObject() const;

  constexpr void __set__avatarContainerGameObject(::UnityEngine::GameObject* value);

  constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*& __get__avatarVisualController();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*> const& __get__avatarVisualController() const;

  constexpr void __set__avatarVisualController(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*& __get__beatAvatarEditorViewController();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> const& __get__beatAvatarEditorViewController() const;

  constexpr void __set__beatAvatarEditorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*& __get__editAvatarColorViewController();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*> const& __get__editAvatarColorViewController() const;

  constexpr void __set__editAvatarColorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>*& __get__parameterChangedAnimationCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>*> const&
  __get__parameterChangedAnimationCallbacks() const;

  constexpr void __set__parameterChangedAnimationCallbacks(::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* value);

  /// @brief Method Setup addr 0xe11c90 size 0x38 virtual true final false
  inline void Setup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode editMode);

  /// @brief Method DidActivate addr 0xe11d58 size 0x4f0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0xe12aa4 size 0x29c virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleBeatAvatarViewControllerDidRequestColorChange addr 0xe132a0 size 0x74 virtual false final false
  inline void HandleBeatAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>* colorCallback, ::UnityEngine::Color currentColor,
                                                                  ::BeatSaber::BeatAvatarSDK::AvatarPart editPart, int32_t uvSegment);

  /// @brief Method HandleBeatAvatarViewControllerChangedAvatarPart addr 0xe1337c size 0xa0 virtual false final false
  inline void HandleBeatAvatarViewControllerChangedAvatarPart(::BeatSaber::BeatAvatarSDK::AvatarPart avatarPart);

  /// @brief Method HandleBeatAvatarEditorViewCancelButtonWasPressed addr 0xe1341c size 0xc virtual false final false
  inline void HandleBeatAvatarEditorViewCancelButtonWasPressed();

  /// @brief Method HandleBeatAvatarEditorViewOkButtonWasPressed addr 0xe13428 size 0xc virtual false final false
  inline void HandleBeatAvatarEditorViewOkButtonWasPressed();

  /// @brief Method HandleEditColorViewControllerDidChangedColor addr 0xe13434 size 0x28 virtual false final false
  inline void HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color);

  /// @brief Method HandleEditColorViewControllerControllerDidFinish addr 0xe1345c size 0x80 virtual false final false
  inline void HandleEditColorViewControllerControllerDidFinish(bool apply);

  /// @brief Method OneTimeInitialize addr 0xe1350c size 0x4 virtual true final false
  inline void OneTimeInitialize();

  static inline ::GlobalNamespace::BeatAvatarEditorFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0xe13510 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarEditorFlowCoordinator(BeatAvatarEditorFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarEditorFlowCoordinator(BeatAvatarEditorFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorFlowCoordinator();

public:
  /// @brief Field _avatarTweenController, offset: 0xd0, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* ____avatarTweenController;

  /// @brief Field _avatarContainerGameObject, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____avatarContainerGameObject;

  /// @brief Field _avatarVisualController, offset: 0xe0, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* ____avatarVisualController;

  /// @brief Field _beatAvatarEditorViewController, offset: 0xe8, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* ____beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorViewController, offset: 0xf0, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* ____editAvatarColorViewController;

  /// @brief Field _avatarDataModel, offset: 0xf8, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _parameterChangedAnimationCallbacks, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* ____parameterChangedAnimationCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatAvatarEditorFlowCoordinator, 0x108>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatAvatarEditorFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatAvatarEditorFlowCoordinator*, "", "BeatAvatarEditorFlowCoordinator");
