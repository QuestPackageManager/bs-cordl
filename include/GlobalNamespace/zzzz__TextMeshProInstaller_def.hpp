#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextMeshProInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
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
// Type: ::TextMeshProInstaller
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TextMeshProInstaller*
class CORDL_TYPE TextMeshProInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::TMPro::TMP_FontAsset>> {
public:
  // Declarations
  /// @brief Field _fontAssets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__fontAssets, put = __cordl_internal_set__fontAssets))::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* _fontAssets;

  __declspec(property(get = get_assetLabelRuntimeKey))::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x250d840, size 0x140, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x250d7e8, size 0x58, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  static inline ::GlobalNamespace::TextMeshProInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get__fontAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*> const& __cordl_internal_get__fontAssets() const;

  constexpr void __cordl_internal_set__fontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method .ctor, addr 0x250d980, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x250d7a8, size 0x40, virtual true, abstract: false, final false
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

  /// @brief Field _fontAssets, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ____fontAssets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProInstaller, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextMeshProInstaller, ____fontAssets) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProInstaller*, "", "TextMeshProInstaller");
