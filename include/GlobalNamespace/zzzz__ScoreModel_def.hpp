#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreModel)
namespace GlobalNamespace {
class BeatmapBasicData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
}
namespace GlobalNamespace {
class __ScoreModel__MaxScoreCounterElement;
}
namespace GlobalNamespace {
class __ScoreModel__NoteScoreDefinition;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreModel;
}
namespace GlobalNamespace {
class __ScoreModel__MaxScoreCounterElement;
}
namespace GlobalNamespace {
class __ScoreModel__NoteScoreDefinition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreModel);
MARK_REF_PTR_T(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement);
MARK_REF_PTR_T(::GlobalNamespace::__ScoreModel__NoteScoreDefinition);
// Type: ::NoteScoreDefinition
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreModel::NoteScoreDefinition*
class CORDL_TYPE __ScoreModel__NoteScoreDefinition : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  /// @brief Field fixedCutScore, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_fixedCutScore, put = __cordl_internal_set_fixedCutScore)) int32_t fixedCutScore;

  /// @brief Field maxAfterCutScore, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAfterCutScore, put = __cordl_internal_set_maxAfterCutScore)) int32_t maxAfterCutScore;

  /// @brief Field maxBeforeCutScore, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBeforeCutScore, put = __cordl_internal_set_maxBeforeCutScore)) int32_t maxBeforeCutScore;

  /// @brief Field maxCenterDistanceCutScore, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCenterDistanceCutScore, put = __cordl_internal_set_maxCenterDistanceCutScore)) int32_t maxCenterDistanceCutScore;

  __declspec(property(get = get_maxCutScore)) int32_t maxCutScore;

  /// @brief Field minAfterCutScore, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_minAfterCutScore, put = __cordl_internal_set_minAfterCutScore)) int32_t minAfterCutScore;

  /// @brief Field minBeforeCutScore, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_minBeforeCutScore, put = __cordl_internal_set_minBeforeCutScore)) int32_t minBeforeCutScore;

  static inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* New_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore,
                                                                               int32_t maxAfterCutScore, int32_t fixedCutScore);

  constexpr int32_t const& __cordl_internal_get_fixedCutScore() const;

  constexpr int32_t& __cordl_internal_get_fixedCutScore();

  constexpr int32_t const& __cordl_internal_get_maxAfterCutScore() const;

  constexpr int32_t& __cordl_internal_get_maxAfterCutScore();

  constexpr int32_t const& __cordl_internal_get_maxBeforeCutScore() const;

  constexpr int32_t& __cordl_internal_get_maxBeforeCutScore();

  constexpr int32_t const& __cordl_internal_get_maxCenterDistanceCutScore() const;

  constexpr int32_t& __cordl_internal_get_maxCenterDistanceCutScore();

  constexpr int32_t const& __cordl_internal_get_minAfterCutScore() const;

  constexpr int32_t& __cordl_internal_get_minAfterCutScore();

  constexpr int32_t const& __cordl_internal_get_minBeforeCutScore() const;

  constexpr int32_t& __cordl_internal_get_minBeforeCutScore();

  constexpr void __cordl_internal_set_fixedCutScore(int32_t value);

  constexpr void __cordl_internal_set_maxAfterCutScore(int32_t value);

  constexpr void __cordl_internal_set_maxBeforeCutScore(int32_t value);

  constexpr void __cordl_internal_set_maxCenterDistanceCutScore(int32_t value);

  constexpr void __cordl_internal_set_minAfterCutScore(int32_t value);

  constexpr void __cordl_internal_set_minBeforeCutScore(int32_t value);

  /// @brief Method .ctor, addr 0x13ff178, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore, int32_t fixedCutScore);

  /// @brief Method get_executionOrder, addr 0x13ff1e4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_maxCutScore, addr 0x13fe210, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_maxCutScore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoreModel__NoteScoreDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__NoteScoreDefinition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScoreModel__NoteScoreDefinition(__ScoreModel__NoteScoreDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__NoteScoreDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScoreModel__NoteScoreDefinition(__ScoreModel__NoteScoreDefinition const&) = delete;

  /// @brief Field maxCenterDistanceCutScore, offset: 0x10, size: 0x4, def value: None
  int32_t ___maxCenterDistanceCutScore;

  /// @brief Field minBeforeCutScore, offset: 0x14, size: 0x4, def value: None
  int32_t ___minBeforeCutScore;

  /// @brief Field maxBeforeCutScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___maxBeforeCutScore;

  /// @brief Field minAfterCutScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___minAfterCutScore;

  /// @brief Field maxAfterCutScore, offset: 0x20, size: 0x4, def value: None
  int32_t ___maxAfterCutScore;

  /// @brief Field fixedCutScore, offset: 0x24, size: 0x4, def value: None
  int32_t ___fixedCutScore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreModel__NoteScoreDefinition, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__NoteScoreDefinition, ___maxCenterDistanceCutScore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__NoteScoreDefinition, ___minBeforeCutScore) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__NoteScoreDefinition, ___maxBeforeCutScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__NoteScoreDefinition, ___minAfterCutScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__NoteScoreDefinition, ___maxAfterCutScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__NoteScoreDefinition, ___fixedCutScore) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MaxScoreCounterElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreModel::MaxScoreCounterElement*
class CORDL_TYPE __ScoreModel__MaxScoreCounterElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field noteScoreDefinition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_noteScoreDefinition, put = __cordl_internal_set_noteScoreDefinition))::GlobalNamespace::__ScoreModel__NoteScoreDefinition* noteScoreDefinition;

  /// @brief Field time, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>*() noexcept;

  /// @brief Method CompareTo, addr 0x13ff200, size 0x90, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement* other);

  static inline ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement* New_ctor(::GlobalNamespace::__NoteData__ScoringType scoringType, float_t time);

  constexpr ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*& __cordl_internal_get_noteScoreDefinition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*> const& __cordl_internal_get_noteScoreDefinition() const;

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set_noteScoreDefinition(::GlobalNamespace::__ScoreModel__NoteScoreDefinition* value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x13fecac, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__NoteData__ScoringType scoringType, float_t time);

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>* i___System__IComparable_1___GlobalNamespace____ScoreModel__MaxScoreCounterElement__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoreModel__MaxScoreCounterElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__MaxScoreCounterElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScoreModel__MaxScoreCounterElement(__ScoreModel__MaxScoreCounterElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__MaxScoreCounterElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScoreModel__MaxScoreCounterElement(__ScoreModel__MaxScoreCounterElement const&) = delete;

  /// @brief Field noteScoreDefinition, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* ___noteScoreDefinition;

  /// @brief Field time, offset: 0x18, size: 0x4, def value: None
  float_t ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement, ___noteScoreDefinition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement, ___time) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoreModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreModel*
class CORDL_TYPE ScoreModel : public ::System::Object {
public:
  // Declarations
  using MaxScoreCounterElement = ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement;

  using NoteScoreDefinition = ::GlobalNamespace::__ScoreModel__NoteScoreDefinition;

  /// @brief Field _scoreDefinitions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__scoreDefinitions,
                             put = setStaticF__scoreDefinitions))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType,
                                                                                                              ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>* _scoreDefinitions;

  /// @brief Field _scoreMultiplierCounter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__scoreMultiplierCounter, put = setStaticF__scoreMultiplierCounter))::GlobalNamespace::ScoreMultiplierCounter* _scoreMultiplierCounter;

  /// @brief Field fullScoreScoringTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fullScoreScoringTypes,
                             put = setStaticF_fullScoreScoringTypes))::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>* fullScoreScoringTypes;

  /// @brief Method ComputeMaxMultipliedScoreForBeatmap, addr 0x13fe22c, size 0xa80, virtual false, abstract: false, final false
  static inline int32_t ComputeMaxMultipliedScoreForBeatmap(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method ComputeQuickInaccurateMaxMultipliedScoreForBeatmap, addr 0x13fe160, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ComputeQuickInaccurateMaxMultipliedScoreForBeatmap(::GlobalNamespace::BeatmapBasicData* beatmapBasicData);

  /// @brief Method GetModifiedScoreForGameplayModifiersScoreMultiplier, addr 0x13fede4, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetModifiedScoreForGameplayModifiersScoreMultiplier(int32_t multipliedScore, float_t gameplayModifiersScoreMultiplier);

  /// @brief Method GetNoteScoreDefinition, addr 0x13fe0e0, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* GetNoteScoreDefinition(::GlobalNamespace::__NoteData__ScoringType scoringType);

  static inline ::GlobalNamespace::ScoreModel* New_ctor();

  /// @brief Method .ctor, addr 0x13fee58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>* getStaticF__scoreDefinitions();

  static inline ::GlobalNamespace::ScoreMultiplierCounter* getStaticF__scoreMultiplierCounter();

  static inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>* getStaticF_fullScoreScoringTypes();

  static inline void
  setStaticF__scoreDefinitions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>* value);

  static inline void setStaticF__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value);

  static inline void setStaticF_fullScoreScoringTypes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreModel(ScoreModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreModel(ScoreModel const&) = delete;

  /// @brief Field kMaxAfterCutScore offset 0xffffffff size 0x4
  static constexpr int32_t kMaxAfterCutScore{ static_cast<int32_t>(0x1e) };

  /// @brief Field kMaxBeforeCutScore offset 0xffffffff size 0x4
  static constexpr int32_t kMaxBeforeCutScore{ static_cast<int32_t>(0x46) };

  /// @brief Field kMaxCenterDistanceCutScore offset 0xffffffff size 0x4
  static constexpr int32_t kMaxCenterDistanceCutScore{ static_cast<int32_t>(0xf) };

  /// @brief Field kMaxDistanceForDistanceToCenterScore offset 0xffffffff size 0x4
  static constexpr float_t kMaxDistanceForDistanceToCenterScore{ 0.3 };

  /// @brief Field kMaxMultiplier offset 0xffffffff size 0x4
  static constexpr int32_t kMaxMultiplier{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreModel*, "", "ScoreModel");
NEED_NO_BOX(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*, "", "ScoreModel/MaxScoreCounterElement");
NEED_NO_BOX(::GlobalNamespace::__ScoreModel__NoteScoreDefinition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreModel__NoteScoreDefinition*, "", "ScoreModel/NoteScoreDefinition");
