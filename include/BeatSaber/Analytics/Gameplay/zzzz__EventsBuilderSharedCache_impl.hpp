#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventsBuilderSharedCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderSharedCache_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentType_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__SegmentState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x31cdffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.AddSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(
    ::StringW, ::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::AddSegment)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x31cd004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "AddSegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.TryGetSegmentId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW, ::ByRef<::StringW>)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::TryGetSegmentId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31ccf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "TryGetSegmentId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.IsSegmentFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::IsSegmentFinished)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31ccfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "IsSegmentFinished",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.GetSegmentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::SegmentState* (
    ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(&::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::GetSegmentState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x31cd2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "GetSegmentState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.UpdateSeqNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW, int32_t)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSeqNum)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x31cdc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "UpdateSeqNum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.UpdateSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(
    ::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*)>(&::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x31ccb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "UpdateSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.RemoveSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::RemoveSegment)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31cdcac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "RemoveSegment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache.MarkSegmentAsFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::MarkSegmentAsFinished)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31cdd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "MarkSegmentAsFinished",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x31cdea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____segmentNameToId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____finishedSegmentIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____segmentIdToState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::AddSegment(::StringW segmentId, ::StringW segmentName, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* type,
                                                                                 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "AddSegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentId, segmentName, type, settings);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::TryGetSegmentId(::StringW segmentName, ::ByRef<::StringW> segmentId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(),
                                                                             "TryGetSegmentId", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, segmentName, segmentId);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::IsSegmentFinished(::StringW segmentId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "IsSegmentFinished",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, segmentId);
}
inline ::BeatSaber::Analytics::Gameplay::SegmentState* BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::GetSegmentState(::StringW segmentId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "GetSegmentState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::SegmentState*, false>(this, ___internal_method, segmentId);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSeqNum(::StringW segmentId, int32_t seqNum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "UpdateSeqNum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentId, seqNum);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::UpdateSettings(::StringW segmentId, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "UpdateSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentId, settings);
}
inline bool BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::RemoveSegment(::StringW segmentName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "RemoveSegment",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, segmentName);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::MarkSegmentAsFinished(::StringW segmentId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(), "MarkSegmentAsFinished",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentId);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache::EventsBuilderSharedCache() {}
