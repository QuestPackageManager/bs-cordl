#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyDataModelInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(LobbyDataModelInstaller)
// Forward declare root types
namespace GlobalNamespace {
class LobbyDataModelInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyDataModelInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyDataModelInstaller
class CORDL_TYPE LobbyDataModelInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x3bf5e84, size 0x37c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::LobbyDataModelInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x3bf6200, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyDataModelInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyDataModelInstaller(LobbyDataModelInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyDataModelInstaller(LobbyDataModelInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyDataModelInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyDataModelInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyDataModelInstaller*, "", "LobbyDataModelInstaller");
