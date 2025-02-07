#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyAchievementIdsModelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyAchievementIdsModelSO)
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO_AchievementIdData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO_AchievementIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyAchievementIdsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyAchievementIdsModelSO/AchievementIdData
class CORDL_TYPE SonyAchievementIdsModelSO_AchievementIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _achievement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__achievement, put = __cordl_internal_set__achievement)) ::UnityW<::GlobalNamespace::AchievementSO> _achievement;

  /// @brief Field _trophyId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__trophyId, put = __cordl_internal_set__trophyId)) int32_t _trophyId;

  __declspec(property(get = get_achievement)) ::UnityW<::GlobalNamespace::AchievementSO> achievement;

  __declspec(property(get = get_achievementId)) ::StringW achievementId;

  __declspec(property(get = get_ps4TrophyId)) int32_t ps4TrophyId;

  static inline ::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__achievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__achievement();

  constexpr int32_t const& __cordl_internal_get__trophyId() const;

  constexpr int32_t& __cordl_internal_get__trophyId();

  constexpr void __cordl_internal_set__achievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__trophyId(int32_t value);

  /// @brief Method .ctor, addr 0x26ebc3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_achievement, addr 0x26ebc34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::AchievementSO> get_achievement();

  /// @brief Method get_achievementId, addr 0x26eb9c8, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_achievementId();

  /// @brief Method get_ps4TrophyId, addr 0x26ebc2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ps4TrophyId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyAchievementIdsModelSO_AchievementIdData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO_AchievementIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyAchievementIdsModelSO_AchievementIdData(SonyAchievementIdsModelSO_AchievementIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO_AchievementIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyAchievementIdsModelSO_AchievementIdData(SonyAchievementIdsModelSO_AchievementIdData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13182 };

  /// @brief Field _trophyId, offset: 0x10, size: 0x4, def value: None
  int32_t ____trophyId;

  /// @brief Field _achievement, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____achievement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData, ____trophyId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData, ____achievement) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyAchievementIdsModelSO
class CORDL_TYPE SonyAchievementIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using AchievementIdData = ::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData;

  /// @brief Field _achievementIdToTrophyId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdToTrophyId,
                      put = __cordl_internal_set__achievementIdToTrophyId)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _achievementIdToTrophyId;

  /// @brief Field _achievementsIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementsIds,
                      put = __cordl_internal_set__achievementsIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>* _achievementsIds;

  /// @brief Field _trophyIdToAchievementId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__trophyIdToAchievementId,
                      put = __cordl_internal_set__trophyIdToAchievementId)) ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _trophyIdToAchievementId;

  __declspec(property(get = get_achievementsIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>* achievementsIds;

  /// @brief Method GetAchievementId, addr 0x26ebab8, size 0x68, virtual false, abstract: false, final false
  inline bool GetAchievementId(int32_t trophyId, ::ByRef<::StringW> achievementId);

  /// @brief Method GetTrophyId, addr 0x26eb9e4, size 0x68, virtual false, abstract: false, final false
  inline bool GetTrophyId(::StringW achievementId, ::ByRef<int32_t> trophyId);

  /// @brief Method GetTrophyIds, addr 0x26eba4c, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTrophyIds();

  static inline ::GlobalNamespace::SonyAchievementIdsModelSO* New_ctor();

  /// @brief Method OnEnable, addr 0x26eb798, size 0x230, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get__achievementIdToTrophyId() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get__achievementIdToTrophyId();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>* const& __cordl_internal_get__achievementsIds() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>*& __cordl_internal_get__achievementsIds();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* const& __cordl_internal_get__trophyIdToAchievementId() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __cordl_internal_get__trophyIdToAchievementId();

  constexpr void __cordl_internal_set__achievementIdToTrophyId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>* value);

  constexpr void __cordl_internal_set__trophyIdToAchievementId(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  /// @brief Method .ctor, addr 0x26ebb20, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_achievementsIds, addr 0x26eb790, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>* get_achievementsIds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyAchievementIdsModelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyAchievementIdsModelSO(SonyAchievementIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyAchievementIdsModelSO(SonyAchievementIdsModelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13183 };

  /// @brief Field _achievementsIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*>* ____achievementsIds;

  /// @brief Field _achievementIdToTrophyId, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____achievementIdToTrophyId;

  /// @brief Field _trophyIdToAchievementId, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* ____trophyIdToAchievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO, ____achievementsIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO, ____achievementIdToTrophyId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO, ____trophyIdToAchievementId) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyAchievementIdsModelSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyAchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyAchievementIdsModelSO*, "", "SonyAchievementIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyAchievementIdsModelSO_AchievementIdData*, "", "SonyAchievementIdsModelSO/AchievementIdData");
