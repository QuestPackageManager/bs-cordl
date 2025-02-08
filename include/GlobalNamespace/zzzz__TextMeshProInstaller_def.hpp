#pragma once
// IWYU pragma private; include "GlobalNamespace/TextMeshProInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextMeshProInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextMeshProInstaller);
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextMeshProInstaller
class CORDL_TYPE TextMeshProInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::TMPro::TMP_FontAsset>> {
public:
  // Declarations
  /// @brief Field _fontAssets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fontAssets, put = __cordl_internal_set__fontAssets)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* _fontAssets;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x271da98, size 0x140, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x271da40, size 0x58, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets,
                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  static inline ::GlobalNamespace::TextMeshProInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& __cordl_internal_get__fontAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get__fontAssets();

  constexpr void __cordl_internal_set__fontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method .ctor, addr 0x271dbd8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x271da00, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshProInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshProInstaller(TextMeshProInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshProInstaller(TextMeshProInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17806 };

  /// @brief Field _fontAssets, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ____fontAssets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextMeshProInstaller, ____fontAssets) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProInstaller, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProInstaller*, "", "TextMeshProInstaller");
