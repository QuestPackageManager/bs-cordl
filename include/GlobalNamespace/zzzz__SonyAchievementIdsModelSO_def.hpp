#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyAchievementIdsModelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyAchievementIdsModelSO)
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class __SonyAchievementIdsModelSO__AchievementIdData;
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
class __SonyAchievementIdsModelSO__AchievementIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyAchievementIdsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData);
// Type: ::AchievementIdData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyAchievementIdsModelSO::AchievementIdData*
class CORDL_TYPE __SonyAchievementIdsModelSO__AchievementIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _achievement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__achievement, put = __cordl_internal_set__achievement)) ::UnityW<::GlobalNamespace::AchievementSO> _achievement;

  /// @brief Field _trophyId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__trophyId, put = __cordl_internal_set__trophyId)) int32_t _trophyId;

  __declspec(property(get = get_achievement)) ::UnityW<::GlobalNamespace::AchievementSO> achievement;

  __declspec(property(get = get_achievementId)) ::StringW achievementId;

  __declspec(property(get = get_ps4TrophyId)) int32_t ps4TrophyId;

  static inline ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__achievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__achievement();

  constexpr int32_t const& __cordl_internal_get__trophyId() const;

  constexpr int32_t& __cordl_internal_get__trophyId();

  constexpr void __cordl_internal_set__achievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__trophyId(int32_t value);

  /// @brief Method .ctor, addr 0x26b329c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_achievement, addr 0x26b3294, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::AchievementSO> get_achievement();

  /// @brief Method get_achievementId, addr 0x26b3028, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_achievementId();

  /// @brief Method get_ps4TrophyId, addr 0x26b328c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ps4TrophyId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyAchievementIdsModelSO__AchievementIdData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyAchievementIdsModelSO__AchievementIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyAchievementIdsModelSO__AchievementIdData(__SonyAchievementIdsModelSO__AchievementIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyAchievementIdsModelSO__AchievementIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyAchievementIdsModelSO__AchievementIdData(__SonyAchievementIdsModelSO__AchievementIdData const&) = delete;

  /// @brief Field _trophyId, offset: 0x10, size: 0x4, def value: None
  int32_t ____trophyId;

  /// @brief Field _achievement, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____achievement;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13143 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData, ____trophyId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData, ____achievement) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyAchievementIdsModelSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyAchievementIdsModelSO*
class CORDL_TYPE SonyAchievementIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using AchievementIdData = ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData;

  /// @brief Field _achievementIdToTrophyId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdToTrophyId,
                      put = __cordl_internal_set__achievementIdToTrophyId)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _achievementIdToTrophyId;

  /// @brief Field _achievementsIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementsIds,
                      put = __cordl_internal_set__achievementsIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* _achievementsIds;

  /// @brief Field _trophyIdToAchievementId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__trophyIdToAchievementId,
                      put = __cordl_internal_set__trophyIdToAchievementId)) ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _trophyIdToAchievementId;

  __declspec(property(get = get_achievementsIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* achievementsIds;

  /// @brief Method GetAchievementId, addr 0x26b3118, size 0x68, virtual false, abstract: false, final false
  inline bool GetAchievementId(int32_t trophyId, ByRef<::StringW> achievementId);

  /// @brief Method GetTrophyId, addr 0x26b3044, size 0x68, virtual false, abstract: false, final false
  inline bool GetTrophyId(::StringW achievementId, ByRef<int32_t> trophyId);

  /// @brief Method GetTrophyIds, addr 0x26b30ac, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTrophyIds();

  static inline ::GlobalNamespace::SonyAchievementIdsModelSO* New_ctor();

  /// @brief Method OnEnable, addr 0x26b2df8, size 0x230, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get__achievementIdToTrophyId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get__achievementIdToTrophyId() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*& __cordl_internal_get__achievementsIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*> const&
  __cordl_internal_get__achievementsIds() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __cordl_internal_get__trophyIdToAchievementId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const& __cordl_internal_get__trophyIdToAchievementId() const;

  constexpr void __cordl_internal_set__achievementIdToTrophyId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* value);

  constexpr void __cordl_internal_set__trophyIdToAchievementId(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  /// @brief Method .ctor, addr 0x26b3180, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_achievementsIds, addr 0x26b2df0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* get_achievementsIds();

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

  /// @brief Field _achievementsIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* ____achievementsIds;

  /// @brief Field _achievementIdToTrophyId, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____achievementIdToTrophyId;

  /// @brief Field _trophyIdToAchievementId, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* ____trophyIdToAchievementId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13144 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyAchievementIdsModelSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO, ____achievementsIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO, ____achievementIdToTrophyId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyAchievementIdsModelSO, ____trophyIdToAchievementId) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyAchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyAchievementIdsModelSO*, "", "SonyAchievementIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*, "", "SonyAchievementIdsModelSO/AchievementIdData");
