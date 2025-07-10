#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardIdsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardIdsModel)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class LeaderboardIdsSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardIdsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardIdsModel);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardIdsModel
class CORDL_TYPE LeaderboardIdsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds, put = __cordl_internal_set__leaderboardIds)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _leaderboardIds;

  static inline ::GlobalNamespace::LeaderboardIdsModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* idsMaps);

  /// @brief Method TryGetPlatformLeaderboardId, addr 0x270145c, size 0x78, virtual false, abstract: false, final false
  inline bool TryGetPlatformLeaderboardId(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::ByRef<::StringW> platformLeaderboardId);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get__leaderboardIds() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__leaderboardIds();

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x2700e68, size 0x5f4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* idsMaps);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardIdsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardIdsModel(LeaderboardIdsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardIdsModel(LeaderboardIdsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13323 };

  /// @brief Field _leaderboardIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardIdsModel, ____leaderboardIds) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardIdsModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsModel*, "", "LeaderboardIdsModel");
