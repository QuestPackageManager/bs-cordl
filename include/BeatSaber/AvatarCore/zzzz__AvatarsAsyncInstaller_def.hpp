#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
CORDL_MODULE_EXPORT(AvatarsAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BeatSaber::AvatarCore {
class AbstractAdapterInstallerSO;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarsAsyncInstaller;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarsAsyncInstaller);
// Type: BeatSaber.AvatarCore::AvatarsAsyncInstaller
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15165)), TypeDefinitionIndex(TypeDefinitionIndex(15420)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15420), inst:
// 736 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(15176)) CS Name: ::BeatSaber.AvatarCore::AvatarsAsyncInstaller*
class CORDL_TYPE AvatarsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO>> {
public:
  // Declarations
  /// @brief Field _avatarAdapterLabel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarAdapterLabel, put = __cordl_internal_set__avatarAdapterLabel))::UnityEngine::AddressableAssets::AssetLabelReference* _avatarAdapterLabel;

  __declspec(property(get = get_assetLabel))::UnityEngine::AddressableAssets::AssetLabelReference* assetLabel;

  constexpr ::UnityEngine::AddressableAssets::AssetLabelReference*& __cordl_internal_get__avatarAdapterLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> const& __cordl_internal_get__avatarAdapterLabel() const;

  constexpr void __cordl_internal_set__avatarAdapterLabel(::UnityEngine::AddressableAssets::AssetLabelReference* value);

  /// @brief Method get_assetLabel, addr 0xe0bdc8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel();

  /// @brief Method InstallBindings, addr 0xe0bdd0, size 0xbc, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0xe0be8c, size 0x3ec, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO>>* adaptersInstallers,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  static inline ::BeatSaber::AvatarCore::AvatarsAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0xe0c278, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarsAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarsAsyncInstaller(AvatarsAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarsAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarsAsyncInstaller(AvatarsAsyncInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarsAsyncInstaller();

public:
  /// @brief Field _avatarAdapterLabel, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetLabelReference* ____avatarAdapterLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarsAsyncInstaller, 0x48>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarsAsyncInstaller, ____avatarAdapterLabel) == 0x40, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarsAsyncInstaller*, "BeatSaber.AvatarCore", "AvatarsAsyncInstaller");
