#pragma once
// IWYU pragma private; include "GlobalNamespace/ILeaderboardIdData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILeaderboardIdData)
// Forward declare root types
namespace GlobalNamespace {
class ILeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILeaderboardIdData);
// Type: ::ILeaderboardIdData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ILeaderboardIdData*
class CORDL_TYPE ILeaderboardIdData {
public:
  // Declarations
  __declspec(property(get = get_difficultyBeatmapId))::StringW difficultyBeatmapId;

  /// @brief Method get_difficultyBeatmapId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_difficultyBeatmapId();

  // Ctor Parameters [CppParam { name: "", ty: "ILeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILeaderboardIdData(ILeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILeaderboardIdData(ILeaderboardIdData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILeaderboardIdData*, "", "ILeaderboardIdData");
