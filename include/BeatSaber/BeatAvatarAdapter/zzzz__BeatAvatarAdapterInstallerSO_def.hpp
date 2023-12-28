#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarAdapterInstallerSO)
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSetSO;
}
namespace Zenject {
class DiContainer;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarColorViewController;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModelSO;
}
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarAdapterInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatarAdapterInstallerSO
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15258))
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*
class CORDL_TYPE BeatAvatarAdapterInstallerSO : public ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO {
public:
  // Declarations
  /// @brief Field _avatarPartsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* _avatarPartsModel;

  /// @brief Field _skinColorSet, offset 0x28, size 0x8
  __declspec(property(get = __get__skinColorSet, put = __set__skinColorSet))::BeatSaber::BeatAvatarSDK::SkinColorSetSO* _skinColorSet;

  /// @brief Field _settings, offset 0x30, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* _settings;

  /// @brief Field _beatAvatarEditorViewController, offset 0x38, size 0x8
  __declspec(property(get = __get__beatAvatarEditorViewController,
                      put = __set__beatAvatarEditorViewController))::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* _beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorView, offset 0x40, size 0x8
  __declspec(property(get = __get__editAvatarColorView, put = __set__editAvatarColorView))::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* _editAvatarColorView;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* value);

  constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO*& __get__skinColorSet();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*> const& __get__skinColorSet() const;

  constexpr void __set__skinColorSet(::BeatSaber::BeatAvatarSDK::SkinColorSetSO* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> const& __get__settings() const;

  constexpr void __set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*& __get__beatAvatarEditorViewController();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> const& __get__beatAvatarEditorViewController() const;

  constexpr void __set__beatAvatarEditorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*& __get__editAvatarColorView();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*> const& __get__editAvatarColorView() const;

  constexpr void __set__editAvatarColorView(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* value);

  /// @brief Method InstallBindings addr 0xe14484 size 0x10 virtual true final false
  inline void InstallBindings();

  /// @brief Method InstallBindings addr 0xe14494 size 0x210 virtual true final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* New_ctor();

  /// @brief Method .ctor addr 0xe146a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarAdapterInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarAdapterInstallerSO(BeatAvatarAdapterInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarAdapterInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarAdapterInstallerSO(BeatAvatarAdapterInstallerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarAdapterInstallerSO();

public:
  /// @brief Field _avatarPartsModel, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* ____avatarPartsModel;

  /// @brief Field _skinColorSet, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* ____skinColorSet;

  /// @brief Field _settings, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* ____settings;

  /// @brief Field _beatAvatarEditorViewController, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* ____beatAvatarEditorViewController;

  /// @brief Field _editAvatarColorView, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* ____editAvatarColorView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, 0x48>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarAdapterInstallerSO");
