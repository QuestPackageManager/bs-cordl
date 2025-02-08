#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardsModel)
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel_LeaderboardData;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel_LeaderboardType;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel_SavedLeaderboardsData;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel_ScoreData;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__LoadAsync_d__39;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__SaveAsync_d__23;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__SaveLeaderboardsData_d__19;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel___c;
}
namespace GlobalNamespace {
class LocalLeaderboardsSettingsSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalLeaderboardsModel_LeaderboardType;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel_LeaderboardData;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel_SavedLeaderboardsData;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel_ScoreData;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel___c;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__LoadAsync_d__39;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__SaveAsync_d__23;
}
namespace GlobalNamespace {
struct LocalLeaderboardsModel__SaveLeaderboardsData_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel_ScoreData);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel___c);
MARK_VAL_T(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38);
MARK_VAL_T(::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39);
MARK_VAL_T(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16);
MARK_VAL_T(::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23);
MARK_VAL_T(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalLeaderboardsModel/LeaderboardType
struct CORDL_TYPE LocalLeaderboardsModel_LeaderboardType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LocalLeaderboardsModel_LeaderboardType_Unwrapped
  enum struct __LocalLeaderboardsModel_LeaderboardType_Unwrapped : int32_t {
    __E_AllTime = static_cast<int32_t>(0x0),
    __E_Daily = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LocalLeaderboardsModel_LeaderboardType_Unwrapped() const noexcept {
    return static_cast<__LocalLeaderboardsModel_LeaderboardType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel_LeaderboardType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LocalLeaderboardsModel_LeaderboardType(int32_t value__) noexcept;

  /// @brief Field AllTime value: I32(0)
  static ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType const AllTime;

  /// @brief Field Daily value: I32(1)
  static ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType const Daily;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13331 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsModel/ScoreData
class CORDL_TYPE LocalLeaderboardsModel_ScoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fullCombo, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__fullCombo, put = __cordl_internal_set__fullCombo)) bool _fullCombo;

  /// @brief Field _playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerName, put = __cordl_internal_set__playerName)) ::StringW _playerName;

  /// @brief Field _score, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__score, put = __cordl_internal_set__score)) int32_t _score;

  /// @brief Field _timestamp, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__timestamp, put = __cordl_internal_set__timestamp)) int64_t _timestamp;

  static inline ::GlobalNamespace::LocalLeaderboardsModel_ScoreData* New_ctor();

  constexpr bool const& __cordl_internal_get__fullCombo() const;

  constexpr bool& __cordl_internal_get__fullCombo();

  constexpr ::StringW const& __cordl_internal_get__playerName() const;

  constexpr ::StringW& __cordl_internal_get__playerName();

  constexpr int32_t const& __cordl_internal_get__score() const;

  constexpr int32_t& __cordl_internal_get__score();

  constexpr int64_t const& __cordl_internal_get__timestamp() const;

  constexpr int64_t& __cordl_internal_get__timestamp();

  constexpr void __cordl_internal_set__fullCombo(bool value);

  constexpr void __cordl_internal_set__playerName(::StringW value);

  constexpr void __cordl_internal_set__score(int32_t value);

  constexpr void __cordl_internal_set__timestamp(int64_t value);

  /// @brief Method .ctor, addr 0x2703c94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel_ScoreData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel_ScoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsModel_ScoreData(LocalLeaderboardsModel_ScoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel_ScoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsModel_ScoreData(LocalLeaderboardsModel_ScoreData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13332 };

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
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_ScoreData, ____score) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_ScoreData, ____playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_ScoreData, ____fullCombo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_ScoreData, ____timestamp) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel_ScoreData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsModel/LeaderboardData
class CORDL_TYPE LocalLeaderboardsModel_LeaderboardData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardId, put = __cordl_internal_set__leaderboardId)) ::StringW _leaderboardId;

  /// @brief Field _scores, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scores, put = __cordl_internal_set__scores)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* _scores;

  static inline ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__leaderboardId() const;

  constexpr ::StringW& __cordl_internal_get__leaderboardId();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* const& __cordl_internal_get__scores() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*& __cordl_internal_get__scores();

  constexpr void __cordl_internal_set__leaderboardId(::StringW value);

  constexpr void __cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* value);

  /// @brief Method .ctor, addr 0x2703c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel_LeaderboardData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel_LeaderboardData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsModel_LeaderboardData(LocalLeaderboardsModel_LeaderboardData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel_LeaderboardData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsModel_LeaderboardData(LocalLeaderboardsModel_LeaderboardData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13333 };

  /// @brief Field _leaderboardId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____leaderboardId;

  /// @brief Field _scores, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* ____scores;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData, ____leaderboardId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData, ____scores) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsModel/SavedLeaderboardsData
class CORDL_TYPE LocalLeaderboardsModel_SavedLeaderboardsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardsData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsData,
                      put = __cordl_internal_set__leaderboardsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* _leaderboardsData;

  static inline ::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* const& __cordl_internal_get__leaderboardsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*& __cordl_internal_get__leaderboardsData();

  constexpr void __cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value);

  /// @brief Method .ctor, addr 0x270448c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel_SavedLeaderboardsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel_SavedLeaderboardsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsModel_SavedLeaderboardsData(LocalLeaderboardsModel_SavedLeaderboardsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel_SavedLeaderboardsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsModel_SavedLeaderboardsData(LocalLeaderboardsModel_SavedLeaderboardsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13334 };

  /// @brief Field _leaderboardsData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* ____leaderboardsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData, ____leaderboardsData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsModel/<>c
class CORDL_TYPE LocalLeaderboardsModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LocalLeaderboardsModel___c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0)) ::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* __9__21_0;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>* __9__22_0;

  /// @brief Field <>9__22_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_1, put = setStaticF___9__22_1)) ::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* __9__22_1;

  static inline ::GlobalNamespace::LocalLeaderboardsModel___c* New_ctor();

  /// @brief Method <AppendLeaderboardScores>b__21_0, addr 0x27044f8, size 0x24, virtual false, abstract: false, final false
  inline int32_t _AppendLeaderboardScores_b__21_0(::GlobalNamespace::LocalLeaderboardsModel_ScoreData* a, ::GlobalNamespace::LocalLeaderboardsModel_ScoreData* b);

  /// @brief Method <MigrateQuestLeaderboards>b__22_0, addr 0x270451c, size 0x58, virtual false, abstract: false, final false
  inline bool _MigrateQuestLeaderboards_b__22_0(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* leaderboardData);

  /// @brief Method <MigrateQuestLeaderboards>b__22_1, addr 0x2704574, size 0xc, virtual false, abstract: false, final false
  inline bool _MigrateQuestLeaderboards_b__22_1(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* leaderboardData);

  /// @brief Method .ctor, addr 0x27044f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LocalLeaderboardsModel___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* getStaticF___9__21_0();

  static inline ::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>* getStaticF___9__22_0();

  static inline ::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* getStaticF___9__22_1();

  static inline void setStaticF___9(::GlobalNamespace::LocalLeaderboardsModel___c* value);

  static inline void setStaticF___9__21_0(::System::Comparison_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, bool>* value);

  static inline void setStaticF___9__22_1(::System::Predicate_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsModel___c(LocalLeaderboardsModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsModel___c(LocalLeaderboardsModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13335 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalLeaderboardsModel/<ClearAllLeaderboardsAsync>d__38
struct CORDL_TYPE LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2704580, size 0x430, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27049b0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "deleteLeaderboardFile", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::GlobalNamespace::LocalLeaderboardsModel* __4__this, bool deleteLeaderboardFile,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13336 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field deleteLeaderboardFile, offset: 0x28, size: 0x1, def value: None
  bool deleteLeaderboardFile;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, deleteLeaderboardFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalLeaderboardsModel/<LoadAsync>d__39
struct CORDL_TYPE LocalLeaderboardsModel__LoadAsync_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2704a18, size 0x344, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2704d5c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel__LoadAsync_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>", modifiers: "", def_value: None }]
  constexpr LocalLeaderboardsModel__LoadAsync_d__39(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LocalLeaderboardsModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalLeaderboardsModel/<LoadLeaderboardsDataAsync>d__16
struct CORDL_TYPE LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2704dc4, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2705024, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*>", modifiers: "", def_value: None }]
  constexpr LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*> __t__builder,
      ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::StringW filename,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13338 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field filename, offset: 0x28, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, filename) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalLeaderboardsModel/<SaveAsync>d__23
struct CORDL_TYPE LocalLeaderboardsModel__SaveAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27050a0, size 0x2c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2705368, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel__SaveAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LocalLeaderboardsModel__SaveAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LocalLeaderboardsModel* __4__this,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13339 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalLeaderboardsModel/<SaveLeaderboardsData>d__19
struct CORDL_TYPE LocalLeaderboardsModel__SaveLeaderboardsData_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27053d0, size 0x32c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27056fc, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel__SaveLeaderboardsData_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "leaderboardsData", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LocalLeaderboardsModel__SaveLeaderboardsData_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardsData,
                                                               ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::StringW filename,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field leaderboardsData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardsData;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field filename, offset: 0x30, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, leaderboardsData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, filename) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsModel
class CORDL_TYPE LocalLeaderboardsModel : public ::System::Object {
public:
  // Declarations
  using LeaderboardData = ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData;

  using LeaderboardType = ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType;

  using SavedLeaderboardsData = ::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData;

  using ScoreData = ::GlobalNamespace::LocalLeaderboardsModel_ScoreData;

  using _ClearAllLeaderboardsAsync_d__38 = ::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38;

  using _LoadAsync_d__39 = ::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39;

  using _LoadLeaderboardsDataAsync_d__16 = ::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16;

  using _SaveAsync_d__23 = ::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23;

  using _SaveLeaderboardsData_d__19 = ::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19;

  using __c = ::GlobalNamespace::LocalLeaderboardsModel___c;

  /// @brief Field _dailyLeaderboardsData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__dailyLeaderboardsData,
                      put = __cordl_internal_set__dailyLeaderboardsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* _dailyLeaderboardsData;

  /// @brief Field _fileStorage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _lastScoreLeaderboardId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastScoreLeaderboardId, put = __cordl_internal_set__lastScoreLeaderboardId)) ::StringW _lastScoreLeaderboardId;

  /// @brief Field _lastScorePositions, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__lastScorePositions,
      put = __cordl_internal_set__lastScorePositions)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>* _lastScorePositions;

  /// @brief Field _leaderboardsData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsData,
                      put = __cordl_internal_set__leaderboardsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* _leaderboardsData;

  /// @brief Field _maxNumberOfScoresInLeaderboard, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfScoresInLeaderboard, put = __cordl_internal_set__maxNumberOfScoresInLeaderboard)) int32_t _maxNumberOfScoresInLeaderboard;

  /// @brief Field newScoreWasAddedToLeaderboardEvent, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_newScoreWasAddedToLeaderboardEvent,
      put = __cordl_internal_set_newScoreWasAddedToLeaderboardEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* newScoreWasAddedToLeaderboardEvent;

  /// @brief Method AddScore, addr 0x2703984, size 0x308, virtual false, abstract: false, final false
  inline void AddScore(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType, ::StringW playerName, int32_t score, bool fullCombo);

  /// @brief Method AddScore, addr 0x2703fe4, size 0x5c, virtual false, abstract: false, final false
  inline void AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo);

  /// @brief Method AppendLeaderboardScores, addr 0x2703018, size 0x17c, virtual false, abstract: false, final false
  static inline void AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* main,
                                             ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* tail, int32_t maxNumberOfScores);

  /// @brief Method ClearAllLeaderboardsAsync, addr 0x27041cc, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ClearAllLeaderboardsAsync(bool deleteLeaderboardFile);

  /// @brief Method ClearLastScorePosition, addr 0x2703f8c, size 0x58, virtual false, abstract: false, final false
  inline void ClearLastScorePosition();

  /// @brief Method ClearLeaderboard, addr 0x2704090, size 0x13c, virtual false, abstract: false, final false
  inline void ClearLeaderboard(::StringW leaderboardId);

  /// @brief Method GetCurrentTimestamp, addr 0x27036a0, size 0xf4, virtual false, abstract: false, final false
  inline int64_t GetCurrentTimestamp();

  /// @brief Method GetHighScore, addr 0x2703d7c, size 0xa4, virtual false, abstract: false, final false
  inline int32_t GetHighScore(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType);

  /// @brief Method GetLastScorePosition, addr 0x2703ef4, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetLastScorePosition(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType);

  /// @brief Method GetLeaderboardData, addr 0x27035cc, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData* GetLeaderboardData(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType);

  /// @brief Method GetLeaderboardsData, addr 0x27035a4, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*
  GetLeaderboardsData(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType);

  /// @brief Method GetPositionInLeaderboard, addr 0x2703e20, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetPositionInLeaderboard(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType, int32_t score);

  /// @brief Method GetScores, addr 0x2703d64, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* GetScores(::StringW leaderboardId,
                                                                                                                 ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType);

  /// @brief Method Load, addr 0x2704364, size 0x80, virtual false, abstract: false, final false
  inline void Load();

  /// @brief Method LoadAsync, addr 0x27042a4, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadAsync();

  /// @brief Method LoadInternal, addr 0x27043e4, size 0xa8, virtual false, abstract: false, final false
  inline void LoadInternal();

  /// @brief Method LoadLeaderboardsData, addr 0x2702db0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* LoadLeaderboardsData(::StringW filename);

  /// @brief Method LoadLeaderboardsDataAsync, addr 0x2702cc4, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*>* LoadLeaderboardsDataAsync(::StringW filename);

  /// @brief Method LoadLeaderboardsDataInternal, addr 0x2702e10, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*
  LoadLeaderboardsDataInternal(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData* savedLeaderboardsData);

  /// @brief Method MigrateQuestLeaderboards, addr 0x2703194, size 0x350, virtual false, abstract: false, final false
  static inline void MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardDataList, int32_t maxNumberOfScores);

  static inline ::GlobalNamespace::LocalLeaderboardsModel* New_ctor(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO* localLeaderboardsSettingsSo);

  /// @brief Method SaveAsync, addr 0x27034e4, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  /// @brief Method SaveLeaderboardsData, addr 0x2702e88, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveLeaderboardsData(::StringW filename,
                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* leaderboardsData);

  /// @brief Method SaveLeaderboardsDataAsync, addr 0x2702f5c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveLeaderboardsDataAsync(::StringW filename, ::StringW json);

  /// @brief Method UpdateDailyLeaderboard, addr 0x2703794, size 0x1f0, virtual false, abstract: false, final false
  inline void UpdateDailyLeaderboard(::StringW leaderboardId);

  /// @brief Method WillScoreGoIntoLeaderboard, addr 0x2703c9c, size 0xc8, virtual false, abstract: false, final false
  inline bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType, int32_t score);

  /// @brief Method WillScoreGoIntoLeaderboard, addr 0x2704040, size 0x50, virtual false, abstract: false, final false
  inline bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* const& __cordl_internal_get__dailyLeaderboardsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*& __cordl_internal_get__dailyLeaderboardsData();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::StringW const& __cordl_internal_get__lastScoreLeaderboardId() const;

  constexpr ::StringW& __cordl_internal_get__lastScoreLeaderboardId();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>* const& __cordl_internal_get__lastScorePositions() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>*& __cordl_internal_get__lastScorePositions();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* const& __cordl_internal_get__leaderboardsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>*& __cordl_internal_get__leaderboardsData();

  constexpr int32_t const& __cordl_internal_get__maxNumberOfScoresInLeaderboard() const;

  constexpr int32_t& __cordl_internal_get__maxNumberOfScoresInLeaderboard();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* const& __cordl_internal_get_newScoreWasAddedToLeaderboardEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>*& __cordl_internal_get_newScoreWasAddedToLeaderboardEvent();

  constexpr void __cordl_internal_set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__lastScoreLeaderboardId(::StringW value);

  constexpr void __cordl_internal_set__lastScorePositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>* value);

  constexpr void __cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* value);

  constexpr void __cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t value);

  constexpr void __cordl_internal_set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* value);

  /// @brief Method .ctor, addr 0x2702c20, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO* localLeaderboardsSettingsSo);

  /// @brief Method add_newScoreWasAddedToLeaderboardEvent, addr 0x2702ac0, size 0xb0, virtual false, abstract: false, final false
  inline void add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* value);

  /// @brief Method remove_newScoreWasAddedToLeaderboardEvent, addr 0x2702b70, size 0xb0, virtual false, abstract: false, final false
  inline void remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsModel(LocalLeaderboardsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsModel(LocalLeaderboardsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13341 };

  /// @brief Field kLocalDailyLeaderboardsFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalDailyLeaderboardsFileName{ u"LocalDailyLeaderboards.dat" };

  /// @brief Field kLocalLeaderboardsFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalLeaderboardsFileName{ u"LocalLeaderboards.dat" };

  /// @brief Field newScoreWasAddedToLeaderboardEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>* ___newScoreWasAddedToLeaderboardEvent;

  /// @brief Field _fileStorage, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _maxNumberOfScoresInLeaderboard, offset: 0x20, size: 0x4, def value: None
  int32_t ____maxNumberOfScoresInLeaderboard;

  /// @brief Field _lastScorePositions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, int32_t>* ____lastScorePositions;

  /// @brief Field _lastScoreLeaderboardId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____lastScoreLeaderboardId;

  /// @brief Field _leaderboardsData, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* ____leaderboardsData;

  /// @brief Field _dailyLeaderboardsData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*>* ____dailyLeaderboardsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ___newScoreWasAddedToLeaderboardEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____fileStorage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____maxNumberOfScoresInLeaderboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____lastScorePositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____lastScoreLeaderboardId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____leaderboardsData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____dailyLeaderboardsData) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, "", "LocalLeaderboardsModel/LeaderboardType");
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel*, "", "LocalLeaderboardsModel");
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardData*, "", "LocalLeaderboardsModel/LeaderboardData");
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel_SavedLeaderboardsData*, "", "LocalLeaderboardsModel/SavedLeaderboardsData");
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel_ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel_ScoreData*, "", "LocalLeaderboardsModel/ScoreData");
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel___c*, "", "LocalLeaderboardsModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel__ClearAllLeaderboardsAsync_d__38, "", "LocalLeaderboardsModel/<ClearAllLeaderboardsAsync>d__38");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel__LoadAsync_d__39, "", "LocalLeaderboardsModel/<LoadAsync>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel__LoadLeaderboardsDataAsync_d__16, "", "LocalLeaderboardsModel/<LoadLeaderboardsDataAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel__SaveAsync_d__23, "", "LocalLeaderboardsModel/<SaveAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel__SaveLeaderboardsData_d__19, "", "LocalLeaderboardsModel/<SaveLeaderboardsData>d__19");
