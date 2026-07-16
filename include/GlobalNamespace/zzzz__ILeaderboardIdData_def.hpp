#pragma once
// IWYU pragma private; include "GlobalNamespace/ILeaderboardIdData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILeaderboardIdData)
// Forward declare root types
namespace GlobalNamespace {
class ILeaderboardIdData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ILeaderboardIdData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ILeaderboardIdData*, "", "ILeaderboardIdData");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILeaderboardIdData
class CORDL_TYPE ILeaderboardIdData {
public:
  // Declarations
  __declspec(property(get = get_difficultyBeatmapId)) ::StringW difficultyBeatmapId;

  /// @brief Method get_difficultyBeatmapId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_difficultyBeatmapId();

  // Ctor Parameters [CppParam { name: "", ty: "ILeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILeaderboardIdData(ILeaderboardIdData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14967 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
