#pragma once
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
// Type: ::ILobbyGameStateControllerBase
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10916))
// CS Name: ::ILobbyGameStateControllerBase*
class CORDL_TYPE ILobbyGameStateControllerBase {
public:
  // Declarations
  /// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Deactivate();

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyGameStateControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILobbyGameStateControllerBase(ILobbyGameStateControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyGameStateControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyGameStateControllerBase(ILobbyGameStateControllerBase const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILobbyGameStateControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyGameStateControllerBase*, "", "ILobbyGameStateControllerBase");
