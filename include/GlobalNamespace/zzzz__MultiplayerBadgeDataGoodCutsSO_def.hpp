#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataGoodCutsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataGoodCutsSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataGoodCutsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO);
// Type: ::MultiplayerBadgeDataGoodCutsSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerBadgeDataGoodCutsSO*
class CORDL_TYPE MultiplayerBadgeDataGoodCutsSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x2695b70, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO* New_ctor();

  /// @brief Method .ctor, addr 0x2695b98, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataGoodCutsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataGoodCutsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataGoodCutsSO(MultiplayerBadgeDataGoodCutsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataGoodCutsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataGoodCutsSO(MultiplayerBadgeDataGoodCutsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13025 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*, "", "MultiplayerBadgeDataGoodCutsSO");
