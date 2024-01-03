#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLeaderboardIdsModelSO)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class __SonyLeaderboardIdsModelSO__LeaderboardIdData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class __SonyLeaderboardIdsModelSO__LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLeaderboardIdsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData);
// Type: ::LeaderboardIdData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4582))
// CS Name: ::SonyLeaderboardIdsModelSO::LeaderboardIdData*
class CORDL_TYPE __SonyLeaderboardIdsModelSO__LeaderboardIdData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _sonyLeaderboardId, offset 0x10, size 0x4
  __declspec(property(get = __get__sonyLeaderboardId, put = __set__sonyLeaderboardId)) uint32_t _sonyLeaderboardId;

  /// @brief Field _leaderboardId, offset 0x18, size 0x8
  __declspec(property(get = __get__leaderboardId, put = __set__leaderboardId))::StringW _leaderboardId;

  __declspec(property(get = get_SonyLeaderboardId)) uint32_t SonyLeaderboardId;

  __declspec(property(get = get_leaderboardId))::StringW leaderboardId;

  constexpr uint32_t& __get__sonyLeaderboardId();

  constexpr uint32_t const& __get__sonyLeaderboardId() const;

  constexpr void __set__sonyLeaderboardId(uint32_t value);

  constexpr ::StringW& __get__leaderboardId();

  constexpr ::StringW const& __get__leaderboardId() const;

  constexpr void __set__leaderboardId(::StringW value);

  /// @brief Method get_SonyLeaderboardId, addr 0x236981c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_SonyLeaderboardId();

  /// @brief Method get_leaderboardId, addr 0x2369824, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_leaderboardId();

  static inline ::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData* New_ctor(uint32_t sonyLeaderboardId, ::StringW leaderboardId);

  /// @brief Method .ctor, addr 0x236982c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t sonyLeaderboardId, ::StringW leaderboardId);

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLeaderboardIdsModelSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLeaderboardIdsModelSO__LeaderboardIdData(__SonyLeaderboardIdsModelSO__LeaderboardIdData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLeaderboardIdsModelSO__LeaderboardIdData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLeaderboardIdsModelSO__LeaderboardIdData(__SonyLeaderboardIdsModelSO__LeaderboardIdData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLeaderboardIdsModelSO__LeaderboardIdData();

public:
  /// @brief Field _sonyLeaderboardId, offset: 0x10, size: 0x4, def value: None
  uint32_t ____sonyLeaderboardId;

  /// @brief Field _leaderboardId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____leaderboardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData, ____sonyLeaderboardId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData, ____leaderboardId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLeaderboardIdsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4583))
// CS Name: ::SonyLeaderboardIdsModelSO*
class CORDL_TYPE SonyLeaderboardIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LeaderboardIdData = ::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData;

  /// @brief Field _leaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __get__leaderboardIds,
                      put = __set__leaderboardIds))::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* _leaderboardIds;

  /// @brief Field _leaderboardIdToSonyId, offset 0x20, size 0x8
  __declspec(property(get = __get__leaderboardIdToSonyId, put = __set__leaderboardIdToSonyId))::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* _leaderboardIdToSonyId;

  __declspec(property(get = get_leaderboardIds))::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* leaderboardIds;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*& __get__leaderboardIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*> const& __get__leaderboardIds() const;

  constexpr void __set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>*& __get__leaderboardIdToSonyId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>*> const& __get__leaderboardIdToSonyId() const;

  constexpr void __set__leaderboardIdToSonyId(::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* value);

  /// @brief Method get_leaderboardIds, addr 0x23695e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* get_leaderboardIds();

  /// @brief Method OnEnable, addr 0x23695f0, size 0x1b0, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method GetSonyLeaderboardId, addr 0x23697a0, size 0x7c, virtual false, abstract: false, final false
  inline bool GetSonyLeaderboardId(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ByRef<uint32_t> sonyLeaderboardId);

  /// @brief Method DoesSupport360, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool DoesSupport360();

  static inline ::GlobalNamespace::SonyLeaderboardIdsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x23680d0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLeaderboardIdsModelSO(SonyLeaderboardIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLeaderboardIdsModelSO(SonyLeaderboardIdsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLeaderboardIdsModelSO();

public:
  /// @brief Field _leaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* ____leaderboardIds;

  /// @brief Field _leaderboardIdToSonyId, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, uint32_t>* ____leaderboardIdToSonyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLeaderboardIdsModelSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsModelSO, ____leaderboardIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLeaderboardIdsModelSO, ____leaderboardIdToSonyId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLeaderboardIdsModelSO*, "", "SonyLeaderboardIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*, "", "SonyLeaderboardIdsModelSO/LeaderboardIdData");
