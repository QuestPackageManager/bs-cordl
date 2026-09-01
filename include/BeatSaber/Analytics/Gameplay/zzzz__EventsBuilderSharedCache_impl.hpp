#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventsBuilderSharedCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderSharedCache_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentType_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__SegmentState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)()>(&::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32630bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.AddSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(
    ::StringW, ::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::AddSegment)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32620c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                                { "AddSegment",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                    ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.TryGetSegmentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW, ::by_ref<::StringW>)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::TryGetSegmentId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3261ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                                                                           { "TryGetSegmentId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.IsSegmentFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::IsSegmentFinished)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3262060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "IsSegmentFinished", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.GetSegmentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::SegmentState* (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::GetSegmentState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3262380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "GetSegmentState", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.UpdateSeqNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW, int32_t)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSeqNum)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3262cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                                                                           { "UpdateSeqNum", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.UpdateSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(
    ::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*)>(&::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3261c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                         { "UpdateSettings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.RemoveSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::RemoveSegment)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3262d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "RemoveSegment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.MarkSegmentAsFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::MarkSegmentAsFinished)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3262e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "MarkSegmentAsFinished", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)()>(&::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3262f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_get__segmentNameToId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentNameToId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_get__segmentNameToId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentNameToId;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_set__segmentNameToId(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentNameToId = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_get__finishedSegmentIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishedSegmentIds;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_get__finishedSegmentIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishedSegmentIds;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_set__finishedSegmentIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finishedSegmentIds = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::BeatSaber::Analytics::Gameplay::SegmentState*>*&
BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_get__segmentIdToState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentIdToState;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::BeatSaber::Analytics::Gameplay::SegmentState*>* const&
BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_get__segmentIdToState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentIdToState;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::__cordl_internal_set__segmentIdToState(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::BeatSaber::Analytics::Gameplay::SegmentState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentIdToState = value;
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::AddSegment(::StringW segmentId, ::StringW segmentName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* type,
                                                                                 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                              { "AddSegment",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                  ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentId, segmentName, type, settings);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::TryGetSegmentId(::StringW segmentName, ::by_ref<::StringW> segmentId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                                                                         { "TryGetSegmentId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segmentName, segmentId);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::IsSegmentFinished(::StringW segmentId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "IsSegmentFinished", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segmentId);
}
inline ::BeatSaber::Analytics::Gameplay::SegmentState* BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::GetSegmentState(::StringW segmentId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "GetSegmentState", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::SegmentState*>(this, ___internal_method, segmentId);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSeqNum(::StringW segmentId, int32_t seqNum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                                                                         { "UpdateSeqNum", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentId, seqNum);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSettings(::StringW segmentId, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(),
                                       { "UpdateSettings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentId, settings);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::RemoveSegment(::StringW segmentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "RemoveSegment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segmentName);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::MarkSegmentAsFinished(::StringW segmentId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { "MarkSegmentAsFinished", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentId);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::EventsBuilderSharedCache() {}
