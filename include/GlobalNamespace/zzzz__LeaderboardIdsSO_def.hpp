#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardIdsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILeaderboardIdContainer_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardIdsSO)
namespace GlobalNamespace {
class ILeaderboardIdData;
}
namespace GlobalNamespace {
class LeaderboardIdsSO_LeaderboardIdData;
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
class LeaderboardIdsSO_LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardIdsSO);
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData);
// Dependencies ILeaderboardIdData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardIdsSO/LeaderboardIdData
class CORDL_TYPE LeaderboardIdsSO_LeaderboardIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _difficultyBeatmapId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmapId, put = __cordl_internal_set__difficultyBeatmapId)) ::StringW _difficultyBeatmapId;

  /// @brief Field _platformLeaderboardId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardId, put = __cordl_internal_set__platformLeaderboardId)) ::StringW _platformLeaderboardId;

  __declspec(property(get = get_difficultyBeatmapId)) ::StringW difficultyBeatmapId;

  __declspec(property(get = get_platformLeaderboardId)) ::StringW platformLeaderboardId;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
  constexpr operator ::GlobalNamespace::ILeaderboardIdData*() noexcept;

  static inline ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData* New_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  constexpr ::StringW const& __cordl_internal_get__difficultyBeatmapId() const;

  constexpr ::StringW& __cordl_internal_get__difficultyBeatmapId();

  constexpr ::StringW const& __cordl_internal_get__platformLeaderboardId() const;

  constexpr ::StringW& __cordl_internal_get__platformLeaderboardId();

  constexpr void __cordl_internal_set__difficultyBeatmapId(::StringW value);

  constexpr void __cordl_internal_set__platformLeaderboardId(::StringW value);

  /// @brief Method .ctor, addr 0x26ceb50, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  /// @brief Method get_difficultyBeatmapId, addr 0x26cec00, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_difficultyBeatmapId();

  /// @brief Method get_platformLeaderboardId, addr 0x26cebf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_platformLeaderboardId();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
  constexpr ::GlobalNamespace::ILeaderboardIdData* i___GlobalNamespace__ILeaderboardIdData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardIdsSO_LeaderboardIdData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsSO_LeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardIdsSO_LeaderboardIdData(LeaderboardIdsSO_LeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsSO_LeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardIdsSO_LeaderboardIdData(LeaderboardIdsSO_LeaderboardIdData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12984 };

  /// @brief Field _difficultyBeatmapId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficultyBeatmapId;

  /// @brief Field _platformLeaderboardId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____platformLeaderboardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData, ____difficultyBeatmapId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData, ____platformLeaderboardId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILeaderboardIdContainer, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardIdsSO
class CORDL_TYPE LeaderboardIdsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LeaderboardIdData = ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData;

  __declspec(property(get = ILeaderboardIdContainer_get_leaderboardIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_leaderboardIds;

  /// @brief Field _leaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds,
                      put = __cordl_internal_set__leaderboardIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* _leaderboardIds;

  __declspec(property(get = get_leaderboardIds, put = set_leaderboardIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* leaderboardIds;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept;

  /// @brief Method Add, addr 0x26cea6c, size 0xe4, virtual false, abstract: false, final false
  inline void Add(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId);

  /// @brief Method ILeaderboardIdContainer.get_leaderboardIds, addr 0x26cea00, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_get_leaderboardIds();

  static inline ::GlobalNamespace::LeaderboardIdsSO* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* const& __cordl_internal_get__leaderboardIds() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>*& __cordl_internal_get__leaderboardIds();

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* value);

  /// @brief Method .ctor, addr 0x26ceb7c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leaderboardIds, addr 0x26cea08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* get_leaderboardIds();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr ::GlobalNamespace::ILeaderboardIdContainer* i___GlobalNamespace__ILeaderboardIdContainer() noexcept;

  /// @brief Method set_leaderboardIds, addr 0x26cea10, size 0x5c, virtual false, abstract: false, final false
  inline void set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12985 };

  /// @brief Field _leaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardIdsSO, ____leaderboardIds) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardIdsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsSO*, "", "LeaderboardIdsSO");
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*, "", "LeaderboardIdsSO/LeaderboardIdData");
