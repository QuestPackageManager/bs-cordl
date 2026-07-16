#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsIdModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsIdModel)
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsIdModel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalLeaderboardsIdModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalLeaderboardsIdModel*, "", "LocalLeaderboardsIdModel");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsIdModel
class CORDL_TYPE LocalLeaderboardsIdModel : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLocalLeaderboardID, addr 0x3752338, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetLocalLeaderboardID(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  static inline ::GlobalNamespace::LocalLeaderboardsIdModel* New_ctor();

  /// @brief Method .ctor, addr 0x3752340, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsIdModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsIdModel(LocalLeaderboardsIdModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsIdModel(LocalLeaderboardsIdModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LocalLeaderboardsIdModel) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
