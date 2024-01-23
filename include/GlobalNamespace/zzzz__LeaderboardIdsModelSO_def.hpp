#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardIdsModelSO)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class __LeaderboardIdsModelSO__LeaderboardIdData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class __LeaderboardIdsModelSO__LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardIdsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData);
// Type: ::LeaderboardIdData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4206))
// CS Name: ::LeaderboardIdsModelSO::LeaderboardIdData*
class CORDL_TYPE __LeaderboardIdsModelSO__LeaderboardIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _difficultyBeatmapId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmapId, put = __cordl_internal_set__difficultyBeatmapId))::StringW _difficultyBeatmapId;

  /// @brief Field _platformLeaderboardId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardId, put = __cordl_internal_set__platformLeaderboardId))::StringW _platformLeaderboardId;

  __declspec(property(get = get_platformLeaderboardId))::StringW platformLeaderboardId;

  __declspec(property(get = get_difficultyBeatmapId))::StringW difficultyBeatmapId;

  constexpr ::StringW& __cordl_internal_get__difficultyBeatmapId();

  constexpr ::StringW const& __cordl_internal_get__difficultyBeatmapId() const;

  constexpr void __cordl_internal_set__difficultyBeatmapId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__platformLeaderboardId();

  constexpr ::StringW const& __cordl_internal_get__platformLeaderboardId() const;

  constexpr void __cordl_internal_set__platformLeaderboardId(::StringW value);

  /// @brief Method get_platformLeaderboardId, addr 0x232787c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_platformLeaderboardId();

  /// @brief Method get_difficultyBeatmapId, addr 0x2327884, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_difficultyBeatmapId();

  static inline ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData* New_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  /// @brief Method .ctor, addr 0x232788c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardIdsModelSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardIdsModelSO__LeaderboardIdData(__LeaderboardIdsModelSO__LeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardIdsModelSO__LeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardIdsModelSO__LeaderboardIdData(__LeaderboardIdsModelSO__LeaderboardIdData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardIdsModelSO__LeaderboardIdData();

public:
  /// @brief Field _difficultyBeatmapId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficultyBeatmapId;

  /// @brief Field _platformLeaderboardId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____platformLeaderboardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData, ____difficultyBeatmapId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData, ____platformLeaderboardId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardIdsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4207))
// CS Name: ::LeaderboardIdsModelSO*
class CORDL_TYPE LeaderboardIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LeaderboardIdData = ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData;

  /// @brief Field _leaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds,
                      put = __cordl_internal_set__leaderboardIds))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>* _leaderboardIds;

  /// @brief Field _leaderboardIdMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIdMap, put = __cordl_internal_set__leaderboardIdMap))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _leaderboardIdMap;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*& __cordl_internal_get__leaderboardIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*> const&
  __cordl_internal_get__leaderboardIds() const;

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__leaderboardIdMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__leaderboardIdMap() const;

  constexpr void __cordl_internal_set__leaderboardIdMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method RebuildMap, addr 0x2327564, size 0x1a0, virtual false, abstract: false, final false
  inline void RebuildMap();

  /// @brief Method OnEnable, addr 0x2327704, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method TryGetPlatformLeaderboardId, addr 0x2327720, size 0x9c, virtual false, abstract: false, final false
  inline bool TryGetPlatformLeaderboardId(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ByRef<::StringW> platformLeaderboardId);

  static inline ::GlobalNamespace::LeaderboardIdsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x23277bc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardIdsModelSO(LeaderboardIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardIdsModelSO(LeaderboardIdsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardIdsModelSO();

public:
  /// @brief Field _leaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>* ____leaderboardIds;

  /// @brief Field _leaderboardIdMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____leaderboardIdMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardIdsModelSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardIdsModelSO, ____leaderboardIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardIdsModelSO, ____leaderboardIdMap) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsModelSO*, "", "LeaderboardIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*, "", "LeaderboardIdsModelSO/LeaderboardIdData");
