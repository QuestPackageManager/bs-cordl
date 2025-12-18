#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
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
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoreData;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class PlatformLeaderboardsHandler;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_GetScoresCompletionHandler;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_GetScoresResult;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_LeaderboardScore;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_ScoresScope;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_State;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_UploadScoreResult;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel___c;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel___c__DisplayClass26_0;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
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
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_GetScoresResult;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_ScoresScope;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_State;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_UploadScoreResult;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_LeaderboardScore;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel___c;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel___c__DisplayClass26_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult);
MARK_VAL_T(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope);
MARK_VAL_T(::GlobalNamespace::PlatformLeaderboardsModel_State);
MARK_VAL_T(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel___c);
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLeaderboardsModel/State
struct CORDL_TYPE PlatformLeaderboardsModel_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformLeaderboardsModel_State_Unwrapped
  enum struct __PlatformLeaderboardsModel_State_Unwrapped : int32_t {
    __E_NotInitialized = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformLeaderboardsModel_State_Unwrapped() const noexcept {
    return static_cast<__PlatformLeaderboardsModel_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformLeaderboardsModel_State(int32_t value__) noexcept;

  /// @brief Field Initialized value: I32(2)
  static ::GlobalNamespace::PlatformLeaderboardsModel_State const Initialized;

  /// @brief Field Initializing value: I32(1)
  static ::GlobalNamespace::PlatformLeaderboardsModel_State const Initializing;

  /// @brief Field NotInitialized value: I32(0)
  static ::GlobalNamespace::PlatformLeaderboardsModel_State const NotInitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15275 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLeaderboardsModel/GetScoresResult
struct CORDL_TYPE PlatformLeaderboardsModel_GetScoresResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformLeaderboardsModel_GetScoresResult_Unwrapped
  enum struct __PlatformLeaderboardsModel_GetScoresResult_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
    __E_FailedTooManyRequests = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformLeaderboardsModel_GetScoresResult_Unwrapped() const noexcept {
    return static_cast<__PlatformLeaderboardsModel_GetScoresResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_GetScoresResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformLeaderboardsModel_GetScoresResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult const Failed;

  /// @brief Field FailedTooManyRequests value: I32(2)
  static ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult const FailedTooManyRequests;

  /// @brief Field Ok value: I32(0)
  static ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult const Ok;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15276 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLeaderboardsModel/UploadScoreResult
struct CORDL_TYPE PlatformLeaderboardsModel_UploadScoreResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformLeaderboardsModel_UploadScoreResult_Unwrapped
  enum struct __PlatformLeaderboardsModel_UploadScoreResult_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
    __E_FailedTooManyRequests = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformLeaderboardsModel_UploadScoreResult_Unwrapped() const noexcept {
    return static_cast<__PlatformLeaderboardsModel_UploadScoreResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_UploadScoreResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformLeaderboardsModel_UploadScoreResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult const Failed;

  /// @brief Field FailedTooManyRequests value: I32(2)
  static ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult const FailedTooManyRequests;

  /// @brief Field Ok value: I32(0)
  static ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult const Ok;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15277 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLeaderboardsModel/ScoresScope
struct CORDL_TYPE PlatformLeaderboardsModel_ScoresScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformLeaderboardsModel_ScoresScope_Unwrapped
  enum struct __PlatformLeaderboardsModel_ScoresScope_Unwrapped : int32_t {
    __E_Global = static_cast<int32_t>(0x0),
    __E_AroundPlayer = static_cast<int32_t>(0x1),
    __E_Friends = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformLeaderboardsModel_ScoresScope_Unwrapped() const noexcept {
    return static_cast<__PlatformLeaderboardsModel_ScoresScope_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_ScoresScope();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformLeaderboardsModel_ScoresScope(int32_t value__) noexcept;

  /// @brief Field AroundPlayer value: I32(1)
  static ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope const AroundPlayer;

  /// @brief Field Friends value: I32(2)
  static ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope const Friends;

  /// @brief Field Global value: I32(0)
  static ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope const Global;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardsModel/GetScoresCompletionHandler
class CORDL_TYPE PlatformLeaderboardsModel_GetScoresCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x365f454, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result,
                                             ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, ::Array<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*> scores,
                                             int32_t referencePlayerScoreIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x365f500, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x365f440, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result,
                     ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, ::Array<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*> scores,
                     int32_t referencePlayerScoreIndex);

  static inline ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x365f3d4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_GetScoresCompletionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel_GetScoresCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel_GetScoresCompletionHandler(PlatformLeaderboardsModel_GetScoresCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel_GetScoresCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel_GetScoresCompletionHandler(PlatformLeaderboardsModel_GetScoresCompletionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardsModel/UploadScoreCompletionHandler
class CORDL_TYPE PlatformLeaderboardsModel_UploadScoreCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x365f58c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x365f614, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x365f578, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult result);

  static inline ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x365f50c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_UploadScoreCompletionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel_UploadScoreCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel_UploadScoreCompletionHandler(PlatformLeaderboardsModel_UploadScoreCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel_UploadScoreCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel_UploadScoreCompletionHandler(PlatformLeaderboardsModel_UploadScoreCompletionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardsModel/LeaderboardScore
class CORDL_TYPE PlatformLeaderboardsModel_LeaderboardScore : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId)) uint64_t playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  /// @brief Field rank, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rank, put = __cordl_internal_set_rank)) int32_t rank;

  /// @brief Field score, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_score, put = __cordl_internal_set_score)) int32_t score;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*() noexcept;

  /// @brief Method CompareTo, addr 0x365f62c, size 0x24, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* other);

  static inline ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* New_ctor(int32_t score, int32_t rank, ::StringW playerName, uint64_t playerId);

  constexpr uint64_t const& __cordl_internal_get_playerId() const;

  constexpr uint64_t& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr int32_t const& __cordl_internal_get_rank() const;

  constexpr int32_t& __cordl_internal_get_rank();

  constexpr int32_t const& __cordl_internal_get_score() const;

  constexpr int32_t& __cordl_internal_get_score();

  constexpr void __cordl_internal_set_playerId(uint64_t value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_rank(int32_t value);

  constexpr void __cordl_internal_set_score(int32_t value);

  /// @brief Method .ctor, addr 0x365f620, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t score, int32_t rank, ::StringW playerName, uint64_t playerId);

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*
  i___System__IComparable_1___GlobalNamespace__PlatformLeaderboardsModel_LeaderboardScore__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel_LeaderboardScore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel_LeaderboardScore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel_LeaderboardScore(PlatformLeaderboardsModel_LeaderboardScore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel_LeaderboardScore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel_LeaderboardScore(PlatformLeaderboardsModel_LeaderboardScore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15281 };

  /// @brief Field score, offset: 0x10, size: 0x4, def value: None
  int32_t ___score;

  /// @brief Field rank, offset: 0x14, size: 0x4, def value: None
  int32_t ___rank;

  /// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field playerId, offset: 0x20, size: 0x8, def value: None
  uint64_t ___playerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore, ___score) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore, ___rank) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore, ___playerId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardsModel/<>c
class CORDL_TYPE PlatformLeaderboardsModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PlatformLeaderboardsModel___c* __9;

  /// @brief Field <>9__26_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_2, put = setStaticF___9__26_2)) ::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>* __9__26_2;

  static inline ::GlobalNamespace::PlatformLeaderboardsModel___c* New_ctor();

  /// @brief Method <GetScores>b__26_2, addr 0x365f6a8, size 0x1c, virtual false, abstract: false, final false
  inline bool _GetScores_b__26_2(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* entry);

  /// @brief Method .ctor, addr 0x365f6a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlatformLeaderboardsModel___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>* getStaticF___9__26_2();

  static inline void setStaticF___9(::GlobalNamespace::PlatformLeaderboardsModel___c* value);

  static inline void setStaticF___9__26_2(::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel___c(PlatformLeaderboardsModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel___c(PlatformLeaderboardsModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, PlatformLeaderboardsModel::ScoresScope, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardsModel/<>c__DisplayClass26_0
class CORDL_TYPE PlatformLeaderboardsModel___c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> __4__this;

  /// @brief Field beatmapKey, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field completionHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler;

  /// @brief Field count, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field fromRank, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_fromRank, put = __cordl_internal_set_fromRank)) int32_t fromRank;

  /// @brief Field maxPossibleScore, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPossibleScore, put = __cordl_internal_set_maxPossibleScore)) float_t maxPossibleScore;

  /// @brief Field previousRequestEntriesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_previousRequestEntriesCount, put = __cordl_internal_set_previousRequestEntriesCount)) int32_t previousRequestEntriesCount;

  /// @brief Field scope, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_scope, put = __cordl_internal_set_scope)) ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope;

  /// @brief Field searchAttemptCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_searchAttemptCount, put = __cordl_internal_set_searchAttemptCount)) int32_t searchAttemptCount;

  /// @brief Field searchRange, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_searchRange, put = __cordl_internal_set_searchRange)) int32_t searchRange;

  static inline ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0* New_ctor();

  /// @brief Method <GetScores>b__0, addr 0x365f6c8, size 0x28, virtual false, abstract: false, final false
  inline void _GetScores_b__0(::GlobalNamespace::HMAsyncRequest* _);

  /// @brief Method <GetScores>b__3, addr 0x365fc74, size 0x2c, virtual false, abstract: false, final false
  inline bool _GetScores_b__3(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* entry);

  /// @brief Method <GetScores>g__HandleGetScoresCompleted|1, addr 0x365f6f0, size 0x584, virtual false, abstract: false, final false
  inline void
  _GetScores_g__HandleGetScoresCompleted_1(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result,
                                           ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, ::Array<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*> entries,
                                           int32_t referencePlayerScoreIndex);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* const& __cordl_internal_get_completionHandler() const;

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_fromRank() const;

  constexpr int32_t& __cordl_internal_get_fromRank();

  constexpr float_t const& __cordl_internal_get_maxPossibleScore() const;

  constexpr float_t& __cordl_internal_get_maxPossibleScore();

  constexpr int32_t const& __cordl_internal_get_previousRequestEntriesCount() const;

  constexpr int32_t& __cordl_internal_get_previousRequestEntriesCount();

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope const& __cordl_internal_get_scope() const;

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope& __cordl_internal_get_scope();

  constexpr int32_t const& __cordl_internal_get_searchAttemptCount() const;

  constexpr int32_t& __cordl_internal_get_searchAttemptCount();

  constexpr int32_t const& __cordl_internal_get_searchRange() const;

  constexpr int32_t& __cordl_internal_get_searchRange();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_fromRank(int32_t value);

  constexpr void __cordl_internal_set_maxPossibleScore(float_t value);

  constexpr void __cordl_internal_set_previousRequestEntriesCount(int32_t value);

  constexpr void __cordl_internal_set_scope(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope value);

  constexpr void __cordl_internal_set_searchAttemptCount(int32_t value);

  constexpr void __cordl_internal_set_searchRange(int32_t value);

  /// @brief Method .ctor, addr 0x365f6c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel___c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel___c__DisplayClass26_0(PlatformLeaderboardsModel___c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel___c__DisplayClass26_0(PlatformLeaderboardsModel___c__DisplayClass26_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15283 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _____4__this;

  /// @brief Field completionHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* ___completionHandler;

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

  /// @brief Field beatmapKey, offset: 0x38, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field fromRank, offset: 0x58, size: 0x4, def value: None
  int32_t ___fromRank;

  /// @brief Field scope, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope ___scope;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___completionHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___maxPossibleScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___count) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___previousRequestEntriesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___searchAttemptCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___searchRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___beatmapKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___fromRank) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, ___scope) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlatformLeaderboardsModel::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardsModel
class CORDL_TYPE PlatformLeaderboardsModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GetScoresCompletionHandler = ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler;

  using GetScoresResult = ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult;

  using LeaderboardScore = ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore;

  using ScoresScope = ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope;

  using State = ::GlobalNamespace::PlatformLeaderboardsModel_State;

  using UploadScoreCompletionHandler = ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler;

  using UploadScoreResult = ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult;

  using __c = ::GlobalNamespace::PlatformLeaderboardsModel___c;

  using __c__DisplayClass26_0 = ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _currentGetScoreRequest, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__currentGetScoreRequest, put = __cordl_internal_set__currentGetScoreRequest)) ::GlobalNamespace::HMAsyncRequest* _currentGetScoreRequest;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _leaderboardScoreUploader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardScoreUploader, put = __cordl_internal_set__leaderboardScoreUploader)) ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>
      _leaderboardScoreUploader;

  /// @brief Field _platform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _platformLeaderboardsHandler, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsHandler,
                      put = __cordl_internal_set__platformLeaderboardsHandler)) ::GlobalNamespace::PlatformLeaderboardsHandler* _platformLeaderboardsHandler;

  /// @brief Field _playerId, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerId, put = __cordl_internal_set__playerId)) uint64_t _playerId;

  /// @brief Field _state, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::PlatformLeaderboardsModel_State _state;

  /// @brief Field allScoresDidUploadEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_allScoresDidUploadEvent, put = __cordl_internal_set_allScoresDidUploadEvent)) ::System::Action* allScoresDidUploadEvent;

  __declspec(property(get = get_initialized)) bool initialized;

  __declspec(property(get = get_playerId)) uint64_t playerId;

  /// @brief Method GetFriendsScores, addr 0x365f1b0, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetFriendsScores(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                             ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScores, addr 0x365f154, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScores, addr 0x365ee64, size 0x2d4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::BeatmapKey beatmapKey, int32_t count, int32_t fromRank, ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope,
                                                      ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScoresAroundPlayer, addr 0x365f180, size 0x30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScoresAroundPlayer(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count,
                                                                  ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler);

  /// @brief Method HandleAllScoresDidUpload, addr 0x365f138, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAllScoresDidUpload();

  /// @brief Method Initialize, addr 0x365e990, size 0x148, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeForUserInfo, addr 0x365ebf0, size 0x1f4, virtual false, abstract: false, final false
  inline void InitializeForUserInfo(uint64_t userId);

  static inline ::GlobalNamespace::PlatformLeaderboardsModel* New_ctor();

  /// @brief Method OnDestroy, addr 0x365ead8, size 0x118, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UploadScore, addr 0x365ede4, size 0x80, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler);

  /// @brief Method UploadScore, addr 0x365f1dc, size 0x160, virtual false, abstract: false, final false
  inline void UploadScore(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t multipliedScore, int32_t modifiedScore, int32_t maxPossibleMultipliedScore, bool fullCombo, int32_t goodCutsCount,
                          int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, float_t energy, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::HMAsyncRequest* const& __cordl_internal_get__currentGetScoreRequest() const;

  constexpr ::GlobalNamespace::HMAsyncRequest*& __cordl_internal_get__currentGetScoreRequest();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get__leaderboardScoreUploader() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get__leaderboardScoreUploader();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::GlobalNamespace::PlatformLeaderboardsHandler* const& __cordl_internal_get__platformLeaderboardsHandler() const;

  constexpr ::GlobalNamespace::PlatformLeaderboardsHandler*& __cordl_internal_get__platformLeaderboardsHandler();

  constexpr uint64_t const& __cordl_internal_get__playerId() const;

  constexpr uint64_t& __cordl_internal_get__playerId();

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State& __cordl_internal_get__state();

  constexpr ::System::Action* const& __cordl_internal_get_allScoresDidUploadEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_allScoresDidUploadEvent();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__currentGetScoreRequest(::GlobalNamespace::HMAsyncRequest* value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__platformLeaderboardsHandler(::GlobalNamespace::PlatformLeaderboardsHandler* value);

  constexpr void __cordl_internal_set__playerId(uint64_t value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::PlatformLeaderboardsModel_State value);

  constexpr void __cordl_internal_set_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x365f33c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_allScoresDidUploadEvent, addr 0x365e808, size 0xac, virtual false, abstract: false, final false
  inline void add_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method get_initialized, addr 0x365e968, size 0x28, virtual false, abstract: false, final false
  inline bool get_initialized();

  /// @brief Method get_playerId, addr 0x365e960, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_playerId();

  /// @brief Method remove_allScoresDidUploadEvent, addr 0x365e8b4, size 0xac, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15284 };

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _leaderboardScoreUploader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> ____leaderboardScoreUploader;

  /// @brief Field _platform, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _platformLeaderboardsHandler, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsHandler* ____platformLeaderboardsHandler;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field allScoresDidUploadEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___allScoresDidUploadEvent;

  /// @brief Field _currentGetScoreRequest, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::HMAsyncRequest* ____currentGetScoreRequest;

  /// @brief Field _state, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel_State ____state;

  /// @brief Field _playerId, offset: 0x60, size: 0x8, def value: None
  uint64_t ____playerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____leaderboardScoreUploader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____platform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____platformLeaderboardsHandler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ___allScoresDidUploadEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____currentGetScoreRequest) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____state) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____playerId) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult, "", "PlatformLeaderboardsModel/GetScoresResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, "", "PlatformLeaderboardsModel/ScoresScope");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_State, "", "PlatformLeaderboardsModel/State");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult, "", "PlatformLeaderboardsModel/UploadScoreResult");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel*, "", "PlatformLeaderboardsModel");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*, "", "PlatformLeaderboardsModel/GetScoresCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, "", "PlatformLeaderboardsModel/LeaderboardScore");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*, "", "PlatformLeaderboardsModel/UploadScoreCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel___c*, "", "PlatformLeaderboardsModel/<>c");
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*, "", "PlatformLeaderboardsModel/<>c__DisplayClass26_0");
