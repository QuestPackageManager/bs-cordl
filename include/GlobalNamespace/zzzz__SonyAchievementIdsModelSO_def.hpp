#pragma once
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __SonyAchievementIdsModelSO__AchievementIdData;
}
namespace GlobalNamespace {
class AchievementSO;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4577))
// CS Name: ::SonyAchievementIdsModelSO::AchievementIdData*
class CORDL_TYPE __SonyAchievementIdsModelSO__AchievementIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _trophyId, offset 0x10, size 0x4
  __declspec(property(get = __get__trophyId, put = __set__trophyId)) int32_t _trophyId;

  /// @brief Field _achievement, offset 0x18, size 0x8
  __declspec(property(get = __get__achievement, put = __set__achievement))::GlobalNamespace::AchievementSO* _achievement;

  __declspec(property(get = get_ps4TrophyId)) int32_t ps4TrophyId;

  __declspec(property(get = get_achievementId))::StringW achievementId;

  constexpr int32_t& __get__trophyId();

  constexpr int32_t const& __get__trophyId() const;

  constexpr void __set__trophyId(int32_t value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__achievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__achievement() const;

  constexpr void __set__achievement(::GlobalNamespace::AchievementSO* value);

  /// @brief Method get_ps4TrophyId addr 0x2368de4 size 0x8 virtual false final false
  inline int32_t get_ps4TrophyId();

  /// @brief Method get_achievementId addr 0x2368b88 size 0x1c virtual false final false
  inline ::StringW get_achievementId();

  static inline ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData* New_ctor();

  /// @brief Method .ctor addr 0x2368dec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SonyAchievementIdsModelSO__AchievementIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyAchievementIdsModelSO__AchievementIdData(__SonyAchievementIdsModelSO__AchievementIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyAchievementIdsModelSO__AchievementIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyAchievementIdsModelSO__AchievementIdData(__SonyAchievementIdsModelSO__AchievementIdData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyAchievementIdsModelSO__AchievementIdData();

public:
  /// @brief Field _trophyId, offset: 0x10, size: 0x4, def value: None
  int32_t ____trophyId;

  /// @brief Field _achievement, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____achievement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyAchievementIdsModelSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4578))
// CS Name: ::SonyAchievementIdsModelSO*
class CORDL_TYPE SonyAchievementIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using AchievementIdData = ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData;

  /// @brief Field _achievementsIds, offset 0x18, size 0x8
  __declspec(property(get = __get__achievementsIds,
                      put = __set__achievementsIds))::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* _achievementsIds;

  /// @brief Field _achievementIdToTrophyId, offset 0x20, size 0x8
  __declspec(property(get = __get__achievementIdToTrophyId, put = __set__achievementIdToTrophyId))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _achievementIdToTrophyId;

  /// @brief Field _trophyIdToAchievementId, offset 0x28, size 0x8
  __declspec(property(get = __get__trophyIdToAchievementId, put = __set__trophyIdToAchievementId))::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _trophyIdToAchievementId;

  __declspec(property(get = get_achievementsIds))::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* achievementsIds;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*& __get__achievementsIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*> const& __get__achievementsIds() const;

  constexpr void __set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get__achievementIdToTrophyId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get__achievementIdToTrophyId() const;

  constexpr void __set__achievementIdToTrophyId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __get__trophyIdToAchievementId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const& __get__trophyIdToAchievementId() const;

  constexpr void __set__trophyIdToAchievementId(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  /// @brief Method get_achievementsIds addr 0x2368940 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* get_achievementsIds();

  /// @brief Method OnEnable addr 0x2368948 size 0x240 virtual true final false
  inline void OnEnable();

  /// @brief Method GetTrophyId addr 0x2368ba4 size 0x68 virtual false final false
  inline bool GetTrophyId(::StringW achievementId, ByRef<int32_t> trophyId);

  /// @brief Method GetTrophyIds addr 0x2368c0c size 0x6c virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTrophyIds();

  /// @brief Method GetAchievementId addr 0x2368c78 size 0x68 virtual false final false
  inline bool GetAchievementId(int32_t trophyId, ByRef<::StringW> achievementId);

  static inline ::GlobalNamespace::SonyAchievementIdsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x2368ce0 size 0x104 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyAchievementIdsModelSO(SonyAchievementIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyAchievementIdsModelSO(SonyAchievementIdsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyAchievementIdsModelSO();

public:
  /// @brief Field _achievementsIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* ____achievementsIds;

  /// @brief Field _achievementIdToTrophyId, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____achievementIdToTrophyId;

  /// @brief Field _trophyIdToAchievementId, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* ____trophyIdToAchievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyAchievementIdsModelSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyAchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyAchievementIdsModelSO*, "", "SonyAchievementIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*, "", "SonyAchievementIdsModelSO/AchievementIdData");
