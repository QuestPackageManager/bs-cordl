#pragma once
// IWYU pragma private; include "GlobalNamespace\RelativeScoreAndImmediateRankCounter.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeScoreAndImmediateRankCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.add_relativeScoreOrImmediateRankDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(::System::Action*)>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::add_relativeScoreOrImmediateRankDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59ac470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                           { "add_relativeScoreOrImmediateRankDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.remove_relativeScoreOrImmediateRankDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(::System::Action*)>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::remove_relativeScoreOrImmediateRankDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59acf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                           { "remove_relativeScoreOrImmediateRankDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.get_relativeScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_relativeScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ad020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "get_relativeScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.set_relativeScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(float_t)>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_relativeScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ad028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "set_relativeScore", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.get_immediateRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankModel_Rank (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_immediateRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ad030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "get_immediateRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.set_immediateRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(::GlobalNamespace::RankModel_Rank)>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_immediateRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ad038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                           { "set_immediateRank", {}, { ::i2c::type_of<::GlobalNamespace::RankModel_Rank>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&::GlobalNamespace::RelativeScoreAndImmediateRankCounter::Start)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59ad040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&::GlobalNamespace::RelativeScoreAndImmediateRankCounter::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x59ad1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.HandleScoreDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(int32_t, int32_t)>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::HandleScoreDidChange)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59ad2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                           { "HandleScoreDidChange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter.UpdateRelativeScoreAndImmediateRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::RelativeScoreAndImmediateRankCounter::UpdateRelativeScoreAndImmediateRank)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59ad434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                            { "UpdateRelativeScoreAndImmediateRank", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeScoreAndImmediateRankCounter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&::GlobalNamespace::RelativeScoreAndImmediateRankCounter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ad4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::GlobalNamespace::IScoreController* const& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreController = value;
}
constexpr ::System::Action*& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get_relativeScoreOrImmediateRankDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeScoreOrImmediateRankDidChangeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get_relativeScoreOrImmediateRankDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeScoreOrImmediateRankDidChangeEvent;
}
constexpr void GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_set_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relativeScoreOrImmediateRankDidChangeEvent = value;
}
constexpr float_t& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__relativeScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScore_k__BackingField;
}
constexpr float_t const& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__relativeScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScore_k__BackingField;
}
constexpr void GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_set__relativeScore_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeScore_k__BackingField = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__immediateRank_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateRank_k__BackingField;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_get__immediateRank_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateRank_k__BackingField;
}
constexpr void GlobalNamespace::RelativeScoreAndImmediateRankCounter::__cordl_internal_set__immediateRank_k__BackingField(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____immediateRank_k__BackingField = value;
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::add_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                         { "add_relativeScoreOrImmediateRankDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::remove_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                         { "remove_relativeScoreOrImmediateRankDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_relativeScore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "get_relativeScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_relativeScore(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "set_relativeScore", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RankModel_Rank GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_immediateRank() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "get_immediateRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankModel_Rank>(this, ___internal_method);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_immediateRank(::GlobalNamespace::RankModel_Rank value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                         { "set_immediateRank", {}, { ::i2c::type_of<::GlobalNamespace::RankModel_Rank>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::HandleScoreDidChange(int32_t scoreWithoutModifiers, int32_t scoreWithModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                                                                         { "HandleScoreDidChange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoreWithoutModifiers, scoreWithModifiers);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::UpdateRelativeScoreAndImmediateRank(int32_t score, int32_t modifiedScore, int32_t maxPossibleScore,
                                                                                                       int32_t maxPossibleModifiedScore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(),
                                       { "UpdateRelativeScoreAndImmediateRank", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, score, modifiedScore, maxPossibleScore, maxPossibleModifiedScore);
}
inline void GlobalNamespace::RelativeScoreAndImmediateRankCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RelativeScoreAndImmediateRankCounter* GlobalNamespace::RelativeScoreAndImmediateRankCounter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RelativeScoreAndImmediateRankCounter::RelativeScoreAndImmediateRankCounter() {}
