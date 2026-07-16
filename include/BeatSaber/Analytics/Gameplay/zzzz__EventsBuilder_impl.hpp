#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventsBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipEventType_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipMetricType_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentType_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderSharedCache_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.get_HasEndEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)()>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::get_HasEndEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3261440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "get_HasEndEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.SetMatchId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW)>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::SetMatchId)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3261648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "SetMatchId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.SetupSegmentFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW, ::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*,
                                                                                                                 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::SetupSegmentFields)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32616a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                { "SetupSegmentFields",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                    ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32616ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.StartSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*,
                                                                                                                      ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*)>(
        &::BeatSaber::Analytics::Gameplay::EventsBuilder::StartSegment)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x3261734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                             { "StartSegment",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                                 ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.ForSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::ForSegment)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3261c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "ForSegment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.EndSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(uint32_t)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::EndSegment)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3261e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "EndSegment", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.AbortSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(uint32_t)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::AbortSegment)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3262040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "AbortSegment", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.HasOngoingSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW)>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::HasOngoingSegment)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32621f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "HasOngoingSegment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.ThrowIfAlreadyContainsEndEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)()>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::ThrowIfAlreadyContainsEndEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3261fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "ThrowIfAlreadyContainsEndEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.WithMetric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (
    ::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, float_t)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::WithMetric)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3262244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                            { "WithMetric", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.WithCustomEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (
    ::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*)>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::WithCustomEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x32623fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                { "WithCustomEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* (
    ::BeatSaber::Analytics::Gameplay::EventsBuilder::*)()>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::Build)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x32625a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.IsEndEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilder::IsEndEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3261540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                             { "IsEndEvent", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilder.TryFlushSegmentData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilder::*)(::StringW)>(&::BeatSaber::Analytics::Gameplay::EventsBuilder::TryFlushSegmentData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32628dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "TryFlushSegmentData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__currentSeqNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSeqNum;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__currentSeqNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSeqNum;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__currentSeqNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSeqNum = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentId;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentId;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__segmentId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentId = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentName;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentName;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__segmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentName = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentType;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* const& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentType;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__segmentType(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentType = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentSettings;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__segmentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentSettings;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__segmentSettings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentSettings = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* const& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__cache(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cache = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>*& BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____events;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* const&
BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_get__events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____events;
}
constexpr void
BeatSaber::Analytics::Gameplay::EventsBuilder::__cordl_internal_set__events(::System::Collections::Generic::List_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____events = value;
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilder::get_HasEndEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "get_HasEndEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilder::SetMatchId(::StringW matchId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "SetMatchId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilder::SetupSegmentFields(::StringW segmentName, ::StringW segmentId,
                                                                              ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* currentSegmentType,
                                                                              ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* currentSegmentSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                              { "SetupSegmentFields",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                  ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentName, segmentId, currentSegmentType, currentSegmentSettings);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilder::_ctor(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* cache) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder*
BeatSaber::Analytics::Gameplay::EventsBuilder::StartSegment(::StringW segmentName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* type,
                                                            ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                           { "StartSegment",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                               ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, segmentName, type, settings);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventsBuilder::ForSegment(::StringW segmentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "ForSegment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, segmentName);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventsBuilder::EndSegment(uint32_t durationInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "EndSegment", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, durationInSeconds);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventsBuilder::AbortSegment(uint32_t durationInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "AbortSegment", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, durationInSeconds);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilder::HasOngoingSegment(::StringW segmentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "HasOngoingSegment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segmentName);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilder::ThrowIfAlreadyContainsEndEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "ThrowIfAlreadyContainsEndEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder*
BeatSaber::Analytics::Gameplay::EventsBuilder::WithMetric(::StringW metricName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* spaceshipMetricType, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                          { "WithMetric", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, metricName, spaceshipMetricType, value);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventsBuilder::WithCustomEvent(::StringW payload,
                                                                                                                       ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                              { "WithCustomEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, payload, eventType);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>* BeatSaber::Analytics::Gameplay::EventsBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>*>(this, ___internal_method);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilder::IsEndEvent(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(),
                                                           { "IsEndEvent", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilder::TryFlushSegmentData(::StringW segmentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(), { "TryFlushSegmentData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segmentName);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventsBuilder::New_ctor(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* cache) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(cache));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilder::EventsBuilder() {}
