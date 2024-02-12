#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataHandMovementSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataHandMovementSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO);
// Type: ::MultiplayerBadgeDataHandMovementSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10898))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10897))
// CS Name: ::MultiplayerBadgeDataHandMovementSO*
class CORDL_TYPE MultiplayerBadgeDataHandMovementSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x129647c, size 0x2c, virtual true, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO* New_ctor();

  /// @brief Method .ctor, addr 0x12964a8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataHandMovementSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*, "", "MultiplayerBadgeDataHandMovementSO");
