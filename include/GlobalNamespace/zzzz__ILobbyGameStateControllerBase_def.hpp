#pragma once
// IWYU pragma private; include "GlobalNamespace/ILobbyGameStateControllerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILobbyGameStateControllerBase)
// Forward declare root types
namespace GlobalNamespace {
class ILobbyGameStateControllerBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILobbyGameStateControllerBase);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILobbyGameStateControllerBase
class CORDL_TYPE ILobbyGameStateControllerBase {
public:
  // Declarations
  /// @brief Method Activate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Deactivate();

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyGameStateControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyGameStateControllerBase(ILobbyGameStateControllerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13089 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILobbyGameStateControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyGameStateControllerBase*, "", "ILobbyGameStateControllerBase");
