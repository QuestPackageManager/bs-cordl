#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataSaberMovementSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataSaberMovementSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO);
// Type: ::MultiplayerBadgeDataSaberMovementSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5103))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5107))
// CS Name: ::MultiplayerBadgeDataSaberMovementSO*
class CORDL_TYPE MultiplayerBadgeDataSaberMovementSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x23cf8c0, size 0x2c, virtual true, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  static inline ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO* New_ctor();

  /// @brief Method .ctor, addr 0x23cf8ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSaberMovementSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataSaberMovementSO(MultiplayerBadgeDataSaberMovementSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSaberMovementSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataSaberMovementSO(MultiplayerBadgeDataSaberMovementSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataSaberMovementSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*, "", "MultiplayerBadgeDataSaberMovementSO");
