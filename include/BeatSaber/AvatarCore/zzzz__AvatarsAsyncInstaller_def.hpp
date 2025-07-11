#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarsAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarsAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace BeatSaber::AvatarCore {
class AbstractAdapterInstallerSO;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarsAsyncInstaller;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarsAsyncInstaller);
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AvatarsAsyncInstaller
class CORDL_TYPE AvatarsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO>> {
public:
  // Declarations
  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x224bdc8, size 0xbc, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x224be84, size 0x3e8, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO>>* adaptersInstallers,
                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  static inline ::BeatSaber::AvatarCore::AvatarsAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x224c26c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x224bd88, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarsAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarsAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarsAsyncInstaller(AvatarsAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarsAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarsAsyncInstaller(AvatarsAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarsAsyncInstaller, 0x48>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarsAsyncInstaller*, "BeatSaber.AvatarCore", "AvatarsAsyncInstaller");
