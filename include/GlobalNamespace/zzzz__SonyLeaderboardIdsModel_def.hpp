#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLeaderboardIdsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLeaderboardIdsModel)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class SonyLeaderboardIdsSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLeaderboardIdsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLeaderboardIdsModel);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLeaderboardIdsModel
class CORDL_TYPE SonyLeaderboardIdsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds, put = __cordl_internal_set__leaderboardIds)) ::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* _leaderboardIds;

  /// @brief Method GetMaxId, addr 0x270432c, size 0x6c, virtual false, abstract: false, final false
  inline uint32_t GetMaxId();

  static inline ::GlobalNamespace::SonyLeaderboardIdsModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>* idsMaps);

  /// @brief Method TryGetSonyLeaderboardId, addr 0x27042b4, size 0x78, virtual false, abstract: false, final false
  inline bool TryGetSonyLeaderboardId(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::ByRef<uint32_t> sonyLeaderboardId);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* const& __cordl_internal_get__leaderboardIds() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>*& __cordl_internal_get__leaderboardIds();

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* value);

  /// @brief Method .ctor, addr 0x2703cbc, size 0x5f8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>* idsMaps);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLeaderboardIdsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLeaderboardIdsModel(SonyLeaderboardIdsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLeaderboardIdsModel(SonyLeaderboardIdsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13358 };

  /// @brief Field _leaderboardIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsModel, ____leaderboardIds) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLeaderboardIdsModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLeaderboardIdsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLeaderboardIdsModel*, "", "SonyLeaderboardIdsModel");
