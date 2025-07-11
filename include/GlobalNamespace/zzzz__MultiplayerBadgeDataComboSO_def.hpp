#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataComboSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataComboSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataComboSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataComboSO);
// Dependencies MultiplayerBadgeDataMinMaxIntSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgeDataComboSO
class CORDL_TYPE MultiplayerBadgeDataComboSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x26d856c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataComboSO* New_ctor();

  /// @brief Method .ctor, addr 0x26d8594, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataComboSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataComboSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataComboSO(MultiplayerBadgeDataComboSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataComboSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataComboSO(MultiplayerBadgeDataComboSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13072 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataComboSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataComboSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataComboSO*, "", "MultiplayerBadgeDataComboSO");
