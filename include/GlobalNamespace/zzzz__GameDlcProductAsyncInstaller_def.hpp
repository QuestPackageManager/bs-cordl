#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcProductAsyncInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameDlcProductAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace GlobalNamespace {
class GameDlcProductSO;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameDlcProductAsyncInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameDlcProductAsyncInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcProductAsyncInstaller*, "", "GameDlcProductAsyncInstaller");
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameDlcProductAsyncInstaller
class CORDL_TYPE GameDlcProductAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::GameDlcProductSO>> {
public:
  // Declarations
  /// @brief Field _gameDlcProducts, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameDlcProducts,
                      put = __cordl_internal_set__gameDlcProducts)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* _gameDlcProducts;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x39ef424, size 0x180, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x39ef368, size 0xbc, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* assets,
                                         ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry);

  static inline ::GlobalNamespace::GameDlcProductAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* const& __cordl_internal_get__gameDlcProducts() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>*& __cordl_internal_get__gameDlcProducts();

  constexpr void __cordl_internal_set__gameDlcProducts(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* value);

  /// @brief Method .ctor, addr 0x39ef5a4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x39ef324, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcProductAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameDlcProductAsyncInstaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameDlcProductAsyncInstaller(GameDlcProductAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameDlcProductAsyncInstaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameDlcProductAsyncInstaller(GameDlcProductAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14591 };

  /// @brief Field _gameDlcProducts, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* ____gameDlcProducts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcProductAsyncInstaller, ____gameDlcProducts) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcProductAsyncInstaller) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
