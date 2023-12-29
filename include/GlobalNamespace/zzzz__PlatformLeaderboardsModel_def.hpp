#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardsModel)
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__UploadScoreResult;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__State;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel___Initialize_d__19;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class PlatformLeaderboardsHandler;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoreData;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
struct __PlatformLeaderboardsModel___Initialize_d__19;
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
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4260))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotInitialized value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__State const NotInitialized;

  /// @brief Field Initializing value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__State const Initializing;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__State const Initialized;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4261))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__GetScoresResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__GetScoresResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ok value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult const Ok;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult const Failed;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4262))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__UploadScoreResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__UploadScoreResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ok value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult const Ok;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult const Failed;

  /// @brief Field FailedTooManyRequests value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult const FailedTooManyRequests;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4263))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel__ScoresScope(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__ScoresScope();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Global value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const Global;

  /// @brief Field AroundPlayer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const AroundPlayer;

  /// @brief Field Friends value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope const Friends;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4264))
// CS Name: ::PlatformLeaderboardsModel::GetScoresCompletionHandler*
class CORDL_TYPE __PlatformLeaderboardsModel__GetScoresCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x21daba4 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x21dac68 size 0x14 virtual true final false
  inline void Invoke(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
                     ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
                     int32_t referencePlayerScoreIndex);

  /// @brief Method BeginInvoke addr 0x21dac7c size 0xb8 virtual true final false
  inline ::System::IAsyncResult*
  BeginInvoke(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
              ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
              int32_t referencePlayerScoreIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x21dad34 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__GetScoresCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel__GetScoresCompletionHandler(__PlatformLeaderboardsModel__GetScoresCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__GetScoresCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel__GetScoresCompletionHandler(__PlatformLeaderboardsModel__GetScoresCompletionHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__GetScoresCompletionHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UploadScoreCompletionHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4265))
// CS Name: ::PlatformLeaderboardsModel::UploadScoreCompletionHandler*
class CORDL_TYPE __PlatformLeaderboardsModel__UploadScoreCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x21d7c48 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x21dad40 size 0x14 virtual true final false
  inline void Invoke(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult result);

  /// @brief Method BeginInvoke addr 0x21dad54 size 0x84 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x21dadd8 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__UploadScoreCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel__UploadScoreCompletionHandler(__PlatformLeaderboardsModel__UploadScoreCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__UploadScoreCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel__UploadScoreCompletionHandler(__PlatformLeaderboardsModel__UploadScoreCompletionHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__UploadScoreCompletionHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardScore
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4266))
// CS Name: ::PlatformLeaderboardsModel::LeaderboardScore*
class CORDL_TYPE __PlatformLeaderboardsModel__LeaderboardScore : public ::System::Object {
public:
  // Declarations
  /// @brief Field score, offset 0x10, size 0x4
  __declspec(property(get = __get_score, put = __set_score)) int32_t score;

  /// @brief Field rank, offset 0x14, size 0x4
  __declspec(property(get = __get_rank, put = __set_rank)) int32_t rank;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __get_playerName, put = __set_playerName))::StringW playerName;

  /// @brief Field playerId, offset 0x20, size 0x8
  __declspec(property(get = __get_playerId, put = __set_playerId))::StringW playerId;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*() noexcept;

  constexpr int32_t& __get_score();

  constexpr int32_t const& __get_score() const;

  constexpr void __set_score(int32_t value);

  constexpr int32_t& __get_rank();

  constexpr int32_t const& __get_rank() const;

  constexpr void __set_rank(int32_t value);

  constexpr ::StringW& __get_playerName();

  constexpr ::StringW const& __get_playerName() const;

  constexpr void __set_playerName(::StringW value);

  constexpr ::StringW& __get_playerId();

  constexpr ::StringW const& __get_playerId() const;

  constexpr void __set_playerId(::StringW value);

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* New_ctor(int32_t score, int32_t rank, ::StringW playerName, ::StringW playerId,
                                                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifiers);

  /// @brief Method .ctor addr 0x21da1e8 size 0x40 virtual false final false
  inline void _ctor(int32_t score, int32_t rank, ::StringW playerName, ::StringW playerId, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifiers);

  /// @brief Method CompareTo addr 0x21dade4 size 0x28 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* other);

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__LeaderboardScore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardsModel__LeaderboardScore(__PlatformLeaderboardsModel__LeaderboardScore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardsModel__LeaderboardScore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardsModel__LeaderboardScore(__PlatformLeaderboardsModel__LeaderboardScore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel__LeaderboardScore();

public:
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
// Type: ::<Initialize>d__19
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(4717)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 405 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4267)) CS Name:
// ::PlatformLeaderboardsModel::<Initialize>d__19
struct CORDL_TYPE __PlatformLeaderboardsModel___Initialize_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21dae0c size 0x328 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21db134 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformLeaderboardsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardsModel___Initialize_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::GlobalNamespace::PlatformLeaderboardsModel* __4__this,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardsModel___Initialize_d__19();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformLeaderboardsModel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4260)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4268))
// CS Name: ::PlatformLeaderboardsModel*
class CORDL_TYPE PlatformLeaderboardsModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Initialize_d__19 = ::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19;

  using LeaderboardScore = ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore;

  using UploadScoreCompletionHandler = ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler;

  using GetScoresCompletionHandler = ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler;

  using ScoresScope = ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope;

  using UploadScoreResult = ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult;

  using GetScoresResult = ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult;

  using State = ::GlobalNamespace::__PlatformLeaderboardsModel__State;

  /// @brief Field _gameplayModifiersModel, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _leaderboardScoreUploader, offset 0x20, size 0x8
  __declspec(property(get = __get__leaderboardScoreUploader, put = __set__leaderboardScoreUploader))::GlobalNamespace::LeaderboardScoreUploader* _leaderboardScoreUploader;

  /// @brief Field _platformUserModel, offset 0x28, size 0x8
  __declspec(property(get = __get__platformUserModel, put = __set__platformUserModel))::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _platformLeaderboardsHandler, offset 0x30, size 0x8
  __declspec(property(get = __get__platformLeaderboardsHandler, put = __set__platformLeaderboardsHandler))::GlobalNamespace::PlatformLeaderboardsHandler* _platformLeaderboardsHandler;

  /// @brief Field allScoresDidUploadEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_allScoresDidUploadEvent, put = __set_allScoresDidUploadEvent))::System::Action* allScoresDidUploadEvent;

  /// @brief Field _state, offset 0x40, size 0x4
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::__PlatformLeaderboardsModel__State _state;

  /// @brief Field _playerId, offset 0x48, size 0x8
  __declspec(property(get = __get__playerId, put = __set__playerId))::StringW _playerId;

  __declspec(property(get = get_initialized)) bool initialized;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::GlobalNamespace::LeaderboardScoreUploader*& __get__leaderboardScoreUploader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> const& __get__leaderboardScoreUploader() const;

  constexpr void __set__leaderboardScoreUploader(::GlobalNamespace::LeaderboardScoreUploader* value);

  constexpr ::GlobalNamespace::IPlatformUserModel*& __get__platformUserModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __get__platformUserModel() const;

  constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr ::GlobalNamespace::PlatformLeaderboardsHandler*& __get__platformLeaderboardsHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsHandler*> const& __get__platformLeaderboardsHandler() const;

  constexpr void __set__platformLeaderboardsHandler(::GlobalNamespace::PlatformLeaderboardsHandler* value);

  constexpr ::System::Action*& __get_allScoresDidUploadEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_allScoresDidUploadEvent() const;

  constexpr void __set_allScoresDidUploadEvent(::System::Action* value);

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State& __get__state();

  constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::__PlatformLeaderboardsModel__State value);

  constexpr ::StringW& __get__playerId();

  constexpr ::StringW const& __get__playerId() const;

  constexpr void __set__playerId(::StringW value);

  /// @brief Method add_allScoresDidUploadEvent addr 0x21da380 size 0x9c virtual false final false
  inline void add_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method remove_allScoresDidUploadEvent addr 0x21da41c size 0x9c virtual false final false
  inline void remove_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method get_initialized addr 0x21da4b8 size 0x28 virtual false final false
  inline bool get_initialized();

  /// @brief Method OnDestroy addr 0x21da574 size 0x1ac virtual false final false
  inline void OnDestroy();

  /// @brief Method Initialize addr 0x21da4e0 size 0x94 virtual false final false
  inline void Initialize();

  /// @brief Method InitializeForUserInfo addr 0x21da720 size 0x19c virtual false final false
  inline void InitializeForUserInfo(::GlobalNamespace::UserInfo* newInfo);

  /// @brief Method HandlePlatformUserInfoDidChange addr 0x21da8bc size 0x4 virtual false final false
  inline void HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo* newInfo);

  /// @brief Method UploadScore addr 0x21da8c0 size 0x80 virtual false final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  /// @brief Method GetScores addr 0x21da940 size 0xbc virtual false final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method HandleAllScoresDidUpload addr 0x21da9fc size 0x1c virtual false final false
  inline void HandleAllScoresDidUpload();

  /// @brief Method GetScores addr 0x21daa18 size 0xc virtual false final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetScoresAroundPlayer addr 0x21daa24 size 0x10 virtual false final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScoresAroundPlayer(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count,
                                                                  ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method GetFriendsScores addr 0x21daa34 size 0xc virtual false final false
  inline ::GlobalNamespace::HMAsyncRequest* GetFriendsScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count, int32_t fromRank,
                                                             ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method UploadScore addr 0x21daa40 size 0x15c virtual false final false
  inline void UploadScore(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t multipliedScore, int32_t modifiedScore, int32_t maxPossibleMultipliedScore, bool fullCombo, int32_t goodCutsCount,
                          int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, float_t energy, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  static inline ::GlobalNamespace::PlatformLeaderboardsModel* New_ctor();

  /// @brief Method .ctor addr 0x21dab9c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsModel(PlatformLeaderboardsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsModel(PlatformLeaderboardsModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsModel();

public:
  /// @brief Field _gameplayModifiersModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _leaderboardScoreUploader, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardScoreUploader* ____leaderboardScoreUploader;

  /// @brief Field _platformUserModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _platformLeaderboardsHandler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsHandler* ____platformLeaderboardsHandler;

  /// @brief Field allScoresDidUploadEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___allScoresDidUploadEvent;

  /// @brief Field _state, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__PlatformLeaderboardsModel__State ____state;

  /// @brief Field _playerId, offset: 0x48, size: 0x8, def value: None
  ::StringW ____playerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsModel, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____gameplayModifiersModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____leaderboardScoreUploader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____platformUserModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____platformLeaderboardsHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ___allScoresDidUploadEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____state) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardsModel, ____playerId) == 0x48, "Offset mismatch!");

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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19, "", "PlatformLeaderboardsModel/<Initialize>d__19");
