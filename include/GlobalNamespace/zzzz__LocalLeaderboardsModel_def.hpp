#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardsModel)
namespace GlobalNamespace {
struct __LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__LeaderboardData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__ScoreData;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__SavedLeaderboardsData;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
template <typename T> class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__LeaderboardData;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__SavedLeaderboardsData;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__ScoreData;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel____c);
// Type: ::LeaderboardType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4247))
// CS Name: ::LocalLeaderboardsModel::LeaderboardType
struct CORDL_TYPE __LocalLeaderboardsModel__LeaderboardType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LocalLeaderboardsModel__LeaderboardType_Unwrapped
  enum struct ____LocalLeaderboardsModel__LeaderboardType_Unwrapped : int32_t {
    __E_AllTime = static_cast<int32_t>(0x0),
    __E_Daily = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LocalLeaderboardsModel__LeaderboardType_Unwrapped() const noexcept {
    return static_cast<____LocalLeaderboardsModel__LeaderboardType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel__LeaderboardType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__LeaderboardType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AllTime value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType const AllTime;

  /// @brief Field Daily value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType const Daily;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoreData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4248))
// CS Name: ::LocalLeaderboardsModel::ScoreData*
class CORDL_TYPE __LocalLeaderboardsModel__ScoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _score, offset 0x10, size 0x4
  __declspec(property(get = __get__score, put = __set__score)) int32_t _score;

  /// @brief Field _playerName, offset 0x18, size 0x8
  __declspec(property(get = __get__playerName, put = __set__playerName))::StringW _playerName;

  /// @brief Field _fullCombo, offset 0x20, size 0x1
  __declspec(property(get = __get__fullCombo, put = __set__fullCombo)) bool _fullCombo;

  /// @brief Field _timestamp, offset 0x28, size 0x8
  __declspec(property(get = __get__timestamp, put = __set__timestamp)) int64_t _timestamp;

  constexpr int32_t& __get__score();

  constexpr int32_t const& __get__score() const;

  constexpr void __set__score(int32_t value);

  constexpr ::StringW& __get__playerName();

  constexpr ::StringW const& __get__playerName() const;

  constexpr void __set__playerName(::StringW value);

  constexpr bool& __get__fullCombo();

  constexpr bool const& __get__fullCombo() const;

  constexpr void __set__fullCombo(bool value);

  constexpr int64_t& __get__timestamp();

  constexpr int64_t const& __get__timestamp() const;

  constexpr void __set__timestamp(int64_t value);

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* New_ctor();

  /// @brief Method .ctor addr 0x21d8d60 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__ScoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel__ScoreData(__LocalLeaderboardsModel__ScoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__ScoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel__ScoreData(__LocalLeaderboardsModel__ScoreData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__ScoreData();

public:
  /// @brief Field _score, offset: 0x10, size: 0x4, def value: None
  int32_t ____score;

  /// @brief Field _playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____playerName;

  /// @brief Field _fullCombo, offset: 0x20, size: 0x1, def value: None
  bool ____fullCombo;

  /// @brief Field _timestamp, offset: 0x28, size: 0x8, def value: None
  int64_t ____timestamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData, ____score) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData, ____playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData, ____fullCombo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData, ____timestamp) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4249))
// CS Name: ::LocalLeaderboardsModel::LeaderboardData*
class CORDL_TYPE __LocalLeaderboardsModel__LeaderboardData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardId, offset 0x10, size 0x8
  __declspec(property(get = __get__leaderboardId, put = __set__leaderboardId))::StringW _leaderboardId;

  /// @brief Field _scores, offset 0x18, size 0x8
  __declspec(property(get = __get__scores, put = __set__scores))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* _scores;

  constexpr ::StringW& __get__leaderboardId();

  constexpr ::StringW const& __get__leaderboardId() const;

  constexpr void __set__leaderboardId(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*& __get__scores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*> const& __get__scores() const;

  constexpr void __set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* value);

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* New_ctor();

  /// @brief Method .ctor addr 0x21d8d58 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__LeaderboardData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel__LeaderboardData(__LocalLeaderboardsModel__LeaderboardData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__LeaderboardData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel__LeaderboardData(__LocalLeaderboardsModel__LeaderboardData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__LeaderboardData();

public:
  /// @brief Field _leaderboardId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____leaderboardId;

  /// @brief Field _scores, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* ____scores;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData, ____leaderboardId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData, ____scores) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SavedLeaderboardsData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4250))
// CS Name: ::LocalLeaderboardsModel::SavedLeaderboardsData*
class CORDL_TYPE __LocalLeaderboardsModel__SavedLeaderboardsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardsData, offset 0x10, size 0x8
  __declspec(property(get = __get__leaderboardsData,
                      put = __set__leaderboardsData))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* _leaderboardsData;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& __get__leaderboardsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const& __get__leaderboardsData() const;

  constexpr void __set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData* New_ctor();

  /// @brief Method .ctor addr 0x21d8234 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__SavedLeaderboardsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel__SavedLeaderboardsData(__LocalLeaderboardsModel__SavedLeaderboardsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__SavedLeaderboardsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel__SavedLeaderboardsData(__LocalLeaderboardsModel__SavedLeaderboardsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__SavedLeaderboardsData();

public:
  /// @brief Field _leaderboardsData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* ____leaderboardsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData, ____leaderboardsData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4251))
// CS Name: ::LocalLeaderboardsModel::<>c*
class CORDL_TYPE __LocalLeaderboardsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LocalLeaderboardsModel____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* __9__16_0;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_1, put = setStaticF___9__17_1))::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* __9__17_1;

  static inline void setStaticF___9(::GlobalNamespace::__LocalLeaderboardsModel____c* value);

  static inline ::GlobalNamespace::__LocalLeaderboardsModel____c* getStaticF___9();

  static inline void setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* value);

  static inline ::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* getStaticF___9__16_0();

  static inline void setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* getStaticF___9__17_0();

  static inline void setStaticF___9__17_1(::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  static inline ::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* getStaticF___9__17_1();

  static inline ::GlobalNamespace::__LocalLeaderboardsModel____c* New_ctor();

  /// @brief Method .ctor addr 0x21d9654 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AppendLeaderboardScores>b__16_0 addr 0x21d965c size 0x24 virtual false final false
  inline int32_t _AppendLeaderboardScores_b__16_0(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* a, ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* b);

  /// @brief Method <MigrateQuestLeaderboards>b__17_0 addr 0x21d9680 size 0x58 virtual false final false
  inline bool _MigrateQuestLeaderboards_b__17_0(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* leaderboardData);

  /// @brief Method <MigrateQuestLeaderboards>b__17_1 addr 0x21d96d8 size 0xc virtual false final false
  inline bool _MigrateQuestLeaderboards_b__17_1(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* leaderboardData);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel____c(__LocalLeaderboardsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel____c(__LocalLeaderboardsModel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalLeaderboardsModel
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4252))
// CS Name: ::LocalLeaderboardsModel*
class CORDL_TYPE LocalLeaderboardsModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LocalLeaderboardsModel____c;

  using SavedLeaderboardsData = ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData;

  using LeaderboardData = ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData;

  using ScoreData = ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData;

  using LeaderboardType = ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType;

  /// @brief Field _maxNumberOfScoresInLeaderboard, offset 0x18, size 0x4
  __declspec(property(get = __get__maxNumberOfScoresInLeaderboard, put = __set__maxNumberOfScoresInLeaderboard)) int32_t _maxNumberOfScoresInLeaderboard;

  /// @brief Field newScoreWasAddedToLeaderboardEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_newScoreWasAddedToLeaderboardEvent,
                      put = __set_newScoreWasAddedToLeaderboardEvent))::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* newScoreWasAddedToLeaderboardEvent;

  /// @brief Field _lastScorePositions, offset 0x28, size 0x8
  __declspec(property(get = __get__lastScorePositions,
                      put = __set__lastScorePositions))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* _lastScorePositions;

  /// @brief Field _lastScoreLeaderboardId, offset 0x30, size 0x8
  __declspec(property(get = __get__lastScoreLeaderboardId, put = __set__lastScoreLeaderboardId))::StringW _lastScoreLeaderboardId;

  /// @brief Field _leaderboardsData, offset 0x38, size 0x8
  __declspec(property(get = __get__leaderboardsData,
                      put = __set__leaderboardsData))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* _leaderboardsData;

  /// @brief Field _dailyLeaderboardsData, offset 0x40, size 0x8
  __declspec(property(get = __get__dailyLeaderboardsData,
                      put = __set__dailyLeaderboardsData))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* _dailyLeaderboardsData;

  constexpr int32_t& __get__maxNumberOfScoresInLeaderboard();

  constexpr int32_t const& __get__maxNumberOfScoresInLeaderboard() const;

  constexpr void __set__maxNumberOfScoresInLeaderboard(int32_t value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*& __get_newScoreWasAddedToLeaderboardEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*> const& __get_newScoreWasAddedToLeaderboardEvent() const;

  constexpr void __set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>*& __get__lastScorePositions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>*> const&
  __get__lastScorePositions() const;

  constexpr void __set__lastScorePositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* value);

  constexpr ::StringW& __get__lastScoreLeaderboardId();

  constexpr ::StringW const& __get__lastScoreLeaderboardId() const;

  constexpr void __set__lastScoreLeaderboardId(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& __get__leaderboardsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const& __get__leaderboardsData() const;

  constexpr void __set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& __get__dailyLeaderboardsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const& __get__dailyLeaderboardsData() const;

  constexpr void __set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  /// @brief Method add_newScoreWasAddedToLeaderboardEvent addr 0x21d7d5c size 0xb0 virtual false final false
  inline void add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value);

  /// @brief Method remove_newScoreWasAddedToLeaderboardEvent addr 0x21d7e0c size 0xb0 virtual false final false
  inline void remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value);

  /// @brief Method LoadLeaderboardsData addr 0x21d7ebc size 0x240 virtual false final false
  inline void LoadLeaderboardsData(::GlobalNamespace::ISaveData* saveData, ::StringW filename,
                                   ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> leaderboardsData);

  /// @brief Method SaveLeaderboardsData addr 0x21d80fc size 0x138 virtual false final false
  inline void SaveLeaderboardsData(::GlobalNamespace::ISaveData* saveData, ::StringW filename,
                                   ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardsData);

  /// @brief Method AppendLeaderboardScores addr 0x21d823c size 0x174 virtual false final false
  static inline void AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* main,
                                             ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* tail, int32_t maxNumberOfScores);

  /// @brief Method MigrateQuestLeaderboards addr 0x21d83b0 size 0x360 virtual false final false
  static inline void MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardDataList, int32_t maxNumberOfScores);

  /// @brief Method Save addr 0x21d8710 size 0x7c virtual false final false
  inline void Save(::GlobalNamespace::ISaveData* saveData);

  /// @brief Method GetLeaderboardsData addr 0x21d878c size 0x28 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*
  GetLeaderboardsData(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetLeaderboardData addr 0x21d87b4 size 0xd4 virtual false final false
  inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* GetLeaderboardData(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetCurrentTimestamp addr 0x21d8888 size 0xcc virtual false final false
  inline int64_t GetCurrentTimestamp();

  /// @brief Method UpdateDailyLeaderboard addr 0x21d8954 size 0xf0 virtual false final false
  inline void UpdateDailyLeaderboard(::StringW leaderboardId);

  /// @brief Method AddScore addr 0x21d8a44 size 0x314 virtual false final false
  inline void AddScore(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, ::StringW playerName, int32_t score, bool fullCombo);

  /// @brief Method WillScoreGoIntoLeaderboard addr 0x21d8d68 size 0xc8 virtual false final false
  inline bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score);

  /// @brief Method GetScores addr 0x21d8e30 size 0x18 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* GetScores(::StringW leaderboardId,
                                                                                                                    ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetHighScore addr 0x21d8e48 size 0xa4 virtual false final false
  inline int32_t GetHighScore(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetPositionInLeaderboard addr 0x21d8eec size 0xd4 virtual false final false
  inline int32_t GetPositionInLeaderboard(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score);

  /// @brief Method GetLastScorePosition addr 0x21d8fc0 size 0x98 virtual false final false
  inline int32_t GetLastScorePosition(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method ClearLastScorePosition addr 0x21d9058 size 0x58 virtual false final false
  inline void ClearLastScorePosition();

  /// @brief Method AddScore addr 0x21d90b0 size 0x5c virtual false final false
  inline void AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo);

  /// @brief Method WillScoreGoIntoLeaderboard addr 0x21d910c size 0x50 virtual false final false
  inline bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score);

  /// @brief Method ClearLeaderboard addr 0x21d915c size 0x130 virtual false final false
  inline void ClearLeaderboard(::StringW leaderboardId);

  /// @brief Method ClearAllLeaderboards addr 0x21d928c size 0x1e4 virtual false final false
  inline void ClearAllLeaderboards(::GlobalNamespace::ISaveData* saveData, bool deleteLeaderboardFile);

  /// @brief Method Load addr 0x21d9470 size 0xfc virtual false final false
  inline void Load(::GlobalNamespace::ISaveData* saveData);

  static inline ::GlobalNamespace::LocalLeaderboardsModel* New_ctor();

  /// @brief Method .ctor addr 0x21d956c size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsModel(LocalLeaderboardsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsModel(LocalLeaderboardsModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel();

public:
  /// @brief Field _maxNumberOfScoresInLeaderboard, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxNumberOfScoresInLeaderboard;

  /// @brief Field newScoreWasAddedToLeaderboardEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* ___newScoreWasAddedToLeaderboardEvent;

  /// @brief Field _lastScorePositions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* ____lastScorePositions;

  /// @brief Field _lastScoreLeaderboardId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____lastScoreLeaderboardId;

  /// @brief Field _leaderboardsData, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* ____leaderboardsData;

  /// @brief Field _dailyLeaderboardsData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* ____dailyLeaderboardsData;

  /// @brief Field kLocalLeaderboardsFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalLeaderboardsFileName{ u"LocalLeaderboards.dat" };

  /// @brief Field kLocalDailyLeaderboardsFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalDailyLeaderboardsFileName{ u"LocalDailyLeaderboards.dat" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____maxNumberOfScoresInLeaderboard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ___newScoreWasAddedToLeaderboardEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____lastScorePositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____lastScoreLeaderboardId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____leaderboardsData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____dailyLeaderboardsData) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, "", "LocalLeaderboardsModel/LeaderboardType");
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel*, "", "LocalLeaderboardsModel");
NEED_NO_BOX(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, "", "LocalLeaderboardsModel/LeaderboardData");
NEED_NO_BOX(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*, "", "LocalLeaderboardsModel/SavedLeaderboardsData");
NEED_NO_BOX(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*, "", "LocalLeaderboardsModel/ScoreData");
NEED_NO_BOX(::GlobalNamespace::__LocalLeaderboardsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel____c*, "", "LocalLeaderboardsModel/<>c");
