#pragma once
// IWYU pragma private; include "GlobalNamespace\CutScoreBuffer.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__SaberSwingRatingCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_executionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_executionOrder)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59f3374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_executionOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_maxPossibleCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_maxPossibleCutScore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59f33a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_maxPossibleCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_isFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_isFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f33cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_isFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_cutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_cutScore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59f33d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_cutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_beforeCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_beforeCutScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f3400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_beforeCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_centerDistanceCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_centerDistanceCutScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f3408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_centerDistanceCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_afterCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_afterCutScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f3410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_afterCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_noteScoreDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScoreModel_NoteScoreDefinition* (::GlobalNamespace::CutScoreBuffer::*)()>(
    &::GlobalNamespace::CutScoreBuffer::get_noteScoreDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f3418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_noteScoreDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_noteCutInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutInfo (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_noteCutInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59f3420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_noteCutInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_beforeCutSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_beforeCutSwingRating)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f3430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_beforeCutSwingRating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.get_afterCutSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::get_afterCutSwingRating)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f3448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_afterCutSwingRating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.RegisterDidChangeReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*)>(
    &::GlobalNamespace::CutScoreBuffer::RegisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59f3460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "RegisterDidChangeReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.RegisterDidFinishReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*)>(
    &::GlobalNamespace::CutScoreBuffer::RegisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59f34c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "RegisterDidFinishReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.UnregisterDidChangeReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*)>(
    &::GlobalNamespace::CutScoreBuffer::UnregisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59f3528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "UnregisterDidChangeReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.UnregisterDidFinishReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*)>(
    &::GlobalNamespace::CutScoreBuffer::UnregisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59f358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "UnregisterDidFinishReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CutScoreBuffer::*)(::by_ref<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::CutScoreBuffer::Init)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x59f35f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "Init", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.RefreshScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::RefreshScores)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x59f385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "RefreshScores", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.HandleSaberSwingRatingCounterDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ISaberSwingRatingCounter*, float_t)>(
    &::GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidChange)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x59f3a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(),
                                                { "HandleSaberSwingRatingCounterDidChange", {}, { ::i2c::type_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer.HandleSaberSwingRatingCounterDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ISaberSwingRatingCounter*)>(
    &::GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x59f3c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(),
                                                             { "HandleSaberSwingRatingCounterDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::ISaberSwingRatingCounter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CutScoreBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CutScoreBuffer::*)()>(&::GlobalNamespace::CutScoreBuffer::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59f3e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaberSwingRatingCounter*& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__saberSwingRatingCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberSwingRatingCounter;
}
constexpr ::GlobalNamespace::SaberSwingRatingCounter* const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__saberSwingRatingCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberSwingRatingCounter;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__saberSwingRatingCounter(::GlobalNamespace::SaberSwingRatingCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberSwingRatingCounter = value;
}
constexpr ::GlobalNamespace::NoteCutInfo& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__noteCutInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutInfo;
}
constexpr ::GlobalNamespace::NoteCutInfo const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__noteCutInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutInfo;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__noteCutInfo(::GlobalNamespace::NoteCutInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutInfo = value;
}
constexpr ::GlobalNamespace::ScoreModel_NoteScoreDefinition*& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__noteScoreDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteScoreDefinition;
}
constexpr ::GlobalNamespace::ScoreModel_NoteScoreDefinition* const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__noteScoreDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteScoreDefinition;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__noteScoreDefinition(::GlobalNamespace::ScoreModel_NoteScoreDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteScoreDefinition = value;
}
constexpr int32_t& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__afterCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterCutScore;
}
constexpr int32_t const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__afterCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterCutScore;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__afterCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____afterCutScore = value;
}
constexpr int32_t& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__beforeCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeCutScore;
}
constexpr int32_t const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__beforeCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeCutScore;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__beforeCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beforeCutScore = value;
}
constexpr int32_t& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__centerDistanceCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistanceCutScore;
}
constexpr int32_t const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__centerDistanceCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistanceCutScore;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__centerDistanceCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerDistanceCutScore = value;
}
constexpr bool& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr bool& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__isFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFinished;
}
constexpr bool const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__isFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFinished;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__isFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFinished = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinishEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__didChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didChangeEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* const& GlobalNamespace::CutScoreBuffer::__cordl_internal_get__didChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didChangeEvent;
}
constexpr void GlobalNamespace::CutScoreBuffer::__cordl_internal_set__didChangeEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didChangeEvent = value;
}
inline int32_t GlobalNamespace::CutScoreBuffer::get_executionOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_executionOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CutScoreBuffer::get_maxPossibleCutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_maxPossibleCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::CutScoreBuffer::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_isFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CutScoreBuffer::get_cutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_cutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CutScoreBuffer::get_beforeCutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_beforeCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CutScoreBuffer::get_centerDistanceCutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_centerDistanceCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CutScoreBuffer::get_afterCutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_afterCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreModel_NoteScoreDefinition* GlobalNamespace::CutScoreBuffer::get_noteScoreDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_noteScoreDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutInfo GlobalNamespace::CutScoreBuffer::get_noteCutInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_noteCutInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutInfo>(this, ___internal_method);
}
inline float_t GlobalNamespace::CutScoreBuffer::get_beforeCutSwingRating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_beforeCutSwingRating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CutScoreBuffer::get_afterCutSwingRating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "get_afterCutSwingRating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::CutScoreBuffer::RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "RegisterDidChangeReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::CutScoreBuffer::RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "RegisterDidFinishReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::CutScoreBuffer::UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "UnregisterDidChangeReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::CutScoreBuffer::UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "UnregisterDidFinishReceiver", {}, { ::i2c::type_of<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline bool GlobalNamespace::CutScoreBuffer::Init(::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "Init", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::CutScoreBuffer::RefreshScores() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { "RefreshScores", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter, float_t rating) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(),
                                              { "HandleSaberSwingRatingCounterDidChange", {}, { ::i2c::type_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swingRatingCounter, rating);
}
inline void GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(),
                                                           { "HandleSaberSwingRatingCounterDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::ISaberSwingRatingCounter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swingRatingCounter);
}
inline void GlobalNamespace::CutScoreBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CutScoreBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CutScoreBuffer* GlobalNamespace::CutScoreBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CutScoreBuffer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IReadonlyCutScoreBuffer"
constexpr GlobalNamespace::CutScoreBuffer::operator ::GlobalNamespace::IReadonlyCutScoreBuffer*() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyCutScoreBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReadonlyCutScoreBuffer"
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* GlobalNamespace::CutScoreBuffer::i___GlobalNamespace__IReadonlyCutScoreBuffer() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyCutScoreBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver"
constexpr GlobalNamespace::CutScoreBuffer::operator ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver"
constexpr ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* GlobalNamespace::CutScoreBuffer::i___GlobalNamespace__ISaberSwingRatingCounterDidChangeReceiver() noexcept {
  return static_cast<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver"
constexpr GlobalNamespace::CutScoreBuffer::operator ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver"
constexpr ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* GlobalNamespace::CutScoreBuffer::i___GlobalNamespace__ISaberSwingRatingCounterDidFinishReceiver() noexcept {
  return static_cast<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CutScoreBuffer::CutScoreBuffer() {}
