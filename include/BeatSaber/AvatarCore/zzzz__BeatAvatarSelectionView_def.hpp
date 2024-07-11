#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/BeatAvatarSelectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarSelectionView)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarTweenController;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class BeatAvatarSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::BeatAvatarSelectionView);
// Type: BeatSaber.AvatarCore::BeatAvatarSelectionView
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::BeatAvatarSelectionView*
class CORDL_TYPE BeatAvatarSelectionView : public ::BeatSaber::AvatarCore::AvatarSelectionView {
public:
  // Declarations
  /// @brief Field _avatarContainer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarContainer, put = __cordl_internal_set__avatarContainer))::UnityW<::UnityEngine::GameObject> _avatarContainer;

  /// @brief Field _avatarDataModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarDataModel, put = __cordl_internal_set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _avatarTweenController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarTweenController,
                      put = __cordl_internal_set__avatarTweenController))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> _avatarTweenController;

  /// @brief Field _beatAvatarVisualController, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__beatAvatarVisualController,
                      put = __cordl_internal_set__beatAvatarVisualController))::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> _beatAvatarVisualController;

  /// @brief Method Activate, addr 0x105608c, size 0x48, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0x10560d4, size 0x24, virtual true, abstract: false, final false
  inline void Deactivate();

  /// @brief Method HandleAvatarDataModelDidChangeAvatarData, addr 0x10560f8, size 0x4, virtual false, abstract: false, final false
  inline void HandleAvatarDataModelDidChangeAvatarData(::BeatSaber::BeatAvatarSDK::AvatarData* data);

  /// @brief Method Init, addr 0x1055ef0, size 0x94, virtual false, abstract: false, final false
  inline void Init();

  static inline ::BeatSaber::AvatarCore::BeatAvatarSelectionView* New_ctor();

  /// @brief Method OnDestroy, addr 0x1055fac, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetCreated, addr 0x1056044, size 0x48, virtual true, abstract: false, final false
  inline void SetCreated(bool isCreated);

  /// @brief Method UpdateAvatarVisuals, addr 0x1055f84, size 0x28, virtual false, abstract: false, final false
  inline void UpdateAvatarVisuals();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__avatarContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__avatarContainer();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __cordl_internal_get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __cordl_internal_get__avatarDataModel() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const& __cordl_internal_get__avatarTweenController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>& __cordl_internal_get__avatarTweenController();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> const& __cordl_internal_get__beatAvatarVisualController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>& __cordl_internal_get__beatAvatarVisualController();

  constexpr void __cordl_internal_set__avatarContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr void __cordl_internal_set__avatarTweenController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value);

  constexpr void __cordl_internal_set__beatAvatarVisualController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> value);

  /// @brief Method .ctor, addr 0x10560fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarSelectionView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarSelectionView(BeatAvatarSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarSelectionView(BeatAvatarSelectionView const&) = delete;

  /// @brief Field _avatarContainer, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____avatarContainer;

  /// @brief Field _beatAvatarVisualController, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> ____beatAvatarVisualController;

  /// @brief Field _avatarTweenController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> ____avatarTweenController;

  /// @brief Field _avatarDataModel, offset: 0xa0, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::BeatAvatarSelectionView, 0xa8>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::BeatAvatarSelectionView, ____avatarContainer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::BeatAvatarSelectionView, ____beatAvatarVisualController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::BeatAvatarSelectionView, ____avatarTweenController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::BeatAvatarSelectionView, ____avatarDataModel) == 0xa0, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::BeatAvatarSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::BeatAvatarSelectionView*, "BeatSaber.AvatarCore", "BeatAvatarSelectionView");
