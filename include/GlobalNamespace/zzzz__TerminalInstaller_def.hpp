#pragma once
// IWYU pragma private; include "GlobalNamespace\TerminalInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(TerminalInstaller)
// Forward declare root types
namespace GlobalNamespace {
class TerminalInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TerminalInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerminalInstaller*, "", "TerminalInstaller");
// Dependencies Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerminalInstaller
class CORDL_TYPE TerminalInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x32eb9cc, size 0xbc, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::TerminalInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x32eba88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerminalInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerminalInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerminalInstaller(TerminalInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerminalInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerminalInstaller(TerminalInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19428 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TerminalInstaller) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
