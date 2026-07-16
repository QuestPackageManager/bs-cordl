#pragma once
// IWYU pragma private; include "GlobalNamespace/GoodCutScoringElement.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_impl.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_impl.hpp"
#include "GlobalNamespace/zzzz__GoodCutScoringElement_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__GoodCutScoringElement_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodCutScoringElement_Pool::*)()>(&::GlobalNamespace::GoodCutScoringElement_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59eff30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GoodCutScoringElement_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GoodCutScoringElement_Pool* GlobalNamespace::GoodCutScoringElement_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GoodCutScoringElement_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GoodCutScoringElement_Pool::GoodCutScoringElement_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.get_cutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GoodCutScoringElement::*)()>(&::GlobalNamespace::GoodCutScoringElement::get_cutScore)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59efe14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.get_wouldBeCorrectCutBestPossibleMultiplierEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType (::GlobalNamespace::GoodCutScoringElement::*)()>(
    &::GlobalNamespace::GoodCutScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59efe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.get_multiplierEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType (::GlobalNamespace::GoodCutScoringElement::*)()>(
    &::GlobalNamespace::GoodCutScoringElement::get_multiplierEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59efe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.get_cutScoreBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyCutScoreBuffer* (::GlobalNamespace::GoodCutScoringElement::*)()>(
    &::GlobalNamespace::GoodCutScoringElement::get_cutScoreBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59efe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { "get_cutScoreBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.get_executionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GoodCutScoringElement::*)()>(&::GlobalNamespace::GoodCutScoringElement::get_executionOrder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59efe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.Reinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodCutScoringElement::*)()>(&::GlobalNamespace::GoodCutScoringElement::Reinitialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59efea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodCutScoringElement::*)(::GlobalNamespace::NoteCutInfo)>(&::GlobalNamespace::GoodCutScoringElement::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59ef698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement.HandleCutScoreBufferDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodCutScoringElement::*)(::GlobalNamespace::CutScoreBuffer*)>(
    &::GlobalNamespace::GoodCutScoringElement::HandleCutScoreBufferDidFinish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59efeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(),
                                                                                           { "HandleCutScoreBufferDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CutScoreBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodCutScoringElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodCutScoringElement::*)()>(&::GlobalNamespace::GoodCutScoringElement::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59efed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CutScoreBuffer*& GlobalNamespace::GoodCutScoringElement::__cordl_internal_get__cutScoreBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutScoreBuffer;
}
constexpr ::GlobalNamespace::CutScoreBuffer* const& GlobalNamespace::GoodCutScoringElement::__cordl_internal_get__cutScoreBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutScoreBuffer;
}
constexpr void GlobalNamespace::GoodCutScoringElement::__cordl_internal_set__cutScoreBuffer(::GlobalNamespace::CutScoreBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutScoreBuffer = value;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& GlobalNamespace::GoodCutScoringElement::__cordl_internal_get__multiplierEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierEventType;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& GlobalNamespace::GoodCutScoringElement::__cordl_internal_get__multiplierEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierEventType;
}
constexpr void GlobalNamespace::GoodCutScoringElement::__cordl_internal_set__multiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplierEventType = value;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& GlobalNamespace::GoodCutScoringElement::__cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wouldBeCorrectCutBestPossibleMultiplierEventType;
}
constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& GlobalNamespace::GoodCutScoringElement::__cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wouldBeCorrectCutBestPossibleMultiplierEventType;
}
constexpr void GlobalNamespace::GoodCutScoringElement::__cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wouldBeCorrectCutBestPossibleMultiplierEventType = value;
}
inline int32_t GlobalNamespace::GoodCutScoringElement::get_cutScore() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType GlobalNamespace::GoodCutScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType GlobalNamespace::GoodCutScoringElement::get_multiplierEventType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType>(this, ___internal_method);
}
inline ::GlobalNamespace::IReadonlyCutScoreBuffer* GlobalNamespace::GoodCutScoringElement::get_cutScoreBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { "get_cutScoreBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyCutScoreBuffer*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GoodCutScoringElement::get_executionOrder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GoodCutScoringElement::Reinitialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GoodCutScoringElement::Init(::GlobalNamespace::NoteCutInfo noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::GoodCutScoringElement::HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(),
                                                                                         { "HandleCutScoreBufferDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CutScoreBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::GoodCutScoringElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GoodCutScoringElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GoodCutScoringElement* GlobalNamespace::GoodCutScoringElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GoodCutScoringElement*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr GlobalNamespace::GoodCutScoringElement::operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr ::GlobalNamespace::ICutScoreBufferDidFinishReceiver* GlobalNamespace::GoodCutScoringElement::i___GlobalNamespace__ICutScoreBufferDidFinishReceiver() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GoodCutScoringElement::GoodCutScoringElement() {}
