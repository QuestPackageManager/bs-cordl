#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataPrecisionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO);
// Dependencies MultiplayerBadgeDataMinMaxFloatSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgeDataPrecisionSO
class CORDL_TYPE MultiplayerBadgeDataPrecisionSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x26d935c, size 0x3c, virtual true, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataPrecisionSO* New_ctor();

  /// @brief Method .ctor, addr 0x26d9398, size 0x10, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*, "", "MultiplayerBadgeDataPrecisionSO");
