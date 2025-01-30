#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AbstractAdapterInstallerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(AbstractAdapterInstallerSO)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AbstractAdapterInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO);
// Dependencies Zenject.ScriptableObjectInstaller
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AbstractAdapterInstallerSO
class CORDL_TYPE AbstractAdapterInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO* New_ctor();

  /// @brief Method .ctor, addr 0x22492dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractAdapterInstallerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractAdapterInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractAdapterInstallerSO(AbstractAdapterInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractAdapterInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractAdapterInstallerSO(AbstractAdapterInstallerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO, 0x20>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*, "BeatSaber.AvatarCore", "AbstractAdapterInstallerSO");
