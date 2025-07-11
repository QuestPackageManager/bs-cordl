#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatarAdapterInstallerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarAdapterInstallerSO)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarColorViewController;
}
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModelSO;
}
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSetSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarAdapterInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO);
// Dependencies BeatSaber.AvatarCore.AbstractAdapterInstallerSO
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.BeatAvatarAdapterInstallerSO
class CORDL_TYPE BeatAvatarAdapterInstallerSO : public ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO {
public:
  // Declarations
  /// @brief Field _avatarPartsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPartsModel, put = __cordl_internal_set__avatarPartsModel)) ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO> _avatarPartsModel;

  /// @brief Field _beatAvatarEditorViewController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatAvatarEditorViewController,
                      put = __cordl_internal_set__beatAvatarEditorViewController)) ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>
      _beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorView, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__editAvatarColorView,
                      put = __cordl_internal_set__editAvatarColorView)) ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController>
      _editAvatarColorView;

  /// @brief Field _settings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> _settings;

  /// @brief Field _skinColorSet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__skinColorSet, put = __cordl_internal_set__skinColorSet)) ::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO> _skinColorSet;

  /// @brief Method InstallBindings, addr 0x2254970, size 0x10, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallBindings, addr 0x2254980, size 0x20c, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* New_ctor();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO> const& __cordl_internal_get__avatarPartsModel() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO>& __cordl_internal_get__avatarPartsModel();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const& __cordl_internal_get__beatAvatarEditorViewController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>& __cordl_internal_get__beatAvatarEditorViewController();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> const& __cordl_internal_get__editAvatarColorView() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController>& __cordl_internal_get__editAvatarColorView();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> const& __cordl_internal_get__settings() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings>& __cordl_internal_get__settings();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO> const& __cordl_internal_get__skinColorSet() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO>& __cordl_internal_get__skinColorSet();

  constexpr void __cordl_internal_set__avatarPartsModel(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO> value);

  constexpr void __cordl_internal_set__beatAvatarEditorViewController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value);

  constexpr void __cordl_internal_set__editAvatarColorView(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> value);

  constexpr void __cordl_internal_set__settings(::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> value);

  constexpr void __cordl_internal_set__skinColorSet(::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO> value);

  /// @brief Method .ctor, addr 0x2254b8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarAdapterInstallerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarAdapterInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarAdapterInstallerSO(BeatAvatarAdapterInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarAdapterInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarAdapterInstallerSO(BeatAvatarAdapterInstallerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17712 };

  /// @brief Field _avatarPartsModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO> ____avatarPartsModel;

  /// @brief Field _skinColorSet, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO> ____skinColorSet;

  /// @brief Field _settings, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> ____settings;

  /// @brief Field _beatAvatarEditorViewController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> ____beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorView, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> ____editAvatarColorView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, ____avatarPartsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, ____skinColorSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, ____settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, ____beatAvatarEditorViewController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, ____editAvatarColorView) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, 0x48>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarAdapterInstallerSO");
