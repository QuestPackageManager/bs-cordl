#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardScoreUploader)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoresToUploadData;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__UploadScoreCallback;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader___UploadScoresCoroutine_d__16;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__UploadScoreResult;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoresToUploadData;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__UploadScoreCallback;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader___UploadScoresCoroutine_d__16;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader____c__DisplayClass16_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardScoreUploader);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0);
// Type: ::ScoreData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4208))
// CS Name: ::LeaderboardScoreUploader::ScoreData*
class CORDL_TYPE __LeaderboardScoreUploader__ScoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <playerId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__playerId_k__BackingField, put = __set__playerId_k__BackingField))::StringW _playerId_k__BackingField;

  /// @brief Field <beatmap>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmap_k__BackingField, put = __set__beatmap_k__BackingField))::GlobalNamespace::IDifficultyBeatmap* _beatmap_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayModifiers_k__BackingField, put = __set__gameplayModifiers_k__BackingField))::GlobalNamespace::GameplayModifiers* _gameplayModifiers_k__BackingField;

  /// @brief Field <multipliedScore>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__multipliedScore_k__BackingField, put = __set__multipliedScore_k__BackingField)) int32_t _multipliedScore_k__BackingField;

  /// @brief Field <modifiedScore>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__modifiedScore_k__BackingField, put = __set__modifiedScore_k__BackingField)) int32_t _modifiedScore_k__BackingField;

  /// @brief Field <fullCombo>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__fullCombo_k__BackingField, put = __set__fullCombo_k__BackingField)) bool _fullCombo_k__BackingField;

  /// @brief Field <goodCutsCount>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__goodCutsCount_k__BackingField, put = __set__goodCutsCount_k__BackingField)) int32_t _goodCutsCount_k__BackingField;

  /// @brief Field <badCutsCount>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__badCutsCount_k__BackingField, put = __set__badCutsCount_k__BackingField)) int32_t _badCutsCount_k__BackingField;

  /// @brief Field <missedCount>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__missedCount_k__BackingField, put = __set__missedCount_k__BackingField)) int32_t _missedCount_k__BackingField;

  /// @brief Field <maxCombo>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__maxCombo_k__BackingField, put = __set__maxCombo_k__BackingField)) int32_t _maxCombo_k__BackingField;

  /// @brief Field uploadAttemptCount, offset 0x44, size 0x4
  __declspec(property(get = __get_uploadAttemptCount, put = __set_uploadAttemptCount)) int32_t uploadAttemptCount;

  /// @brief Field currentUploadAttemptCount, offset 0x48, size 0x4
  __declspec(property(get = __get_currentUploadAttemptCount, put = __set_currentUploadAttemptCount)) int32_t currentUploadAttemptCount;

  __declspec(property(get = get_playerId, put = set_playerId))::StringW playerId;

  __declspec(property(get = get_beatmap, put = set_beatmap))::GlobalNamespace::IDifficultyBeatmap* beatmap;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_multipliedScore, put = set_multipliedScore)) int32_t multipliedScore;

  __declspec(property(get = get_modifiedScore, put = set_modifiedScore)) int32_t modifiedScore;

  __declspec(property(get = get_fullCombo, put = set_fullCombo)) bool fullCombo;

  __declspec(property(get = get_goodCutsCount, put = set_goodCutsCount)) int32_t goodCutsCount;

  __declspec(property(get = get_badCutsCount, put = set_badCutsCount)) int32_t badCutsCount;

  __declspec(property(get = get_missedCount, put = set_missedCount)) int32_t missedCount;

  __declspec(property(get = get_maxCombo, put = set_maxCombo)) int32_t maxCombo;

  constexpr ::StringW& __get__playerId_k__BackingField();

  constexpr ::StringW const& __get__playerId_k__BackingField() const;

  constexpr void __set__playerId_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__beatmap_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__beatmap_k__BackingField() const;

  constexpr void __set__beatmap_k__BackingField(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers_k__BackingField() const;

  constexpr void __set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value);

  constexpr int32_t& __get__multipliedScore_k__BackingField();

  constexpr int32_t const& __get__multipliedScore_k__BackingField() const;

  constexpr void __set__multipliedScore_k__BackingField(int32_t value);

  constexpr int32_t& __get__modifiedScore_k__BackingField();

  constexpr int32_t const& __get__modifiedScore_k__BackingField() const;

  constexpr void __set__modifiedScore_k__BackingField(int32_t value);

  constexpr bool& __get__fullCombo_k__BackingField();

  constexpr bool const& __get__fullCombo_k__BackingField() const;

  constexpr void __set__fullCombo_k__BackingField(bool value);

  constexpr int32_t& __get__goodCutsCount_k__BackingField();

  constexpr int32_t const& __get__goodCutsCount_k__BackingField() const;

  constexpr void __set__goodCutsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__badCutsCount_k__BackingField();

  constexpr int32_t const& __get__badCutsCount_k__BackingField() const;

  constexpr void __set__badCutsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__missedCount_k__BackingField();

  constexpr int32_t const& __get__missedCount_k__BackingField() const;

  constexpr void __set__missedCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__maxCombo_k__BackingField();

  constexpr int32_t const& __get__maxCombo_k__BackingField() const;

  constexpr void __set__maxCombo_k__BackingField(int32_t value);

  constexpr int32_t& __get_uploadAttemptCount();

  constexpr int32_t const& __get_uploadAttemptCount() const;

  constexpr void __set_uploadAttemptCount(int32_t value);

  constexpr int32_t& __get_currentUploadAttemptCount();

  constexpr int32_t const& __get_currentUploadAttemptCount() const;

  constexpr void __set_currentUploadAttemptCount(int32_t value);

  /// @brief Method get_playerId, addr 0x232826c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerId();

  /// @brief Method set_playerId, addr 0x2328274, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(::StringW value);

  /// @brief Method get_beatmap, addr 0x232827c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_beatmap();

  /// @brief Method set_beatmap, addr 0x2328284, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  /// @brief Method get_gameplayModifiers, addr 0x232828c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method set_gameplayModifiers, addr 0x2328294, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method get_multipliedScore, addr 0x232829c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multipliedScore();

  /// @brief Method set_multipliedScore, addr 0x23282a4, size 0x8, virtual false, abstract: false, final false
  inline void set_multipliedScore(int32_t value);

  /// @brief Method get_modifiedScore, addr 0x23282ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_modifiedScore();

  /// @brief Method set_modifiedScore, addr 0x23282b4, size 0x8, virtual false, abstract: false, final false
  inline void set_modifiedScore(int32_t value);

  /// @brief Method get_fullCombo, addr 0x23282bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullCombo();

  /// @brief Method set_fullCombo, addr 0x23282c4, size 0xc, virtual false, abstract: false, final false
  inline void set_fullCombo(bool value);

  /// @brief Method get_goodCutsCount, addr 0x23282d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_goodCutsCount();

  /// @brief Method set_goodCutsCount, addr 0x23282d8, size 0x8, virtual false, abstract: false, final false
  inline void set_goodCutsCount(int32_t value);

  /// @brief Method get_badCutsCount, addr 0x23282e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_badCutsCount();

  /// @brief Method set_badCutsCount, addr 0x23282e8, size 0x8, virtual false, abstract: false, final false
  inline void set_badCutsCount(int32_t value);

  /// @brief Method get_missedCount, addr 0x23282f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_missedCount();

  /// @brief Method set_missedCount, addr 0x23282f8, size 0x8, virtual false, abstract: false, final false
  inline void set_missedCount(int32_t value);

  /// @brief Method get_maxCombo, addr 0x2328300, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxCombo();

  /// @brief Method set_maxCombo, addr 0x2328308, size 0x8, virtual false, abstract: false, final false
  inline void set_maxCombo(int32_t value);

  static inline ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* New_ctor(::StringW playerId, ::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t multipliedScore, int32_t modifiedScore,
                                                                                   bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo,
                                                                                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method .ctor, addr 0x2328310, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerId, ::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t multipliedScore, int32_t modifiedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount,
                    int32_t missedCount, int32_t maxCombo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader__ScoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardScoreUploader__ScoreData(__LeaderboardScoreUploader__ScoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader__ScoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardScoreUploader__ScoreData(__LeaderboardScoreUploader__ScoreData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardScoreUploader__ScoreData();

public:
  /// @brief Field <playerId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____playerId_k__BackingField;

  /// @brief Field <beatmap>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____beatmap_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers_k__BackingField;

  /// @brief Field <multipliedScore>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____multipliedScore_k__BackingField;

  /// @brief Field <modifiedScore>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____modifiedScore_k__BackingField;

  /// @brief Field <fullCombo>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____fullCombo_k__BackingField;

  /// @brief Field <goodCutsCount>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____goodCutsCount_k__BackingField;

  /// @brief Field <badCutsCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____badCutsCount_k__BackingField;

  /// @brief Field <missedCount>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____missedCount_k__BackingField;

  /// @brief Field <maxCombo>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____maxCombo_k__BackingField;

  /// @brief Field uploadAttemptCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___uploadAttemptCount;

  /// @brief Field currentUploadAttemptCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___currentUploadAttemptCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____playerId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____beatmap_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____gameplayModifiers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____multipliedScore_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____modifiedScore_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____fullCombo_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____goodCutsCount_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____badCutsCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____missedCount_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ____maxCombo_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ___uploadAttemptCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData, ___currentUploadAttemptCount) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoresToUploadData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4209))
// CS Name: ::LeaderboardScoreUploader::ScoresToUploadData*
class CORDL_TYPE __LeaderboardScoreUploader__ScoresToUploadData : public ::System::Object {
public:
  // Declarations
  /// @brief Field scores, offset 0x10, size 0x8
  __declspec(property(get = __get_scores, put = __set_scores))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* scores;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*& __get_scores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*> const& __get_scores() const;

  constexpr void __set_scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* value);

  static inline ::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData* New_ctor();

  /// @brief Method .ctor, addr 0x23280f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader__ScoresToUploadData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardScoreUploader__ScoresToUploadData(__LeaderboardScoreUploader__ScoresToUploadData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader__ScoresToUploadData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardScoreUploader__ScoresToUploadData(__LeaderboardScoreUploader__ScoresToUploadData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardScoreUploader__ScoresToUploadData();

public:
  /// @brief Field scores, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* ___scores;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData, ___scores) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UploadScoreCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4210))
// CS Name: ::LeaderboardScoreUploader::UploadScoreCallback*
class CORDL_TYPE __LeaderboardScoreUploader__UploadScoreCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2328398, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x23284c8, size 0x14, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* Invoke(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                   ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  /// @brief Method BeginInvoke, addr 0x23284dc, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                             ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2328504, size 0xc, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader__UploadScoreCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardScoreUploader__UploadScoreCallback(__LeaderboardScoreUploader__UploadScoreCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader__UploadScoreCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardScoreUploader__UploadScoreCallback(__LeaderboardScoreUploader__UploadScoreCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardScoreUploader__UploadScoreCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4211))
// CS Name: ::LeaderboardScoreUploader::<>c__DisplayClass16_0*
class CORDL_TYPE __LeaderboardScoreUploader____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scoreData, offset 0x10, size 0x8
  __declspec(property(get = __get_scoreData, put = __set_scoreData))::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LeaderboardScoreUploader* __4__this;

  constexpr ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*& __get_scoreData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*> const& __get_scoreData() const;

  constexpr void __set_scoreData(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* value);

  constexpr ::GlobalNamespace::LeaderboardScoreUploader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LeaderboardScoreUploader* value);

  static inline ::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor, addr 0x2328510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UploadScoresCoroutine>b__0, addr 0x2328518, size 0x238, virtual false, abstract: false, final false
  inline void _UploadScoresCoroutine_b__0(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult result);

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardScoreUploader____c__DisplayClass16_0(__LeaderboardScoreUploader____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardScoreUploader____c__DisplayClass16_0(__LeaderboardScoreUploader____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardScoreUploader____c__DisplayClass16_0();

public:
  /// @brief Field scoreData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* ___scoreData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardScoreUploader* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0, ___scoreData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UploadScoresCoroutine>d__16
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4212))
// CS Name: ::LeaderboardScoreUploader::<UploadScoresCoroutine>d__16*
class CORDL_TYPE __LeaderboardScoreUploader___UploadScoresCoroutine_d__16 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LeaderboardScoreUploader* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::LeaderboardScoreUploader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LeaderboardScoreUploader* value);

  static inline ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2327b64, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2328750, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2328754, size 0x1e8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2328a00, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2328a08, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2328a48, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader___UploadScoresCoroutine_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardScoreUploader___UploadScoresCoroutine_d__16(__LeaderboardScoreUploader___UploadScoresCoroutine_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardScoreUploader___UploadScoresCoroutine_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardScoreUploader___UploadScoresCoroutine_d__16(__LeaderboardScoreUploader___UploadScoresCoroutine_d__16 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardScoreUploader___UploadScoresCoroutine_d__16();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardScoreUploader* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardScoreUploader
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4213))
// CS Name: ::LeaderboardScoreUploader*
class CORDL_TYPE LeaderboardScoreUploader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _UploadScoresCoroutine_d__16 = ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0;

  using UploadScoreCallback = ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback;

  using ScoresToUploadData = ::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData;

  using ScoreData = ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData;

  /// @brief Field allScoresDidUploadEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_allScoresDidUploadEvent, put = __set_allScoresDidUploadEvent))::System::Action* allScoresDidUploadEvent;

  /// @brief Field _scoresToUpload, offset 0x20, size 0x8
  __declspec(property(get = __get__scoresToUpload, put = __set__scoresToUpload))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* _scoresToUpload;

  /// @brief Field _scoresToUploadForCurrentPlayer, offset 0x28, size 0x8
  __declspec(property(get = __get__scoresToUploadForCurrentPlayer,
                      put = __set__scoresToUploadForCurrentPlayer))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* _scoresToUploadForCurrentPlayer;

  /// @brief Field _uploadScoreCallback, offset 0x30, size 0x8
  __declspec(property(get = __get__uploadScoreCallback, put = __set__uploadScoreCallback))::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* _uploadScoreCallback;

  /// @brief Field _playerId, offset 0x38, size 0x8
  __declspec(property(get = __get__playerId, put = __set__playerId))::StringW _playerId;

  /// @brief Field _uploading, offset 0x40, size 0x1
  __declspec(property(get = __get__uploading, put = __set__uploading)) bool _uploading;

  /// @brief Field _saveData, offset 0x48, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  constexpr ::System::Action*& __get_allScoresDidUploadEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_allScoresDidUploadEvent() const;

  constexpr void __set_allScoresDidUploadEvent(::System::Action* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*& __get__scoresToUpload();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*> const& __get__scoresToUpload() const;

  constexpr void __set__scoresToUpload(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*& __get__scoresToUploadForCurrentPlayer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*> const&
  __get__scoresToUploadForCurrentPlayer() const;

  constexpr void __set__scoresToUploadForCurrentPlayer(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* value);

  constexpr ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*& __get__uploadScoreCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*> const& __get__uploadScoreCallback() const;

  constexpr void __set__uploadScoreCallback(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* value);

  constexpr ::StringW& __get__playerId();

  constexpr ::StringW const& __get__playerId() const;

  constexpr void __set__playerId(::StringW value);

  constexpr bool& __get__uploading();

  constexpr bool const& __get__uploading() const;

  constexpr void __set__uploading(bool value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  /// @brief Method add_allScoresDidUploadEvent, addr 0x23278b8, size 0x9c, virtual false, abstract: false, final false
  inline void add_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method remove_allScoresDidUploadEvent, addr 0x2327954, size 0x9c, virtual false, abstract: false, final false
  inline void remove_allScoresDidUploadEvent(::System::Action* value);

  /// @brief Method Init, addr 0x23279f0, size 0x58, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* uploadScoreCallback, ::StringW playerId);

  /// @brief Method Uninitialize, addr 0x2327ab0, size 0xb0, virtual false, abstract: false, final false
  inline void Uninitialize();

  /// @brief Method OnApplicationQuit, addr 0x2327b60, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method UploadScoresCoroutine, addr 0x2327a48, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UploadScoresCoroutine();

  /// @brief Method LoadScoresToUploadFromFile, addr 0x2327b8c, size 0x378, virtual false, abstract: false, final false
  inline void LoadScoresToUploadFromFile();

  /// @brief Method SaveScoresToUploadToFile, addr 0x2327f04, size 0x1ec, virtual false, abstract: false, final false
  inline void SaveScoresToUploadToFile();

  /// @brief Method AddScore, addr 0x23280f8, size 0xc4, virtual false, abstract: false, final false
  inline void AddScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData);

  static inline ::GlobalNamespace::LeaderboardScoreUploader* New_ctor();

  /// @brief Method .ctor, addr 0x23281bc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UploadScoresCoroutine>b__16_1, addr 0x232825c, size 0x10, virtual false, abstract: false, final false
  inline bool _UploadScoresCoroutine_b__16_1();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardScoreUploader(LeaderboardScoreUploader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardScoreUploader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardScoreUploader(LeaderboardScoreUploader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardScoreUploader();

public:
  /// @brief Field allScoresDidUploadEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___allScoresDidUploadEvent;

  /// @brief Field _scoresToUpload, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* ____scoresToUpload;

  /// @brief Field _scoresToUploadForCurrentPlayer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* ____scoresToUploadForCurrentPlayer;

  /// @brief Field _uploadScoreCallback, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* ____uploadScoreCallback;

  /// @brief Field _playerId, offset: 0x38, size: 0x8, def value: None
  ::StringW ____playerId;

  /// @brief Field _uploading, offset: 0x40, size: 0x1, def value: None
  bool ____uploading;

  /// @brief Field _saveData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field kScoresToUploadFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kScoresToUploadFileName{ u"ScoresToUpload.dat" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardScoreUploader, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ___allScoresDidUploadEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____scoresToUpload) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____scoresToUploadForCurrentPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____uploadScoreCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____playerId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____uploading) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardScoreUploader, ____saveData) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader*, "", "LeaderboardScoreUploader");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*, "", "LeaderboardScoreUploader/ScoreData");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData*, "", "LeaderboardScoreUploader/ScoresToUploadData");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*, "", "LeaderboardScoreUploader/UploadScoreCallback");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*, "", "LeaderboardScoreUploader/<UploadScoresCoroutine>d__16");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0*, "", "LeaderboardScoreUploader/<>c__DisplayClass16_0");
