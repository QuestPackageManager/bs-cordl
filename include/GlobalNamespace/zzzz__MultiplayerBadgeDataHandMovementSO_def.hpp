#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataHandMovementSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*, "", "MultiplayerBadgeDataHandMovementSO");
// Dependencies MultiplayerBadgeDataMinMaxFloatSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgeDataHandMovementSO
class CORDL_TYPE MultiplayerBadgeDataHandMovementSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x372ef80, size 0x2c, virtual true, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO* New_ctor();

  /// @brief Method .ctor, addr 0x372efac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataHandMovementSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
