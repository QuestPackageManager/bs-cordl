#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoreController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreController_def.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BadCutScoringElement_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GoodCutScoringElement_def.hpp"
#include "GlobalNamespace/zzzz__IBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__IGameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__MissScoringElement_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__ScoreController_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreController_ApproximateFloatComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreController_ApproximateFloatComparer::*)(float_t, float_t)>(
    &::GlobalNamespace::ScoreController_ApproximateFloatComparer::Compare)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59f6400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController_ApproximateFloatComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController_ApproximateFloatComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController_ApproximateFloatComparer::*)()>(&::GlobalNamespace::ScoreController_ApproximateFloatComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f63fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController_ApproximateFloatComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ScoreController_ApproximateFloatComparer::Compare(float_t x, float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController_ApproximateFloatComparer*>(), { "Compare", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void GlobalNamespace::ScoreController_ApproximateFloatComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController_ApproximateFloatComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreController_ApproximateFloatComparer* GlobalNamespace::ScoreController_ApproximateFloatComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreController_ApproximateFloatComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<float_t>"
constexpr GlobalNamespace::ScoreController_ApproximateFloatComparer::operator ::System::Collections::Generic::IComparer_1<float_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<float_t>"
constexpr ::System::Collections::Generic::IComparer_1<float_t>* GlobalNamespace::ScoreController_ApproximateFloatComparer::i___System__Collections__Generic__IComparer_1_float_t_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<float_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreController_ApproximateFloatComparer::ScoreController_ApproximateFloatComparer() {}
//  Writing Method size for method: ::GlobalNamespace::ScoreController.add_scoreDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_2<int32_t, int32_t>*)>(
    &::GlobalNamespace::ScoreController::add_scoreDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f42a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "add_scoreDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.remove_scoreDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_2<int32_t, int32_t>*)>(
    &::GlobalNamespace::ScoreController::remove_scoreDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f4368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "remove_scoreDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.add_multiplierDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_2<int32_t, float_t>*)>(
    &::GlobalNamespace::ScoreController::add_multiplierDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f4428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "add_multiplierDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.remove_multiplierDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_2<int32_t, float_t>*)>(
    &::GlobalNamespace::ScoreController::remove_multiplierDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f44e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                                                           { "remove_multiplierDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.add_scoringForNoteStartedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(
    &::GlobalNamespace::ScoreController::add_scoringForNoteStartedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f45a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                             { "add_scoringForNoteStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.remove_scoringForNoteStartedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(
    &::GlobalNamespace::ScoreController::remove_scoringForNoteStartedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f4668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                             { "remove_scoringForNoteStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.add_scoringForNoteFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(
    &::GlobalNamespace::ScoreController::add_scoringForNoteFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f4728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                             { "add_scoringForNoteFinishedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.remove_scoringForNoteFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(
    &::GlobalNamespace::ScoreController::remove_scoringForNoteFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f47e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                             { "remove_scoringForNoteFinishedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.get_invalidated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::get_invalidated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f48a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_invalidated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.get_multipliedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::get_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f48b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_multipliedScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.get_immediateMaxPossibleMultipliedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::get_immediateMaxPossibleMultipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f48b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_immediateMaxPossibleMultipliedScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.get_modifiedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::get_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f48c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_modifiedScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.get_immediateMaxPossibleModifiedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::get_immediateMaxPossibleModifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f48c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_immediateMaxPossibleModifiedScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(bool)>(&::GlobalNamespace::ScoreController::SetEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f48d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::Start)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x59f48d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::OnDestroy)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x59f4b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::LateUpdate)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x59f4d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.HasMultipleNotesOnBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ScoreController::*)(float_t)>(&::GlobalNamespace::ScoreController::HasMultipleNotesOnBeat)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x59f56c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HasMultipleNotesOnBeat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::ScoreController::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f58f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::ScoreController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x59f599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::ScoreController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x59f5f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.HandlePlayerHeadDidEnterObstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::HandlePlayerHeadDidEnterObstacles)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59f61b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HandlePlayerHeadDidEnterObstacles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController.DespawnScoringElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)(::GlobalNamespace::ScoringElement*)>(&::GlobalNamespace::ScoreController::DespawnScoringElement)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x59f5514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "DespawnScoringElement", {}, { ::i2c::type_of<::GlobalNamespace::ScoringElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreController::*)()>(&::GlobalNamespace::ScoreController::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59f6238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::ScoreController::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::ScoreController::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::ScoreController::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::ScoreController::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::GlobalNamespace::IGameEnergyCounter*& GlobalNamespace::ScoreController::__cordl_internal_get__gameEnergyCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr ::GlobalNamespace::IGameEnergyCounter* const& GlobalNamespace::ScoreController::__cordl_internal_get__gameEnergyCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__gameEnergyCounter(::GlobalNamespace::IGameEnergyCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameEnergyCounter = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::ScoreController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::ScoreController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::ScoreController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::ScoreController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::BeatSaber::Automation::RecPlayBehaviourState*& GlobalNamespace::ScoreController::__cordl_internal_get__recPlayState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recPlayState;
}
constexpr ::BeatSaber::Automation::RecPlayBehaviourState* const& GlobalNamespace::ScoreController::__cordl_internal_get__recPlayState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recPlayState;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__recPlayState(::BeatSaber::Automation::RecPlayBehaviourState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recPlayState = value;
}
constexpr ::GlobalNamespace::GoodCutScoringElement_Pool*& GlobalNamespace::ScoreController::__cordl_internal_get__goodCutScoringElementPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutScoringElementPool;
}
constexpr ::GlobalNamespace::GoodCutScoringElement_Pool* const& GlobalNamespace::ScoreController::__cordl_internal_get__goodCutScoringElementPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutScoringElementPool;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__goodCutScoringElementPool(::GlobalNamespace::GoodCutScoringElement_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCutScoringElementPool = value;
}
constexpr ::GlobalNamespace::BadCutScoringElement_Pool*& GlobalNamespace::ScoreController::__cordl_internal_get__badCutScoringElementPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutScoringElementPool;
}
constexpr ::GlobalNamespace::BadCutScoringElement_Pool* const& GlobalNamespace::ScoreController::__cordl_internal_get__badCutScoringElementPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutScoringElementPool;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__badCutScoringElementPool(::GlobalNamespace::BadCutScoringElement_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutScoringElementPool = value;
}
constexpr ::GlobalNamespace::MissScoringElement_Pool*& GlobalNamespace::ScoreController::__cordl_internal_get__missScoringElementPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missScoringElementPool;
}
constexpr ::GlobalNamespace::MissScoringElement_Pool* const& GlobalNamespace::ScoreController::__cordl_internal_get__missScoringElementPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missScoringElementPool;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__missScoringElementPool(::GlobalNamespace::MissScoringElement_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missScoringElementPool = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& GlobalNamespace::ScoreController::__cordl_internal_get__playerHeadAndObstacleInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& GlobalNamespace::ScoreController::__cordl_internal_get__playerHeadAndObstacleInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeadAndObstacleInteraction = value;
}
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*& GlobalNamespace::ScoreController::__cordl_internal_get__blockLevelGameplayAnalyticsEventsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevelGameplayAnalyticsEventsCache;
}
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* const& GlobalNamespace::ScoreController::__cordl_internal_get__blockLevelGameplayAnalyticsEventsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevelGameplayAnalyticsEventsCache;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__blockLevelGameplayAnalyticsEventsCache(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockLevelGameplayAnalyticsEventsCache = value;
}
constexpr ::System::Action_2<int32_t, int32_t>*& GlobalNamespace::ScoreController::__cordl_internal_get_scoreDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreDidChangeEvent;
}
constexpr ::System::Action_2<int32_t, int32_t>* const& GlobalNamespace::ScoreController::__cordl_internal_get_scoreDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreDidChangeEvent;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoreDidChangeEvent = value;
}
constexpr ::System::Action_2<int32_t, float_t>*& GlobalNamespace::ScoreController::__cordl_internal_get_multiplierDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplierDidChangeEvent;
}
constexpr ::System::Action_2<int32_t, float_t>* const& GlobalNamespace::ScoreController::__cordl_internal_get_multiplierDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplierDidChangeEvent;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplierDidChangeEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>*& GlobalNamespace::ScoreController::__cordl_internal_get_scoringForNoteStartedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringForNoteStartedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>* const& GlobalNamespace::ScoreController::__cordl_internal_get_scoringForNoteStartedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringForNoteStartedEvent;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoringForNoteStartedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>*& GlobalNamespace::ScoreController::__cordl_internal_get_scoringForNoteFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringForNoteFinishedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>* const& GlobalNamespace::ScoreController::__cordl_internal_get_scoringForNoteFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringForNoteFinishedEvent;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoringForNoteFinishedEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*& GlobalNamespace::ScoreController::__cordl_internal_get__gameplayModifierParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierParams;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const& GlobalNamespace::ScoreController::__cordl_internal_get__gameplayModifierParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierParams;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__gameplayModifierParams(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifierParams = value;
}
constexpr int32_t& GlobalNamespace::ScoreController::__cordl_internal_get__modifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiedScore;
}
constexpr int32_t const& GlobalNamespace::ScoreController::__cordl_internal_get__modifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiedScore;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__modifiedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiedScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreController::__cordl_internal_get__immediateMaxPossibleModifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateMaxPossibleModifiedScore;
}
constexpr int32_t const& GlobalNamespace::ScoreController::__cordl_internal_get__immediateMaxPossibleModifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateMaxPossibleModifiedScore;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__immediateMaxPossibleModifiedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____immediateMaxPossibleModifiedScore = value;
}
constexpr float_t& GlobalNamespace::ScoreController::__cordl_internal_get__prevMultiplierFromModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMultiplierFromModifiers;
}
constexpr float_t const& GlobalNamespace::ScoreController::__cordl_internal_get__prevMultiplierFromModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMultiplierFromModifiers;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__prevMultiplierFromModifiers(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMultiplierFromModifiers = value;
}
constexpr int32_t& GlobalNamespace::ScoreController::__cordl_internal_get__multipliedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipliedScore;
}
constexpr int32_t const& GlobalNamespace::ScoreController::__cordl_internal_get__multipliedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipliedScore;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__multipliedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multipliedScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreController::__cordl_internal_get__immediateMaxPossibleMultipliedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateMaxPossibleMultipliedScore;
}
constexpr int32_t const& GlobalNamespace::ScoreController::__cordl_internal_get__immediateMaxPossibleMultipliedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateMaxPossibleMultipliedScore;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__immediateMaxPossibleMultipliedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____immediateMaxPossibleMultipliedScore = value;
}
constexpr bool& GlobalNamespace::ScoreController::__cordl_internal_get__invalidated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invalidated;
}
constexpr bool const& GlobalNamespace::ScoreController::__cordl_internal_get__invalidated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invalidated;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__invalidated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invalidated = value;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter*& GlobalNamespace::ScoreController::__cordl_internal_get__maxScoreMultiplierCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxScoreMultiplierCounter;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter* const& GlobalNamespace::ScoreController::__cordl_internal_get__maxScoreMultiplierCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxScoreMultiplierCounter;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__maxScoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxScoreMultiplierCounter = value;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter*& GlobalNamespace::ScoreController::__cordl_internal_get__scoreMultiplierCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreMultiplierCounter;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter* const& GlobalNamespace::ScoreController::__cordl_internal_get__scoreMultiplierCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreMultiplierCounter;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreMultiplierCounter = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::ScoreController::__cordl_internal_get__sortedNoteTimesWithoutScoringElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedNoteTimesWithoutScoringElements;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::ScoreController::__cordl_internal_get__sortedNoteTimesWithoutScoringElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedNoteTimesWithoutScoringElements;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__sortedNoteTimesWithoutScoringElements(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortedNoteTimesWithoutScoringElements = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& GlobalNamespace::ScoreController::__cordl_internal_get__sortedScoringElementsWithoutMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedScoringElementsWithoutMultiplier;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* const& GlobalNamespace::ScoreController::__cordl_internal_get__sortedScoringElementsWithoutMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedScoringElementsWithoutMultiplier;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__sortedScoringElementsWithoutMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortedScoringElementsWithoutMultiplier = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& GlobalNamespace::ScoreController::__cordl_internal_get__scoringElementsWithMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoringElementsWithMultiplier;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* const& GlobalNamespace::ScoreController::__cordl_internal_get__scoringElementsWithMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoringElementsWithMultiplier;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__scoringElementsWithMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoringElementsWithMultiplier = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& GlobalNamespace::ScoreController::__cordl_internal_get__scoringElementsToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoringElementsToRemove;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* const& GlobalNamespace::ScoreController::__cordl_internal_get__scoringElementsToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoringElementsToRemove;
}
constexpr void GlobalNamespace::ScoreController::__cordl_internal_set__scoringElementsToRemove(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoringElementsToRemove = value;
}
inline void GlobalNamespace::ScoreController::setStaticF__approximateFloatComparer(::GlobalNamespace::ScoreController_ApproximateFloatComparer* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ScoreController_ApproximateFloatComparer*, "_approximateFloatComparer", ::GlobalNamespace::ScoreController*>(
      std::forward<::GlobalNamespace::ScoreController_ApproximateFloatComparer*>(value));
}
inline ::GlobalNamespace::ScoreController_ApproximateFloatComparer* GlobalNamespace::ScoreController::getStaticF__approximateFloatComparer() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ScoreController_ApproximateFloatComparer*, "_approximateFloatComparer", ::GlobalNamespace::ScoreController*>();
}
inline void GlobalNamespace::ScoreController::add_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "add_scoreDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::remove_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "remove_scoreDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::add_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "add_multiplierDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::remove_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                                                         { "remove_multiplierDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                           { "add_scoringForNoteStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                           { "remove_scoringForNoteStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                           { "add_scoringForNoteFinishedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreController::remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                                           { "remove_scoringForNoteFinishedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ScoringElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ScoreController::get_invalidated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_invalidated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoreController::get_multipliedScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_multipliedScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoreController::get_immediateMaxPossibleMultipliedScore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_immediateMaxPossibleMultipliedScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoreController::get_modifiedScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_modifiedScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoreController::get_immediateMaxPossibleModifiedScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "get_immediateMaxPossibleModifiedScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreController::SetEnabled(bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::ScoreController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ScoreController::HasMultipleNotesOnBeat(float_t noteTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HasMultipleNotesOnBeat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, noteTime);
}
inline void GlobalNamespace::ScoreController::HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::ScoreController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::ScoreController::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::ScoreController::HandlePlayerHeadDidEnterObstacles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "HandlePlayerHeadDidEnterObstacles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreController::DespawnScoringElement(::GlobalNamespace::ScoringElement* scoringElement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { "DespawnScoringElement", {}, { ::i2c::type_of<::GlobalNamespace::ScoringElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoringElement);
}
inline void GlobalNamespace::ScoreController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreController* GlobalNamespace::ScoreController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IScoreController"
constexpr GlobalNamespace::ScoreController::operator ::GlobalNamespace::IScoreController*() noexcept {
  return static_cast<::GlobalNamespace::IScoreController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IScoreController"
constexpr ::GlobalNamespace::IScoreController* GlobalNamespace::ScoreController::i___GlobalNamespace__IScoreController() noexcept {
  return static_cast<::GlobalNamespace::IScoreController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreController::ScoreController() {}
