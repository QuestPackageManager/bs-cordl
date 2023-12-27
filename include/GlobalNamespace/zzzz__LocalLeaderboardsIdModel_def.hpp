#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsIdModel)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsIdModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsIdModel);
// Type: ::LocalLeaderboardsIdModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4205))
// CS Name: ::LocalLeaderboardsIdModel*
class CORDL_TYPE LocalLeaderboardsIdModel : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLocalLeaderboardID addr 0x2327554 size 0x8 virtual false final false
  static inline ::StringW GetLocalLeaderboardID(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  static inline ::GlobalNamespace::LocalLeaderboardsIdModel* New_ctor();

  /// @brief Method .ctor addr 0x232755c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsIdModel(LocalLeaderboardsIdModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsIdModel(LocalLeaderboardsIdModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsIdModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsIdModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsIdModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsIdModel*, "", "LocalLeaderboardsIdModel");
