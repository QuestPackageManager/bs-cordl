#pragma once
// IWYU pragma private; include "GlobalNamespace\RecordingToolInstallerSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolInstallerSO)
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RecordingToolInstallerSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RecordingToolInstallerSO*, "", "RecordingToolInstallerSO");
// Dependencies Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolInstallerSO
class CORDL_TYPE RecordingToolInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x58fdc78, size 0x218, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::RecordingToolInstallerSO* New_ctor();

  /// @brief Method .ctor, addr 0x58fde90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolInstallerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolInstallerSO(RecordingToolInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolInstallerSO(RecordingToolInstallerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RecordingToolInstallerSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
