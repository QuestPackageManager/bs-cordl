#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
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
class LocalLeaderboardsSettingsSO;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__LeaderboardData;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__SavedLeaderboardsData;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel__ScoreData;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___LoadAsync_d__39;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___SaveAsync_d__23;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___SaveLeaderboardsData_d__19;
}
namespace GlobalNamespace {
class __LocalLeaderboardsModel____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___LoadAsync_d__39;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___SaveAsync_d__23;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel___SaveLeaderboardsData_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType);
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsModel);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData);
MARK_REF_PTR_T(::GlobalNamespace::__LocalLeaderboardsModel____c);
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38);
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39);
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23);
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19);
// Type: ::LeaderboardType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__LeaderboardType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel__LeaderboardType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllTime value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType const AllTime;

  /// @brief Field Daily value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType const Daily;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::LocalLeaderboardsModel::ScoreData*
class CORDL_TYPE __LocalLeaderboardsModel__ScoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fullCombo, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__fullCombo, put = __cordl_internal_set__fullCombo)) bool _fullCombo;

  /// @brief Field _playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerName, put = __cordl_internal_set__playerName))::StringW _playerName;

  /// @brief Field _score, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__score, put = __cordl_internal_set__score)) int32_t _score;

  /// @brief Field _timestamp, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__timestamp, put = __cordl_internal_set__timestamp)) int64_t _timestamp;

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* New_ctor();

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

  /// @brief Method .ctor, addr 0x13b0608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__ScoreData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__ScoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel__ScoreData(__LocalLeaderboardsModel__ScoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__ScoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel__ScoreData(__LocalLeaderboardsModel__ScoreData const&) = delete;

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
// CS Name: ::LocalLeaderboardsModel::LeaderboardData*
class CORDL_TYPE __LocalLeaderboardsModel__LeaderboardData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardId, put = __cordl_internal_set__leaderboardId))::StringW _leaderboardId;

  /// @brief Field _scores, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scores, put = __cordl_internal_set__scores))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* _scores;

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__leaderboardId() const;

  constexpr ::StringW& __cordl_internal_get__leaderboardId();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*& __cordl_internal_get__scores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*> const& __cordl_internal_get__scores() const;

  constexpr void __cordl_internal_set__leaderboardId(::StringW value);

  constexpr void __cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* value);

  /// @brief Method .ctor, addr 0x13b0600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__LeaderboardData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__LeaderboardData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel__LeaderboardData(__LocalLeaderboardsModel__LeaderboardData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__LeaderboardData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel__LeaderboardData(__LocalLeaderboardsModel__LeaderboardData const&) = delete;

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
// CS Name: ::LocalLeaderboardsModel::SavedLeaderboardsData*
class CORDL_TYPE __LocalLeaderboardsModel__SavedLeaderboardsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaderboardsData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsData,
                      put = __cordl_internal_set__leaderboardsData))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* _leaderboardsData;

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& __cordl_internal_get__leaderboardsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const&
  __cordl_internal_get__leaderboardsData() const;

  constexpr void __cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  /// @brief Method .ctor, addr 0x13b0e0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel__SavedLeaderboardsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__SavedLeaderboardsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel__SavedLeaderboardsData(__LocalLeaderboardsModel__SavedLeaderboardsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel__SavedLeaderboardsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel__SavedLeaderboardsData(__LocalLeaderboardsModel__SavedLeaderboardsData const&) = delete;

  /// @brief Field _leaderboardsData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* ____leaderboardsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData, ____leaderboardsData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadLeaderboardsDataAsync>d__16
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LocalLeaderboardsModel::<LoadLeaderboardsDataAsync>d__16
struct CORDL_TYPE __LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13b0e14, size 0x204, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13b1018, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> __t__builder,
      ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::StringW filename,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field filename, offset: 0x28, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, filename) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SaveLeaderboardsData>d__19
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LocalLeaderboardsModel::<SaveLeaderboardsData>d__19
struct CORDL_TYPE __LocalLeaderboardsModel___SaveLeaderboardsData_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13b1070, size 0x2c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13b1338, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel___SaveLeaderboardsData_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "leaderboardsData", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel___SaveLeaderboardsData_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardsData,
                                                                  ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::StringW filename,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field leaderboardsData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardsData;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field filename, offset: 0x30, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, leaderboardsData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, filename) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalLeaderboardsModel::<>c*
class CORDL_TYPE __LocalLeaderboardsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LocalLeaderboardsModel____c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0))::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* __9__21_0;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0))::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* __9__22_0;

  /// @brief Field <>9__22_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_1, put = setStaticF___9__22_1))::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* __9__22_1;

  static inline ::GlobalNamespace::__LocalLeaderboardsModel____c* New_ctor();

  /// @brief Method <AppendLeaderboardScores>b__21_0, addr 0x13b13b0, size 0x24, virtual false, abstract: false, final false
  inline int32_t _AppendLeaderboardScores_b__21_0(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* a, ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* b);

  /// @brief Method <MigrateQuestLeaderboards>b__22_0, addr 0x13b13d4, size 0x58, virtual false, abstract: false, final false
  inline bool _MigrateQuestLeaderboards_b__22_0(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* leaderboardData);

  /// @brief Method <MigrateQuestLeaderboards>b__22_1, addr 0x13b142c, size 0xc, virtual false, abstract: false, final false
  inline bool _MigrateQuestLeaderboards_b__22_1(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* leaderboardData);

  /// @brief Method .ctor, addr 0x13b13a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LocalLeaderboardsModel____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* getStaticF___9__21_0();

  static inline ::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* getStaticF___9__22_0();

  static inline ::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* getStaticF___9__22_1();

  static inline void setStaticF___9(::GlobalNamespace::__LocalLeaderboardsModel____c* value);

  static inline void setStaticF___9__21_0(::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, bool>* value);

  static inline void setStaticF___9__22_1(::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalLeaderboardsModel____c(__LocalLeaderboardsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalLeaderboardsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalLeaderboardsModel____c(__LocalLeaderboardsModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<SaveAsync>d__23
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LocalLeaderboardsModel::<SaveAsync>d__23
struct CORDL_TYPE __LocalLeaderboardsModel___SaveAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13b1438, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13b1694, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel___SaveAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel___SaveAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::GlobalNamespace::LocalLeaderboardsModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ClearAllLeaderboardsAsync>d__38
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LocalLeaderboardsModel::<ClearAllLeaderboardsAsync>d__38
struct CORDL_TYPE __LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13b16a0, size 0x3c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13b1a64, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "deleteLeaderboardFile", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::GlobalNamespace::LocalLeaderboardsModel* __4__this, bool deleteLeaderboardFile,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, deleteLeaderboardFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadAsync>d__39
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LocalLeaderboardsModel::<LoadAsync>d__39
struct CORDL_TYPE __LocalLeaderboardsModel___LoadAsync_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13b1a70, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13b1d3c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardsModel___LoadAsync_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardsModel___LoadAsync_d__39(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LocalLeaderboardsModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalLeaderboardsModel
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalLeaderboardsModel*
class CORDL_TYPE LocalLeaderboardsModel : public ::System::Object {
public:
  // Declarations
  using LeaderboardData = ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData;

  using LeaderboardType = ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType;

  using SavedLeaderboardsData = ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData;

  using ScoreData = ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData;

  using _ClearAllLeaderboardsAsync_d__38 = ::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38;

  using _LoadAsync_d__39 = ::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39;

  using _LoadLeaderboardsDataAsync_d__16 = ::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16;

  using _SaveAsync_d__23 = ::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23;

  using _SaveLeaderboardsData_d__19 = ::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19;

  using __c = ::GlobalNamespace::__LocalLeaderboardsModel____c;

  /// @brief Field _dailyLeaderboardsData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__dailyLeaderboardsData,
                      put = __cordl_internal_set__dailyLeaderboardsData))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* _dailyLeaderboardsData;

  /// @brief Field _fileStorage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _lastScoreLeaderboardId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastScoreLeaderboardId, put = __cordl_internal_set__lastScoreLeaderboardId))::StringW _lastScoreLeaderboardId;

  /// @brief Field _lastScorePositions, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__lastScorePositions,
               put = __cordl_internal_set__lastScorePositions))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* _lastScorePositions;

  /// @brief Field _leaderboardsData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsData,
                      put = __cordl_internal_set__leaderboardsData))::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* _leaderboardsData;

  /// @brief Field _maxNumberOfScoresInLeaderboard, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfScoresInLeaderboard, put = __cordl_internal_set__maxNumberOfScoresInLeaderboard)) int32_t _maxNumberOfScoresInLeaderboard;

  /// @brief Field newScoreWasAddedToLeaderboardEvent, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_newScoreWasAddedToLeaderboardEvent,
      put = __cordl_internal_set_newScoreWasAddedToLeaderboardEvent))::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* newScoreWasAddedToLeaderboardEvent;

  /// @brief Method AddScore, addr 0x13b02ec, size 0x314, virtual false, abstract: false, final false
  inline void AddScore(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, ::StringW playerName, int32_t score, bool fullCombo);

  /// @brief Method AddScore, addr 0x13b0958, size 0x5c, virtual false, abstract: false, final false
  inline void AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo);

  /// @brief Method AppendLeaderboardScores, addr 0x13af998, size 0x174, virtual false, abstract: false, final false
  static inline void AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* main,
                                             ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* tail, int32_t maxNumberOfScores);

  /// @brief Method ClearAllLeaderboardsAsync, addr 0x13b0b40, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ClearAllLeaderboardsAsync(bool deleteLeaderboardFile);

  /// @brief Method ClearLastScorePosition, addr 0x13b0900, size 0x58, virtual false, abstract: false, final false
  inline void ClearLastScorePosition();

  /// @brief Method ClearLeaderboard, addr 0x13b0a04, size 0x13c, virtual false, abstract: false, final false
  inline void ClearLeaderboard(::StringW leaderboardId);

  /// @brief Method GetCurrentTimestamp, addr 0x13b0030, size 0xcc, virtual false, abstract: false, final false
  inline int64_t GetCurrentTimestamp();

  /// @brief Method GetHighScore, addr 0x13b06f0, size 0xa4, virtual false, abstract: false, final false
  inline int32_t GetHighScore(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetLastScorePosition, addr 0x13b0868, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetLastScorePosition(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetLeaderboardData, addr 0x13aff5c, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* GetLeaderboardData(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetLeaderboardsData, addr 0x13aff34, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*
  GetLeaderboardsData(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method GetPositionInLeaderboard, addr 0x13b0794, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetPositionInLeaderboard(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score);

  /// @brief Method GetScores, addr 0x13b06d8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* GetScores(::StringW leaderboardId,
                                                                                                                    ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method Load, addr 0x13b0ce4, size 0x80, virtual false, abstract: false, final false
  inline void Load();

  /// @brief Method LoadAsync, addr 0x13b0c1c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadAsync();

  /// @brief Method LoadInternal, addr 0x13b0d64, size 0xa8, virtual false, abstract: false, final false
  inline void LoadInternal();

  /// @brief Method LoadLeaderboardsData, addr 0x13af720, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* LoadLeaderboardsData(::StringW filename);

  /// @brief Method LoadLeaderboardsDataAsync, addr 0x13af624, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>* LoadLeaderboardsDataAsync(::StringW filename);

  /// @brief Method LoadLeaderboardsDataInternal, addr 0x13af780, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*
  LoadLeaderboardsDataInternal(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData* savedLeaderboardsData);

  /// @brief Method MigrateQuestLeaderboards, addr 0x13afb0c, size 0x360, virtual false, abstract: false, final false
  static inline void MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardDataList, int32_t maxNumberOfScores);

  static inline ::GlobalNamespace::LocalLeaderboardsModel* New_ctor(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO* localLeaderboardsSettingsSo);

  /// @brief Method SaveAsync, addr 0x13afe6c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  /// @brief Method SaveLeaderboardsData, addr 0x13af800, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveLeaderboardsData(::StringW filename,
                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* leaderboardsData);

  /// @brief Method SaveLeaderboardsDataAsync, addr 0x13af8dc, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveLeaderboardsDataAsync(::StringW filename, ::StringW json);

  /// @brief Method UpdateDailyLeaderboard, addr 0x13b00fc, size 0x1f0, virtual false, abstract: false, final false
  inline void UpdateDailyLeaderboard(::StringW leaderboardId);

  /// @brief Method WillScoreGoIntoLeaderboard, addr 0x13b0610, size 0xc8, virtual false, abstract: false, final false
  inline bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score);

  /// @brief Method WillScoreGoIntoLeaderboard, addr 0x13b09b4, size 0x50, virtual false, abstract: false, final false
  inline bool WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& __cordl_internal_get__dailyLeaderboardsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const&
  __cordl_internal_get__dailyLeaderboardsData() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::StringW const& __cordl_internal_get__lastScoreLeaderboardId() const;

  constexpr ::StringW& __cordl_internal_get__lastScoreLeaderboardId();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>*& __cordl_internal_get__lastScorePositions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>*> const&
  __cordl_internal_get__lastScorePositions() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& __cordl_internal_get__leaderboardsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const&
  __cordl_internal_get__leaderboardsData() const;

  constexpr int32_t const& __cordl_internal_get__maxNumberOfScoresInLeaderboard() const;

  constexpr int32_t& __cordl_internal_get__maxNumberOfScoresInLeaderboard();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*& __cordl_internal_get_newScoreWasAddedToLeaderboardEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*> const&
  __cordl_internal_get_newScoreWasAddedToLeaderboardEvent() const;

  constexpr void __cordl_internal_set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__lastScoreLeaderboardId(::StringW value);

  constexpr void __cordl_internal_set__lastScorePositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* value);

  constexpr void __cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* value);

  constexpr void __cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t value);

  constexpr void __cordl_internal_set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value);

  /// @brief Method .ctor, addr 0x13af584, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO* localLeaderboardsSettingsSo);

  /// @brief Method add_newScoreWasAddedToLeaderboardEvent, addr 0x13af424, size 0xb0, virtual false, abstract: false, final false
  inline void add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value);

  /// @brief Method remove_newScoreWasAddedToLeaderboardEvent, addr 0x13af4d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* value);

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

  /// @brief Field newScoreWasAddedToLeaderboardEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>* ___newScoreWasAddedToLeaderboardEvent;

  /// @brief Field _fileStorage, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _maxNumberOfScoresInLeaderboard, offset: 0x20, size: 0x4, def value: None
  int32_t ____maxNumberOfScoresInLeaderboard;

  /// @brief Field _lastScorePositions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t>* ____lastScorePositions;

  /// @brief Field _lastScoreLeaderboardId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____lastScoreLeaderboardId;

  /// @brief Field _leaderboardsData, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* ____leaderboardsData;

  /// @brief Field _dailyLeaderboardsData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* ____dailyLeaderboardsData;

  /// @brief Field kLocalDailyLeaderboardsFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalDailyLeaderboardsFileName{ u"LocalDailyLeaderboards.dat" };

  /// @brief Field kLocalLeaderboardsFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalLeaderboardsFileName{ u"LocalLeaderboards.dat" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsModel, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ___newScoreWasAddedToLeaderboardEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____fileStorage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsModel, ____maxNumberOfScoresInLeaderboard) == 0x20, "Offset mismatch!");

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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38, "", "LocalLeaderboardsModel/<ClearAllLeaderboardsAsync>d__38");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39, "", "LocalLeaderboardsModel/<LoadAsync>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16, "", "LocalLeaderboardsModel/<LoadLeaderboardsDataAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23, "", "LocalLeaderboardsModel/<SaveAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19, "", "LocalLeaderboardsModel/<SaveLeaderboardsData>d__19");
