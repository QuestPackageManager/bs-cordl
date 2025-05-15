#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLeaderboardIdsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILeaderboardIdContainer_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLeaderboardIdsSO)
namespace GlobalNamespace {
class ILeaderboardIdData;
}
namespace GlobalNamespace {
class SonyLeaderboardIdsSO_LeaderboardIdData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLeaderboardIdsSO;
}
namespace GlobalNamespace {
class SonyLeaderboardIdsSO_LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLeaderboardIdsSO);
MARK_REF_PTR_T(::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData);
// Dependencies ILeaderboardIdData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLeaderboardIdsSO/LeaderboardIdData
class CORDL_TYPE SonyLeaderboardIdsSO_LeaderboardIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _difficultyBeatmapId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmapId, put = __cordl_internal_set__difficultyBeatmapId)) ::StringW _difficultyBeatmapId;

  /// @brief Field _sonyLeaderboardId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__sonyLeaderboardId, put = __cordl_internal_set__sonyLeaderboardId)) uint32_t _sonyLeaderboardId;

  __declspec(property(get = get_difficultyBeatmapId)) ::StringW difficultyBeatmapId;

  __declspec(property(get = get_sonyLeaderboardId)) uint32_t sonyLeaderboardId;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
  constexpr operator ::GlobalNamespace::ILeaderboardIdData*() noexcept;

  static inline ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData* New_ctor(uint32_t sonyLeaderboardId, ::StringW difficultyBeatmapId);

  constexpr ::StringW const& __cordl_internal_get__difficultyBeatmapId() const;

  constexpr ::StringW& __cordl_internal_get__difficultyBeatmapId();

  constexpr uint32_t const& __cordl_internal_get__sonyLeaderboardId() const;

  constexpr uint32_t& __cordl_internal_get__sonyLeaderboardId();

  constexpr void __cordl_internal_set__difficultyBeatmapId(::StringW value);

  constexpr void __cordl_internal_set__sonyLeaderboardId(uint32_t value);

  /// @brief Method .ctor, addr 0x26ced00, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t sonyLeaderboardId, ::StringW difficultyBeatmapId);

  /// @brief Method get_difficultyBeatmapId, addr 0x26cecf0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_difficultyBeatmapId();

  /// @brief Method get_sonyLeaderboardId, addr 0x26cecf8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_sonyLeaderboardId();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
  constexpr ::GlobalNamespace::ILeaderboardIdData* i___GlobalNamespace__ILeaderboardIdData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLeaderboardIdsSO_LeaderboardIdData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsSO_LeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLeaderboardIdsSO_LeaderboardIdData(SonyLeaderboardIdsSO_LeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsSO_LeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLeaderboardIdsSO_LeaderboardIdData(SonyLeaderboardIdsSO_LeaderboardIdData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12986 };

  /// @brief Field _difficultyBeatmapId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficultyBeatmapId;

  /// @brief Field _sonyLeaderboardId, offset: 0x18, size: 0x4, def value: None
  uint32_t ____sonyLeaderboardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData, ____difficultyBeatmapId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData, ____sonyLeaderboardId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILeaderboardIdContainer, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLeaderboardIdsSO
class CORDL_TYPE SonyLeaderboardIdsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LeaderboardIdData = ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData;

  __declspec(property(get = ILeaderboardIdContainer_get_leaderboardIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_leaderboardIds;

  /// @brief Field _leaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds,
                      put = __cordl_internal_set__leaderboardIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* _leaderboardIds;

  __declspec(property(get = get_leaderboardIds, put = set_leaderboardIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* leaderboardIds;

  /// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept;

  /// @brief Method ILeaderboardIdContainer.get_leaderboardIds, addr 0x26cec08, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* ILeaderboardIdContainer_get_leaderboardIds();

  static inline ::GlobalNamespace::SonyLeaderboardIdsSO* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* const& __cordl_internal_get__leaderboardIds() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>*& __cordl_internal_get__leaderboardIds();

  constexpr void __cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* value);

  /// @brief Method .ctor, addr 0x26cec74, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leaderboardIds, addr 0x26cec10, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* get_leaderboardIds();

  /// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
  constexpr ::GlobalNamespace::ILeaderboardIdContainer* i___GlobalNamespace__ILeaderboardIdContainer() noexcept;

  /// @brief Method set_leaderboardIds, addr 0x26cec18, size 0x5c, virtual false, abstract: false, final false
  inline void set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLeaderboardIdsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLeaderboardIdsSO(SonyLeaderboardIdsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLeaderboardIdsSO(SonyLeaderboardIdsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12987 };

  /// @brief Field _leaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* ____leaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsSO, ____leaderboardIds) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLeaderboardIdsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLeaderboardIdsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLeaderboardIdsSO*, "", "SonyLeaderboardIdsSO");
NEED_NO_BOX(::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*, "", "SonyLeaderboardIdsSO/LeaderboardIdData");
