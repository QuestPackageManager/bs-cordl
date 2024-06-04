#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardIdsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardIdsSO)
namespace GlobalNamespace {
class ILeaderboardIdContainer;
}
namespace GlobalNamespace {
class ILeaderboardIdData;
}
namespace GlobalNamespace {
class __LeaderboardIdsSO__LeaderboardIdData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardIdsSO;
}
namespace GlobalNamespace {
class __LeaderboardIdsSO__LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardIdsSO);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData);
// Type: ::LeaderboardIdData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardIdsSO::LeaderboardIdData*
class CORDL_TYPE __LeaderboardIdsSO__LeaderboardIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _difficultyBeatmapId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmapId, put = __cordl_internal_set__difficultyBeatmapId))::StringW _difficultyBeatmapId;

  /// @brief Field _platformLeaderboardId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardId, put = __cordl_internal_set__platformLeaderboardId))::StringW _platformLeaderboardId;

  __declspec(property(get = get_difficultyBeatmapId))::StringW difficultyBeatmapId;

  __declspec(property(get = get_platformLeaderboardId))::StringW platformLeaderboardId;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
  constexpr operator ::GlobalNamespace::ILeaderboardIdData*() noexcept;

  static inline ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData* New_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  constexpr ::StringW const& __cordl_internal_get__difficultyBeatmapId() const;

  constexpr ::StringW& __cordl_internal_get__difficultyBeatmapId();

  constexpr ::StringW const& __cordl_internal_get__platformLeaderboardId() const;

  constexpr ::StringW& __cordl_internal_get__platformLeaderboardId();

  constexpr void __cordl_internal_set__difficultyBeatmapId(::StringW value);

  constexpr void __cordl_internal_set__platformLeaderboardId(::StringW value);

  /// @brief Method .ctor, addr 0x14a8b8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  /// @brief Method get_difficultyBeatmapId, addr 0x14a8c3c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_difficultyBeatmapId();

  /// @brief Method get_platformLeaderboardId, addr 0x14a8c34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_platformLeaderboardId();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
  constexpr ::GlobalNamespace::ILeaderboardIdData* i___GlobalNamespace__ILeaderboardIdData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardIdsSO__LeaderboardIdData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardIdsSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardIdsSO__LeaderboardIdData(__LeaderboardIdsSO__LeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardIdsSO__LeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardIdsSO__LeaderboardIdData(__LeaderboardIdsSO__LeaderboardIdData const&) = delete;

  /// @brief Field _difficultyBeatmapId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficultyBeatmapId;

  /// @brief Field _platformLeaderboardId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____platformLeaderboardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData, ____difficultyBeatmapId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData, ____platformLeaderboardId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardIdsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardIdsSO*
class CORDL_TYPE LeaderboardIdsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LeaderboardIdData = ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData;

  __declspec(property(get = ILeaderboardIdContainer_get_leaderboardIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_leaderboardIds;

  /// @brief Field _leaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds,
                      put = __cordl_internal_set__leaderboardIds))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* _leaderboardIds;

  __declspec(property(get = get_leaderboardIds, put = set_leaderboardIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* leaderboardIds;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept;

  /// @brief Method Add, addr 0x14a8aa0, size 0xec, virtual false, abstract: false, final false
  inline void Add(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  /// @brief Method ILeaderboardIdContainer.get_leaderboardIds, addr 0x14a8a34, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_get_leaderboardIds();

  static inline ::GlobalNamespace::LeaderboardIdsSO* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*& __cordl_internal_get__leaderboardIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*> const& __cordl_internal_get__leaderboardIds() const;

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* value);

  /// @brief Method .ctor, addr 0x14a8bb8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leaderboardIds, addr 0x14a8a3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* get_leaderboardIds();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr ::GlobalNamespace::ILeaderboardIdContainer* i___GlobalNamespace__ILeaderboardIdContainer() noexcept;

  /// @brief Method set_leaderboardIds, addr 0x14a8a44, size 0x5c, virtual false, abstract: false, final false
  inline void set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardIdsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardIdsSO(LeaderboardIdsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardIdsSO(LeaderboardIdsSO const&) = delete;

  /// @brief Field _leaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardIdsSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardIdsSO, ____leaderboardIds) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsSO*, "", "LeaderboardIdsSO");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*, "", "LeaderboardIdsSO/LeaderboardIdData");
