#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
CORDL_MODULE_EXPORT(PS4LeaderboardIdsModelSO)
// Forward declare root types
namespace GlobalNamespace {
class PS4LeaderboardIdsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4LeaderboardIdsModelSO);
// Type: ::PS4LeaderboardIdsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4583))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4551))
// CS Name: ::PS4LeaderboardIdsModelSO*
class CORDL_TYPE PS4LeaderboardIdsModelSO : public ::GlobalNamespace::SonyLeaderboardIdsModelSO {
public:
  // Declarations
  /// @brief Method DoesSupport360 addr 0x23680c4 size 0x8 virtual true final false
  inline bool DoesSupport360();

  static inline ::GlobalNamespace::PS4LeaderboardIdsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x23680cc size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4LeaderboardIdsModelSO(PS4LeaderboardIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4LeaderboardIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4LeaderboardIdsModelSO(PS4LeaderboardIdsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4LeaderboardIdsModelSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4LeaderboardIdsModelSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LeaderboardIdsModelSO*, "", "PS4LeaderboardIdsModelSO");
