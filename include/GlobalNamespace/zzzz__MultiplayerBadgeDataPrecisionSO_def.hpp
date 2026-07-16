#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataPrecisionSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataPrecisionSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataPrecisionSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*, "", "MultiplayerBadgeDataPrecisionSO");
// Dependencies MultiplayerBadgeDataMinMaxFloatSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgeDataPrecisionSO
class CORDL_TYPE MultiplayerBadgeDataPrecisionSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x3730bf0, size 0x3c, virtual true, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataPrecisionSO* New_ctor();

  /// @brief Method .ctor, addr 0x3730c2c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataPrecisionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataPrecisionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataPrecisionSO(MultiplayerBadgeDataPrecisionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataPrecisionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataPrecisionSO(MultiplayerBadgeDataPrecisionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
