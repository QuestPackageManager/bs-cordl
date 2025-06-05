#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardScoreUploader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardScoreUploader)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoreData;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoresToUploadData;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_UploadScoreCallback;
}
namespace GlobalNamespace {
struct LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17;
}
namespace GlobalNamespace {
struct LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader__UploadScoresCoroutine_d__16;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader___c__DisplayClass16_0;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_UploadScoreResult;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoreData;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoresToUploadData;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_UploadScoreCallback;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader__UploadScoresCoroutine_d__16;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader___c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17;
}
namespace GlobalNamespace {
struct LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader);
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader_ScoreData);
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData);
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback);
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16);
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17);
MARK_VAL_T(::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18);
// Dependencies BeatmapKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardScoreUploader/ScoreData
class CORDL_TYPE LeaderboardScoreUploader_ScoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <badCutsCount>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__badCutsCount_k__BackingField, put = __cordl_internal_set__badCutsCount_k__BackingField)) int32_t _badCutsCount_k__BackingField;

  /// @brief Field <beatmapKey>k__BackingField, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey_k__BackingField, put = __cordl_internal_set__beatmapKey_k__BackingField)) ::GlobalNamespace::BeatmapKey _beatmapKey_k__BackingField;

  /// @brief Field <fullCombo>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__fullCombo_k__BackingField, put = __cordl_internal_set__fullCombo_k__BackingField)) bool _fullCombo_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers_k__BackingField,
                      put = __cordl_internal_set__gameplayModifiers_k__BackingField)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers_k__BackingField;

  /// @brief Field <goodCutsCount>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__goodCutsCount_k__BackingField, put = __cordl_internal_set__goodCutsCount_k__BackingField)) int32_t _goodCutsCount_k__BackingField;

  /// @brief Field <maxCombo>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCombo_k__BackingField, put = __cordl_internal_set__maxCombo_k__BackingField)) int32_t _maxCombo_k__BackingField;

  /// @brief Field <missedCount>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__missedCount_k__BackingField, put = __cordl_internal_set__missedCount_k__BackingField)) int32_t _missedCount_k__BackingField;

  /// @brief Field <modifiedScore>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__modifiedScore_k__BackingField, put = __cordl_internal_set__modifiedScore_k__BackingField)) int32_t _modifiedScore_k__BackingField;

  /// @brief Field <multipliedScore>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__multipliedScore_k__BackingField, put = __cordl_internal_set__multipliedScore_k__BackingField)) int32_t _multipliedScore_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerId_k__BackingField, put = __cordl_internal_set__playerId_k__BackingField)) ::StringW _playerId_k__BackingField;

  __declspec(property(get = get_badCutsCount, put = set_badCutsCount)) int32_t badCutsCount;

  __declspec(property(get = get_beatmapKey, put = set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field currentUploadAttemptCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_currentUploadAttemptCount, put = __cordl_internal_set_currentUploadAttemptCount)) int32_t currentUploadAttemptCount;

  __declspec(property(get = get_fullCombo, put = set_fullCombo)) bool fullCombo;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_goodCutsCount, put = set_goodCutsCount)) int32_t goodCutsCount;

  __declspec(property(get = get_maxCombo, put = set_maxCombo)) int32_t maxCombo;

  __declspec(property(get = get_missedCount, put = set_missedCount)) int32_t missedCount;

  __declspec(property(get = get_modifiedScore, put = set_modifiedScore)) int32_t modifiedScore;

  __declspec(property(get = get_multipliedScore, put = set_multipliedScore)) int32_t multipliedScore;

  __declspec(property(get = get_playerId, put = set_playerId)) ::StringW playerId;

  /// @brief Field uploadAttemptCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_uploadAttemptCount, put = __cordl_internal_set_uploadAttemptCount)) int32_t uploadAttemptCount;

  static inline ::GlobalNamespace::LeaderboardScoreUploader_ScoreData* New_ctor(::StringW playerId, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t multipliedScore, int32_t modifiedScore,
                                                                                bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo,
                                                                                ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr int32_t const& __cordl_internal_get__badCutsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__badCutsCount_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__fullCombo_k__BackingField() const;

  constexpr bool& __cordl_internal_get__fullCombo_k__BackingField();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__goodCutsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__goodCutsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxCombo_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxCombo_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__missedCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__missedCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__modifiedScore_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__modifiedScore_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__multipliedScore_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__multipliedScore_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_currentUploadAttemptCount() const;

  constexpr int32_t& __cordl_internal_get_currentUploadAttemptCount();

  constexpr int32_t const& __cordl_internal_get_uploadAttemptCount() const;

  constexpr int32_t& __cordl_internal_get_uploadAttemptCount();

  constexpr void __cordl_internal_set__badCutsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__fullCombo_k__BackingField(bool value);

  constexpr void __cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__goodCutsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__maxCombo_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__missedCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__modifiedScore_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__multipliedScore_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__playerId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_currentUploadAttemptCount(int32_t value);

  constexpr void __cordl_internal_set_uploadAttemptCount(int32_t value);

  /// @brief Method .ctor, addr 0x2701e7c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerId, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t multipliedScore, int32_t modifiedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount,
                    int32_t missedCount, int32_t maxCombo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method get_badCutsCount, addr 0x2701e4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_badCutsCount();

  /// @brief Method get_beatmapKey, addr 0x2701dd0, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_fullCombo, addr 0x2701e28, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullCombo();

  /// @brief Method get_gameplayModifiers, addr 0x2701df8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_goodCutsCount, addr 0x2701e3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_goodCutsCount();

  /// @brief Method get_maxCombo, addr 0x2701e6c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxCombo();

  /// @brief Method get_missedCount, addr 0x2701e5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_missedCount();

  /// @brief Method get_modifiedScore, addr 0x2701e18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_modifiedScore();

  /// @brief Method get_multipliedScore, addr 0x2701e08, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multipliedScore();

  /// @brief Method get_playerId, addr 0x2701dc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerId();

  /// @brief Method set_badCutsCount, addr 0x2701e54, size 0x8, virtual false, abstract: false, final false
  inline void set_badCutsCount(int32_t value);

  /// @brief Method set_beatmapKey, addr 0x2701de4, size 0x14, virtual false, abstract: false, final false
  inline void set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method set_fullCombo, addr 0x2701e30, size 0xc, virtual false, abstract: false, final false
  inline void set_fullCombo(bool value);

  /// @brief Method set_gameplayModifiers, addr 0x2701e00, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method set_goodCutsCount, addr 0x2701e44, size 0x8, virtual false, abstract: false, final false
  inline void set_goodCutsCount(int32_t value);

  /// @brief Method set_maxCombo, addr 0x2701e74, size 0x8, virtual false, abstract: false, final false
  inline void set_maxCombo(int32_t value);

  /// @brief Method set_missedCount, addr 0x2701e64, size 0x8, virtual false, abstract: false, final false
  inline void set_missedCount(int32_t value);

  /// @brief Method set_modifiedScore, addr 0x2701e20, size 0x8, virtual false, abstract: false, final false
  inline void set_modifiedScore(int32_t value);

  /// @brief Method set_multipliedScore, addr 0x2701e10, size 0x8, virtual false, abstract: false, final false
  inline void set_multipliedScore(int32_t value);

  /// @brief Method set_playerId, addr 0x2701dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader_ScoreData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader_ScoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader_ScoreData(LeaderboardScoreUploader_ScoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader_ScoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader_ScoreData(LeaderboardScoreUploader_ScoreData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13324 };

  /// @brief Field <playerId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____playerId_k__BackingField;

  /// @brief Field <beatmapKey>k__BackingField, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers_k__BackingField;

  /// @brief Field <multipliedScore>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____multipliedScore_k__BackingField;

  /// @brief Field <modifiedScore>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____modifiedScore_k__BackingField;

  /// @brief Field <fullCombo>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____fullCombo_k__BackingField;

  /// @brief Field <goodCutsCount>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____goodCutsCount_k__BackingField;

  /// @brief Field <badCutsCount>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____badCutsCount_k__BackingField;

  /// @brief Field <missedCount>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____missedCount_k__BackingField;

  /// @brief Field <maxCombo>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____maxCombo_k__BackingField;

  /// @brief Field uploadAttemptCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___uploadAttemptCount;

  /// @brief Field currentUploadAttemptCount, offset: 0x58, size: 0x4, def value: None
  int32_t ___currentUploadAttemptCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____playerId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____beatmapKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____gameplayModifiers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____multipliedScore_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____modifiedScore_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____fullCombo_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____goodCutsCount_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____badCutsCount_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____missedCount_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ____maxCombo_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ___uploadAttemptCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoreData, ___currentUploadAttemptCount) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader_ScoreData, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardScoreUploader/ScoresToUploadData
class CORDL_TYPE LeaderboardScoreUploader_ScoresToUploadData : public ::System::Object {
public:
  // Declarations
  /// @brief Field scores, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scores, put = __cordl_internal_set_scores)) ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* scores;

  static inline ::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* const& __cordl_internal_get_scores() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>*& __cordl_internal_get_scores();

  constexpr void __cordl_internal_set_scores(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* value);

  /// @brief Method .ctor, addr 0x2701f10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader_ScoresToUploadData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader_ScoresToUploadData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader_ScoresToUploadData(LeaderboardScoreUploader_ScoresToUploadData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader_ScoresToUploadData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader_ScoresToUploadData(LeaderboardScoreUploader_ScoresToUploadData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13325 };

  /// @brief Field scores, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* ___scores;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData, ___scores) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardScoreUploader/UploadScoreCallback
class CORDL_TYPE LeaderboardScoreUploader_UploadScoreCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2702030, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                             ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2702058, size 0xc, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x270201c, size 0x14, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* Invoke(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                   ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2701f18, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader_UploadScoreCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader_UploadScoreCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader_UploadScoreCallback(LeaderboardScoreUploader_UploadScoreCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader_UploadScoreCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader_UploadScoreCallback(LeaderboardScoreUploader_UploadScoreCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13326 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardScoreUploader/<>c__DisplayClass16_0
class CORDL_TYPE LeaderboardScoreUploader___c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this;

  /// @brief Field scoreData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scoreData, put = __cordl_internal_set_scoreData)) ::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData;

  static inline ::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0* New_ctor();

  /// @brief Method <UploadScoresCoroutine>b__0, addr 0x270206c, size 0x230, virtual false, abstract: false, final false
  inline void _UploadScoresCoroutine_b__0(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult result);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::LeaderboardScoreUploader_ScoreData* const& __cordl_internal_get_scoreData() const;

  constexpr ::GlobalNamespace::LeaderboardScoreUploader_ScoreData*& __cordl_internal_get_scoreData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  constexpr void __cordl_internal_set_scoreData(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* value);

  /// @brief Method .ctor, addr 0x2702064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader___c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader___c__DisplayClass16_0(LeaderboardScoreUploader___c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader___c__DisplayClass16_0(LeaderboardScoreUploader___c__DisplayClass16_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13327 };

  /// @brief Field scoreData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardScoreUploader_ScoreData* ___scoreData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0, ___scoreData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LeaderboardScoreUploader/<LoadScoresToUploadFromFile>d__17
struct CORDL_TYPE LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x270229c, size 0x5b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x270284c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LeaderboardScoreUploader>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13328 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LeaderboardScoreUploader/<SaveScoresToUploadToFile>d__18
struct CORDL_TYPE LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27028b4, size 0x498, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2702d4c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LeaderboardScoreUploader>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                     ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13329 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardScoreUploader/<UploadScoresCoroutine>d__16
class CORDL_TYPE LeaderboardScoreUploader__UploadScoresCoroutine_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2702d5c, size 0x1e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2702f3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2702f44, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2702f7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2702d58, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  /// @brief Method .ctor, addr 0x2701ae0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader__UploadScoresCoroutine_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader__UploadScoresCoroutine_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader__UploadScoresCoroutine_d__16(LeaderboardScoreUploader__UploadScoresCoroutine_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader__UploadScoresCoroutine_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader__UploadScoresCoroutine_d__16(LeaderboardScoreUploader__UploadScoresCoroutine_d__16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13330 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardScoreUploader
class CORDL_TYPE LeaderboardScoreUploader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ScoreData = ::GlobalNamespace::LeaderboardScoreUploader_ScoreData;

  using ScoresToUploadData = ::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData;

  using UploadScoreCallback = ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback;

  using _LoadScoresToUploadFromFile_d__17 = ::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17;

  using _SaveScoresToUploadToFile_d__18 = ::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18;

  using _UploadScoresCoroutine_d__16 = ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16;

  using __c__DisplayClass16_0 = ::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0;

  /// @brief Field _fileStorage, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _playerId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerId, put = __cordl_internal_set__playerId)) ::StringW _playerId;

  /// @brief Field _scoresToUpload, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoresToUpload,
                      put = __cordl_internal_set__scoresToUpload)) ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* _scoresToUpload;

  /// @brief Field _scoresToUploadForCurrentPlayer, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__scoresToUploadForCurrentPlayer,
      put = __cordl_internal_set__scoresToUploadForCurrentPlayer)) ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* _scoresToUploadForCurrentPlayer;

  /// @brief Field _uploadScoreCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__uploadScoreCallback,
                      put = __cordl_internal_set__uploadScoreCallback)) ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* _uploadScoreCallback;

  /// @brief Field _uploading, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__uploading, put = __cordl_internal_set__uploading)) bool _uploading;

  /// @brief Field allScoresDidUploadEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_allScoresDidUploadEvent, put = __cordl_internal_set_allScoresDidUploadEvent)) ::System::Action* allScoresDidUploadEvent;

  /// @brief Method AddScore, addr 0x2701c58, size 0xc4, virtual false, abstract: false, final false
  inline void AddScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData);

  /// @brief Method Init, addr 0x2701980, size 0x58, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* uploadScoreCallback, ::StringW playerId);

  /// @brief Method LoadScoresToUploadFromFile, addr 0x2701b08, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadScoresToUploadFromFile();

  static inline ::GlobalNamespace::LeaderboardScoreUploader* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x2701adc, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method SaveScoresToUploadToFile, addr 0x2701bc8, size 0x90, virtual false, abstract: false, final false
  inline void SaveScoresToUploadToFile();

  /// @brief Method Uninitialize, addr 0x2701a38, size 0xa4, virtual false, abstract: false, final false
  inline void Uninitialize();

  /// @brief Method UploadScoresCoroutine, addr 0x27019d8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UploadScoresCoroutine();

  /// @brief Method <UploadScoresCoroutine>b__16_1, addr 0x2701db0, size 0x10, virtual false, abstract: false, final false
  inline bool _UploadScoresCoroutine_b__16_1();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::StringW const& __cordl_internal_get__playerId() const;

  constexpr ::StringW& __cordl_internal_get__playerId();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* const& __cordl_internal_get__scoresToUpload() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>*& __cordl_internal_get__scoresToUpload();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* const& __cordl_internal_get__scoresToUploadForCurrentPlayer() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>*& __cordl_internal_get__scoresToUploadForCurrentPlayer();

  constexpr ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* const& __cordl_internal_get__uploadScoreCallback() const;

  constexpr ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*& __cordl_internal_get__uploadScoreCallback();

  constexpr bool const& __cordl_internal_get__uploading() const;

  constexpr bool& __cordl_internal_get__uploading();

  constexpr ::System::Action* const& __cordl_internal_get_allScoresDidUploadEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_allScoresDidUploadEvent();

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__playerId(::StringW value);

  constexpr void __cordl_internal_set__scoresToUpload(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* value);

  constexpr void __cordl_internal_set__scoresToUploadForCurrentPlayer(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* value);

  constexpr void __cordl_internal_set__uploadScoreCallback(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* value);

  constexpr void __cordl_internal_set__uploading(bool value);

  constexpr void __cordl_internal_set_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2701d1c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_allScoresDidUploadEvent, addr 0x2701848, size 0x9c, virtual false, abstract: false, final false
  inline void add_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method remove_allScoresDidUploadEvent, addr 0x27018e4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_allScoresDidUploadEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader(LeaderboardScoreUploader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader(LeaderboardScoreUploader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13331 };

  /// @brief Field kScoresToUploadFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kScoresToUploadFileName{ u"ScoresToUpload.dat" };

  /// @brief Field allScoresDidUploadEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___allScoresDidUploadEvent;

  /// @brief Field _scoresToUpload, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* ____scoresToUpload;

  /// @brief Field _scoresToUploadForCurrentPlayer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* ____scoresToUploadForCurrentPlayer;

  /// @brief Field _uploadScoreCallback, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* ____uploadScoreCallback;

  /// @brief Field _playerId, offset: 0x40, size: 0x8, def value: None
  ::StringW ____playerId;

  /// @brief Field _uploading, offset: 0x48, size: 0x1, def value: None
  bool ____uploading;

  /// @brief Field _fileStorage, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ___allScoresDidUploadEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____scoresToUpload) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____scoresToUploadForCurrentPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____uploadScoreCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____playerId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____uploading) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____fileStorage) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader*, "", "LeaderboardScoreUploader");
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader_ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*, "", "LeaderboardScoreUploader/ScoreData");
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData*, "", "LeaderboardScoreUploader/ScoresToUploadData");
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*, "", "LeaderboardScoreUploader/UploadScoreCallback");
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*, "", "LeaderboardScoreUploader/<UploadScoresCoroutine>d__16");
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0*, "", "LeaderboardScoreUploader/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17, "", "LeaderboardScoreUploader/<LoadScoresToUploadFromFile>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18, "", "LeaderboardScoreUploader/<SaveScoresToUploadToFile>d__18");
