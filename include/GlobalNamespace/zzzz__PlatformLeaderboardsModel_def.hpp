#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardsModel)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class PlatformLeaderboardsHandler;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__State;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__UploadScoreResult;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel___Initialize_d__21;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel____c;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel____c__DisplayClass25_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__State;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__UploadScoreResult;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel____c;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel____c__DisplayClass25_0;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel___Initialize_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult);
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope);
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardsModel__State);
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardsModel____c);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0);
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformLeaderboardsModel::State
struct CORDL_TYPE __PlatformLeaderboardsModel__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlatformLeaderboardsModel__State_Unwrapped
  enum struct ____PlatformLeaderboardsModel__State_Unwrapped : int32_t {
    __E_NotInitialized = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlatformLeaderboardsModel__State_Unwrapped() const noexcept {
    return static_cast<____PlatformLeaderboardsModel__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__State const Initialized;

  /// @brief Field Initializing value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__State const Initializing;

  /// @brief Field NotInitialized value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__State const NotInitialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__State, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetScoresResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformLeaderboardsModel::GetScoresResult
struct CORDL_TYPE __PlatformLeaderboardsModel__GetScoresResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlatformLeaderboardsModel__GetScoresResult_Unwrapped
  enum struct ____PlatformLeaderboardsModel__GetScoresResult_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlatformLeaderboardsModel__GetScoresResult_Unwrapped() const noexcept {
    return static_cast<____PlatformLeaderboardsModel__GetScoresResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__GetScoresResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__GetScoresResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult const Failed;

  /// @brief Field Ok value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult const Ok;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UploadScoreResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformLeaderboardsModel::UploadScoreResult
struct CORDL_TYPE __PlatformLeaderboardsModel__UploadScoreResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlatformLeaderboardsModel__UploadScoreResult_Unwrapped
  enum struct ____PlatformLeaderboardsModel__UploadScoreResult_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
    __E_FailedTooManyRequests = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlatformLeaderboardsModel__UploadScoreResult_Unwrapped() const noexcept {
    return static_cast<____PlatformLeaderboardsModel__UploadScoreResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__UploadScoreResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__UploadScoreResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult const Failed;

  /// @brief Field FailedTooManyRequests value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult const FailedTooManyRequests;

  /// @brief Field Ok value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult const Ok;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoresScope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformLeaderboardsModel::ScoresScope
struct CORDL_TYPE __PlatformLeaderboardsModel__ScoresScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlatformLeaderboardsModel__ScoresScope_Unwrapped
  enum struct ____PlatformLeaderboardsModel__ScoresScope_Unwrapped : int32_t {
    __E_Global = static_cast<int32_t>(0x0),
    __E_AroundPlayer = static_cast<int32_t>(0x1),
    __E_Friends = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlatformLeaderboardsModel__ScoresScope_Unwrapped() const noexcept {
    return static_cast<____PlatformLeaderboardsModel__ScoresScope_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__ScoresScope();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__ScoresScope(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AroundPlayer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const AroundPlayer;

  /// @brief Field Friends value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const Friends;

  /// @brief Field Global value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const Global;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetScoresCompletionHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsModel::GetScoresCompletionHandler*
class CORDL_TYPE __PlatformLeaderboardsModel__GetScoresCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x12b4540, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult*
  BeginInvoke(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
              ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
              int32_t referencePlayerScoreIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x12b45f8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x12b452c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
                     ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
                     int32_t referencePlayerScoreIndex);

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x12b423c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__GetScoresCompletionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__GetScoresCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel__GetScoresCompletionHandler(__PlatformLeaderboardsModel__GetScoresCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__GetScoresCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel__GetScoresCompletionHandler(__PlatformLeaderboardsModel__GetScoresCompletionHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UploadScoreCompletionHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsModel::UploadScoreCompletionHandler*
class CORDL_TYPE __PlatformLeaderboardsModel__UploadScoreCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x12b4618, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x12b469c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x12b4604, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult result);

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x12af860, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__UploadScoreCompletionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__UploadScoreCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel__UploadScoreCompletionHandler(__PlatformLeaderboardsModel__UploadScoreCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__UploadScoreCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel__UploadScoreCompletionHandler(__PlatformLeaderboardsModel__UploadScoreCompletionHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardScore
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsModel::LeaderboardScore*
class CORDL_TYPE __PlatformLeaderboardsModel__LeaderboardScore : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId))::StringW playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  /// @brief Field rank, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rank, put = __cordl_internal_set_rank)) int32_t rank;

  /// @brief Field score, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_score, put = __cordl_internal_set_score)) int32_t score;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*() noexcept;

  /// @brief Method CompareTo, addr 0x12b46a8, size 0x20, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* other);

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*
  New_ctor(int32_t score, int32_t rank, ::StringW playerName, ::StringW playerId, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* gameplayModifiers);

  constexpr ::StringW const& __cordl_internal_get_playerId() const;

  constexpr ::StringW& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr int32_t const& __cordl_internal_get_rank() const;

  constexpr int32_t& __cordl_internal_get_rank();

  constexpr int32_t const& __cordl_internal_get_score() const;

  constexpr int32_t& __cordl_internal_get_score();

  constexpr void __cordl_internal_set_playerId(::StringW value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_rank(int32_t value);

  constexpr void __cordl_internal_set_score(int32_t value);

  /// @brief Method .ctor, addr 0x12b3844, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t score, int32_t rank, ::StringW playerName, ::StringW playerId,
                    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* gameplayModifiers);

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*
  i___System__IComparable_1___GlobalNamespace____PlatformLeaderboardsModel__LeaderboardScore__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__LeaderboardScore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__LeaderboardScore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel__LeaderboardScore(__PlatformLeaderboardsModel__LeaderboardScore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__LeaderboardScore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel__LeaderboardScore(__PlatformLeaderboardsModel__LeaderboardScore const&) = delete;

  /// @brief Field score, offset: 0x10, size: 0x4, def value: None
  int32_t ___score;

  /// @brief Field rank, offset: 0x14, size: 0x4, def value: None
  int32_t ___rank;

  /// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field playerId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___playerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore, ___score) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore, ___rank) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore, ___playerId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Initialize>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformLeaderboardsModel::<Initialize>d__21
struct CORDL_TYPE __PlatformLeaderboardsModel___Initialize_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12b46c8, size 0x364, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12b4a2c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel___Initialize_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel___Initialize_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> __4__this,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsModel::<>c__DisplayClass25_0*
class CORDL_TYPE __PlatformLeaderboardsModel____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> __4__this;

  /// @brief Field beatmapKey, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler))::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler;

  /// @brief Field count, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field fromRank, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_fromRank, put = __cordl_internal_set_fromRank)) int32_t fromRank;

  /// @brief Field maxPossibleScore, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPossibleScore, put = __cordl_internal_set_maxPossibleScore)) float_t maxPossibleScore;

  /// @brief Field previousRequestEntriesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_previousRequestEntriesCount, put = __cordl_internal_set_previousRequestEntriesCount)) int32_t previousRequestEntriesCount;

  /// @brief Field scope, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_scope, put = __cordl_internal_set_scope))::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope;

  /// @brief Field searchAttemptCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_searchAttemptCount, put = __cordl_internal_set_searchAttemptCount)) int32_t searchAttemptCount;

  /// @brief Field searchRange, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_searchRange, put = __cordl_internal_set_searchRange)) int32_t searchRange;

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0* New_ctor();

  /// @brief Method <GetScores>b__0, addr 0x12b4a38, size 0x30, virtual false, abstract: false, final false
  inline void _GetScores_b__0(::GlobalNamespace::HMAsyncRequest* _);

  /// @brief Method <GetScores>b__3, addr 0x12b4f9c, size 0x1028, virtual false, abstract: false, final false
  inline bool _GetScores_b__3(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* entry);

  /// @brief Method <GetScores>g__HandleGetScoresCompleted|1, addr 0x12b4a68, size 0x534, virtual false, abstract: false, final false
  inline void _GetScores_g__HandleGetScoresCompleted_1(
      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
      ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> entries,
      int32_t referencePlayerScoreIndex);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*> const& __cordl_internal_get_completionHandler() const;

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_fromRank() const;

  constexpr int32_t& __cordl_internal_get_fromRank();

  constexpr float_t const& __cordl_internal_get_maxPossibleScore() const;

  constexpr float_t& __cordl_internal_get_maxPossibleScore();

  constexpr int32_t const& __cordl_internal_get_previousRequestEntriesCount() const;

  constexpr int32_t& __cordl_internal_get_previousRequestEntriesCount();

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const& __cordl_internal_get_scope() const;

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope& __cordl_internal_get_scope();

  constexpr int32_t const& __cordl_internal_get_searchAttemptCount() const;

  constexpr int32_t& __cordl_internal_get_searchAttemptCount();

  constexpr int32_t const& __cordl_internal_get_searchRange() const;

  constexpr int32_t& __cordl_internal_get_searchRange();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_fromRank(int32_t value);

  constexpr void __cordl_internal_set_maxPossibleScore(float_t value);

  constexpr void __cordl_internal_set_previousRequestEntriesCount(int32_t value);

  constexpr void __cordl_internal_set_scope(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope value);

  constexpr void __cordl_internal_set_searchAttemptCount(int32_t value);

  constexpr void __cordl_internal_set_searchRange(int32_t value);

  /// @brief Method .ctor, addr 0x12b4234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel____c__DisplayClass25_0(__PlatformLeaderboardsModel____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel____c__DisplayClass25_0(__PlatformLeaderboardsModel____c__DisplayClass25_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* ___completionHandler;

  /// @brief Field maxPossibleScore, offset: 0x20, size: 0x4, def value: None
  float_t ___maxPossibleScore;

  /// @brief Field count, offset: 0x24, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field previousRequestEntriesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___previousRequestEntriesCount;

  /// @brief Field searchAttemptCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___searchAttemptCount;

  /// @brief Field searchRange, offset: 0x30, size: 0x4, def value: None
  int32_t ___searchRange;

  /// @brief Field beatmapKey, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field fromRank, offset: 0x50, size: 0x4, def value: None
  int32_t ___fromRank;

  /// @brief Field scope, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope ___scope;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___completionHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___maxPossibleScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___count) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___previousRequestEntriesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___searchAttemptCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___searchRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___beatmapKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___fromRank) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0, ___scope) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsModel::<>c*
class CORDL_TYPE __PlatformLeaderboardsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PlatformLeaderboardsModel____c* __9;

  /// @brief Field <>9__25_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_2, put = setStaticF___9__25_2))::System::Func_2<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, bool>* __9__25_2;

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel____c* New_ctor();

  /// @brief Method <GetScores>b__25_2, addr 0x12b6030, size 0x20, virtual false, abstract: false, final false
  inline bool _GetScores_b__25_2(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* entry);

  /// @brief Method .ctor, addr 0x12b6028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, bool>* getStaticF___9__25_2();

  static inline void setStaticF___9(::GlobalNamespace::__PlatformLeaderboardsModel____c* value);

  static inline void setStaticF___9__25_2(::System::Func_2<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel____c(__PlatformLeaderboardsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel____c(__PlatformLeaderboardsModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformLeaderboardsModel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsModel*
class CORDL_TYPE PlatformLeaderboardsModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GetScoresCompletionHandler = ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler;

  using GetScoresResult = ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult;

  using LeaderboardScore = ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore;

  using ScoresScope = ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope;

  using State = ::GlobalNamespace::__PlatformLeaderboardsModel__State;

  using UploadScoreCompletionHandler = ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler;

  using UploadScoreResult = ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult;

  using _Initialize_d__21 = ::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21;

  using __c = ::GlobalNamespace::__PlatformLeaderboardsModel____c;

  using __c__DisplayClass25_0 = ::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0;

  /// @brief Field _beatmapLevelsModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _currentGetScoreRequest, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__currentGetScoreRequest, put = __cordl_internal_set__currentGetScoreRequest))::GlobalNamespace::HMAsyncRequest* _currentGetScoreRequest;

  /// @brief Field _gameplayModifiersModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel,
                      put = __cordl_internal_set__gameplayModifiersModel))::UnityW<::GlobalNamespace::GameplayModifiersModelSO> _gameplayModifiersModel;

  /// @brief Field _leaderboardScoreUploader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardScoreUploader,
                      put = __cordl_internal_set__leaderboardScoreUploader))::UnityW<::GlobalNamespace::LeaderboardScoreUploader> _leaderboardScoreUploader;

  /// @brief Field _platformLeaderboardsHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsHandler,
                      put = __cordl_internal_set__platformLeaderboardsHandler))::GlobalNamespace::PlatformLeaderboardsHandler* _platformLeaderboardsHandler;

  /// @brief Field _platformUserModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserModel, put = __cordl_internal_set__platformUserModel))::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _playerId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__playerId, put = __cordl_internal_set__playerId))::StringW _playerId;

  /// @brief Field _state, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::__PlatformLeaderboardsModel__State _state;

  /// @brief Field allScoresDidUploadEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_allScoresDidUploadEvent, put = __cordl_internal_set_allScoresDidUploadEvent))::System::Action* allScoresDidUploadEvent;

  __declspec(property(get = get_initialized)) bool initialized;

  /// @brief Method GetFriendsScores, addr 0x12b4388, size 0x34, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetFriendsScores(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                             ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScores, addr 0x12b3f9c, size 0x298, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::BeatmapKey beatmapKey, int32_t count, int32_t fromRank, ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScores, addr 0x12b431c, size 0x34, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScoresAroundPlayer, addr 0x12b4350, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScoresAroundPlayer(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count,
                                                                  ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method HandleAllScoresDidUpload, addr 0x12b4300, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAllScoresDidUpload();

  /// @brief Method HandlePlatformUserInfoDidChange, addr 0x12b3f18, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo* newInfo);

  /// @brief Method Initialize, addr 0x12b3b3c, size 0x94, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeForUserInfo, addr 0x12b3d7c, size 0x19c, virtual false, abstract: false, final false
  inline void InitializeForUserInfo(::GlobalNamespace::UserInfo* newInfo);

  static inline ::GlobalNamespace::PlatformLeaderboardsModel* New_ctor();

  /// @brief Method OnDestroy, addr 0x12b3bd0, size 0x1ac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UploadScore, addr 0x12b3f1c, size 0x80, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  /// @brief Method UploadScore, addr 0x12b43bc, size 0x168, virtual false, abstract: false, final false
  inline void UploadScore(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t multipliedScore, int32_t modifiedScore, int32_t maxPossibleMultipliedScore, bool fullCombo, int32_t goodCutsCount,
                          int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, float_t energy, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::HMAsyncRequest*& __cordl_internal_get__currentGetScoreRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMAsyncRequest*> const& __cordl_internal_get__currentGetScoreRequest() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get__leaderboardScoreUploader() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get__leaderboardScoreUploader();

  constexpr ::GlobalNamespace::PlatformLeaderboardsHandler*& __cordl_internal_get__platformLeaderboardsHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsHandler*> const& __cordl_internal_get__platformLeaderboardsHandler() const;

  constexpr ::GlobalNamespace::IPlatformUserModel*& __cordl_internal_get__platformUserModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __cordl_internal_get__platformUserModel() const;

  constexpr ::StringW const& __cordl_internal_get__playerId() const;

  constexpr ::StringW& __cordl_internal_get__playerId();

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State& __cordl_internal_get__state();

  constexpr ::System::Action*& __cordl_internal_get_allScoresDidUploadEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_allScoresDidUploadEvent() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__currentGetScoreRequest(::GlobalNamespace::HMAsyncRequest* value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  constexpr void __cordl_internal_set__platformLeaderboardsHandler(::GlobalNamespace::PlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr void __cordl_internal_set__playerId(::StringW value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::__PlatformLeaderboardsModel__State value);

  constexpr void __cordl_internal_set_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x12b4524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_allScoresDidUploadEvent, addr 0x12b39dc, size 0x9c, virtual false, abstract: false, final false
  inline void add_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method get_initialized, addr 0x12b3b14, size 0x28, virtual false, abstract: false, final false
  inline bool get_initialized();

  /// @brief Method remove_allScoresDidUploadEvent, addr 0x12b3a78, size 0x9c, virtual false, abstract: false, final false
  inline void remove_allScoresDidUploadEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel(PlatformLeaderboardsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel(PlatformLeaderboardsModel const&) = delete;

  /// @brief Field _gameplayModifiersModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _leaderboardScoreUploader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> ____leaderboardScoreUploader;

  /// @brief Field _platformUserModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _platformLeaderboardsHandler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsHandler* ____platformLeaderboardsHandler;

  /// @brief Field _beatmapLevelsModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field allScoresDidUploadEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___allScoresDidUploadEvent;

  /// @brief Field _currentGetScoreRequest, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::HMAsyncRequest* ____currentGetScoreRequest;

  /// @brief Field _state, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__State ____state;

  /// @brief Field _playerId, offset: 0x58, size: 0x8, def value: None
  ::StringW ____playerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____gameplayModifiersModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____leaderboardScoreUploader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____platformUserModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____platformLeaderboardsHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____beatmapLevelsModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ___allScoresDidUploadEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____currentGetScoreRequest) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____state) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____playerId) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult, "", "PlatformLeaderboardsModel/GetScoresResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, "", "PlatformLeaderboardsModel/ScoresScope");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__State, "", "PlatformLeaderboardsModel/State");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult, "", "PlatformLeaderboardsModel/UploadScoreResult");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel*, "", "PlatformLeaderboardsModel");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*, "", "PlatformLeaderboardsModel/GetScoresCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, "", "PlatformLeaderboardsModel/LeaderboardScore");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*, "", "PlatformLeaderboardsModel/UploadScoreCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel____c*, "", "PlatformLeaderboardsModel/<>c");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel____c__DisplayClass25_0*, "", "PlatformLeaderboardsModel/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__21, "", "PlatformLeaderboardsModel/<Initialize>d__21");
