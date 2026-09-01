#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\FeatureAsyncInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FeatureAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class FeatureAsyncInstaller;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*, "BGLib.AppFlow.Initialization", "FeatureAsyncInstaller");
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.FeatureAsyncInstaller
class CORDL_TYPE FeatureAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::Zenject::ScriptableObjectInstaller>> {
public:
  // Declarations
  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x330a1f0, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x3309ecc, size 0x324, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* scriptableObjectInstallers,
                                         ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry);

  static inline ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x330a1f4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x3309e88, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureAsyncInstaller(FeatureAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureAsyncInstaller(FeatureAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21563 };

  /// @brief Field kFeatureAsyncInstallerLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kFeatureAsyncInstallerLabel{ u"FeatureInstaller" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::AppFlow::Initialization::FeatureAsyncInstaller) == 0x50, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
