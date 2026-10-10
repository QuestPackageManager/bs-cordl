#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/OpenXRNativeApi.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__OpenXRNativeApi_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__OpenXRResultStatus_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrCreateSpatialContextCompletionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrCreateSpatialDiscoverySnapshotCompletionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrCreateSpatialDiscoverySnapshotCompletionInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrCreateSpatialPersistenceContextCompletionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFutureCancelInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFuturePollInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFuturePollResultEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPersistSpatialEntityCompletionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialAnchorCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferGetInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityComponentTypesEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityFeatureEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentDataQueryConditionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentDataQueryResultEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentTypeEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialContextCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialDiscoverySnapshotCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialEntityFromIdCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialEntityPersistInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialEntityUnpersistInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceScopeEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialUpdateSnapshotCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUnpersistSpatialEntityCompletionEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector2f_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPollFutureEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>,
                                                                                                            ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e3e81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrPollFutureEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPollFutureEXT_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>,
                                                                                                            ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT_native)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3e854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrPollFutureEXT_native",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPollFutureEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>,
                                                                                                                      ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e3e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                                                           { "xrPollFutureEXT",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPollFutureEXT_usingContext_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>,
                                                                                                                      ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT_usingContext_native)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3e904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                                                           { "xrPollFutureEXT_usingContext_native",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPollFutureEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e3e988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrPollFutureEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCancelFutureEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCancelFutureEXT)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3e9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrCancelFutureEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCancelFutureEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCancelFutureEXT)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3ea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCancelFutureEXT", {}, { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCancelFutureEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCancelFutureEXT)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e3eadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrCancelFutureEXT", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialAnchorEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT const>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialAnchorEXT)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e3eb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialAnchorEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT const>>(),
                                                                 ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialAnchorEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef const>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialAnchorEXT)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e3ebb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialAnchorEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef const>>(),
                                                                 ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialAnchorEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    uint64_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialAnchorEXT)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e3ec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialAnchorEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilitiesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT*)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e3ec94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrEnumerateSpatialCapabilitiesEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilitiesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, uint64_t, ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e3ed40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrEnumerateSpatialCapabilitiesEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilitiesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3ee48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                         { "xrEnumerateSpatialCapabilitiesEXT",
                                           {},
                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilitiesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e3eedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrEnumerateSpatialCapabilitiesEXT",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityComponentTypesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT,
                                                                                                            ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e3efc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityComponentTypesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, ::Unity::Collections::Allocator,
                                                                     ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e3f060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                    ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityComponentTypesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3f198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityComponentTypesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, ::Unity::Collections::Allocator,
                                                                               ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e3f21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityFeaturesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, uint64_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e3f31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrEnumerateSpatialCapabilityFeaturesEXT",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<uint32_t>(),
                                ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityFeaturesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, ::Unity::Collections::Allocator,
                                                                     ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e3f3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialCapabilityFeaturesEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                    ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityFeaturesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e3f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrEnumerateSpatialCapabilityFeaturesEXT",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialCapabilityFeaturesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, ::Unity::Collections::Allocator,
                                                                               ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e3f580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialCapabilityFeaturesEXT",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialContextAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextAsyncEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3f674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialContextAsyncEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const>>(),
                                                                 ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialContextAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextAsyncEXT)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3f708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                         { "xrCreateSpatialContextAsyncEXT",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialContextCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3f78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrCreateSpatialContextCompleteEXT",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialContextCompleteEXT_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT_native)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3f7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrCreateSpatialContextCompleteEXT_native",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialContextCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
            { "xrCreateSpatialContextCompleteEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialContextCompleteEXT_usingContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT_usingContext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e3f87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrCreateSpatialContextCompleteEXT_usingContext",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrDestroySpatialContextEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialContextEXT)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3f900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialContextEXT", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialEntityFromIdEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialEntityFromIdEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3f97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrCreateSpatialEntityFromIdEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT const>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialEntityFromIdEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialEntityFromIdEXT)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e3fa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrCreateSpatialEntityFromIdEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrDestroySpatialEntityEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialEntityEXT)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3fa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialEntityEXT", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialDiscoverySnapshotAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotAsyncEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3facc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrCreateSpatialDiscoverySnapshotAsyncEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT const>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialDiscoverySnapshotCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const>,
                                                                     ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3fb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                         { "xrCreateSpatialDiscoverySnapshotCompleteEXT",
                                           {},
                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialDiscoverySnapshotCompleteEXT_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const>,
                                                                     ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT_native)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3fb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                         { "xrCreateSpatialDiscoverySnapshotCompleteEXT_native",
                                           {},
                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialDiscoverySnapshotCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3fc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialDiscoverySnapshotCompleteEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3fc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrQuerySpatialComponentDataEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryConditionEXT const>, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrQuerySpatialComponentDataEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3fce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrQuerySpatialComponentDataEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryConditionEXT const>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferStringEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, uint8_t*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferStringEXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e3fd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferStringEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferStringEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferStringEXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e3fe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferStringEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferUint8EXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, uint8_t*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint8EXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e3ff2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferUint8EXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferUint8EXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint8EXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e3ffd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferUint8EXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferUint16EXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, uint16_t*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint16EXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e400e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferUint16EXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferUint16EXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint16EXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e4018c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferUint16EXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferUint32EXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, uint32_t*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint32EXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e40294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferUint32EXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferUint32EXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint32EXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e40340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferUint32EXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferFloatEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, float_t*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferFloatEXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e40448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferFloatEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<float_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferFloatEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<float_t>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferFloatEXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e404f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferFloatEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<float_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferVector2fEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector2fEXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e405fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrGetSpatialBufferVector2fEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferVector2fEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>, ::Unity::Collections::Allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>>)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector2fEXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e406a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferVector2fEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferVector3fEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>,
                                                                                                            uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector3fEXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e407b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrGetSpatialBufferVector3fEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrGetSpatialBufferVector3fEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>, ::Unity::Collections::Allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>>)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector3fEXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e4085c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrGetSpatialBufferVector3fEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialUpdateSnapshotEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialUpdateSnapshotEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e40964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrCreateSpatialUpdateSnapshotEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT const>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialUpdateSnapshotEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    uint64_t, uint32_t, uint64_t*, uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*, ::by_ref<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialUpdateSnapshotEXT)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e409f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialUpdateSnapshotEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialUpdateSnapshotEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    uint64_t, ::Unity::Collections::NativeArray_1<uint64_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>, ::by_ref<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialUpdateSnapshotEXT)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e40aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrCreateSpatialUpdateSnapshotEXT",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint64_t>>(),
                                ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrDestroySpatialSnapshotEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialSnapshotEXT)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e40b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialSnapshotEXT", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextAsyncEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e40bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrCreateSpatialPersistenceContextAsyncEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextAsyncEXT)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e40c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrCreateSpatialPersistenceContextAsyncEXT",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT, ::by_ref<uint64_t>)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextAsyncEXT)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e40cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
            { "xrCreateSpatialPersistenceContextAsyncEXT", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialPersistenceScopesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT*)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e40d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrEnumerateSpatialPersistenceScopesEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialPersistenceScopesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    uint64_t, uint64_t, ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e40dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialPersistenceScopesEXT",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialPersistenceScopesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint32_t, ::by_ref<uint32_t>, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT*)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e40ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrEnumerateSpatialPersistenceScopesEXT",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrEnumerateSpatialPersistenceScopesEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(
    ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e40f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                { "xrEnumerateSpatialPersistenceScopesEXT",
                                                  {},
                                                  { ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e41050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialPersistenceContextCompleteEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextCompleteEXT_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT_native)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e41088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrCreateSpatialPersistenceContextCompleteEXT_native",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e4111c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                         { "xrCreateSpatialPersistenceContextCompleteEXT",
                                           {},
                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrCreateSpatialPersistenceContextCompleteEXT_usingContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT_usingContext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e4113c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                         { "xrCreateSpatialPersistenceContextCompleteEXT_usingContext",
                                           {},
                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrDestroySpatialPersistenceContextEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialPersistenceContextEXT)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e411c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                                                           { "xrDestroySpatialPersistenceContextEXT", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPersistSpatialEntityAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPersistSpatialEntityAsyncEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e4123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrPersistSpatialEntityAsyncEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT const>>(),
                                                                 ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPersistSpatialEntityCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPersistSpatialEntityCompleteEXT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e412d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrPersistSpatialEntityCompleteEXT",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrPersistSpatialEntityCompleteEXT_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPersistSpatialEntityCompleteEXT_native)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e41310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                            { "xrPersistSpatialEntityCompleteEXT_native",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrUnpersistSpatialEntityAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT const>, ::by_ref<uint64_t>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityAsyncEXT)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e413a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrUnpersistSpatialEntityAsyncEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT const>>(),
                                                                 ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrUnpersistSpatialEntityAsyncEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid, ::by_ref<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityAsyncEXT)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e41438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
            { "xrUnpersistSpatialEntityAsyncEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrUnpersistSpatialEntityCompleteEXT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityCompleteEXT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e41484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrUnpersistSpatialEntityCompleteEXT",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi.xrUnpersistSpatialEntityCompleteEXT_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(uint64_t, uint64_t, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT>)>(
        &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityCompleteEXT_native)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e414b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                             { "xrUnpersistSpatialEntityCompleteEXT_native",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT(uint64_t instance, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                       ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrPollFutureEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, pollInfo, pollResult);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT_native(uint64_t instance,
                                                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                              ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrPollFutureEXT_native",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, pollInfo, pollResult);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                       ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                                                         { "xrPollFutureEXT",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, pollInfo, pollResult);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT_usingContext_native(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                                           ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                                                         { "xrPollFutureEXT_usingContext_native",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, pollInfo, pollResult);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPollFutureEXT(uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrPollFutureEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, future, pollResult);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCancelFutureEXT(uint64_t instance,
                                                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const> cancelInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                       { "xrCancelFutureEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, cancelInfo);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCancelFutureEXT(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const> cancelInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCancelFutureEXT", {}, { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, cancelInfo);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCancelFutureEXT(uint64_t future) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrCancelFutureEXT", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialAnchorEXT(uint64_t spatialContext,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT const> createInfo,
                                                                                ::by_ref<uint64_t> anchorEntityId, ::by_ref<uint64_t> anchorEntity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialAnchorEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, createInfo, anchorEntityId, anchorEntity);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialAnchorEXT(uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef const> pose,
                                                                                ::by_ref<uint64_t> anchorEntityId, ::by_ref<uint64_t> anchorEntity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialAnchorEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef const>>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, spatialContext, pose, anchorEntityId, anchorEntity);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialAnchorEXT(uint64_t spatialContext, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                ::by_ref<uint64_t> anchorEntityId, ::by_ref<uint64_t> anchorEntity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialAnchorEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, spatialContext, position, rotation, anchorEntityId, anchorEntity);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT(uint64_t instance, uint64_t systemId, uint32_t capabilityCountInput, ::by_ref<uint32_t> capabilityCountOutput,
                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT* capabilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialCapabilitiesEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, capabilityCountInput, capabilityCountOutput,
                                                                                               capabilities);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT(
    uint64_t instance, uint64_t systemId, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>> capabilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialCapabilitiesEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, allocator, capabilities);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT(uint32_t capabilityCountInput, ::by_ref<uint32_t> capabilityCountOutput,
                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT* capabilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                       { "xrEnumerateSpatialCapabilitiesEXT",
                                         {},
                                         { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, capabilityCountInput, capabilityCountOutput, capabilities);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilitiesEXT(
    ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>> capabilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialCapabilitiesEXT",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, allocator, capabilities);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT(
    uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
    ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT> capabilityComponents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, capability, capabilityComponents);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT(
    uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>> componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                  ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, capability, allocator, componentTypes);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT> capabilityComponents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, capability, capabilityComponents);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityComponentTypesEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>> componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrEnumerateSpatialCapabilityComponentTypesEXT",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, capability, allocator, componentTypes);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT(
    uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, uint32_t capabilityFeatureCapacityInput,
    ::by_ref<uint32_t> capabilityFeatureCountOutput, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT* capabilityFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrEnumerateSpatialCapabilityFeaturesEXT",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<uint32_t>(),
                              ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, capability, capabilityFeatureCapacityInput,
                                                                                               capabilityFeatureCountOutput, capabilityFeatures);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT(
    uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>> capabilityFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrEnumerateSpatialCapabilityFeaturesEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(),
                                                  ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, capability, allocator, capabilityFeatures);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                                                                                               uint32_t capabilityFeatureCapacityInput, ::by_ref<uint32_t> capabilityFeatureCountOutput,
                                                                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT* capabilityFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialCapabilityFeaturesEXT",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, capability, capabilityFeatureCapacityInput,
                                                                                                         capabilityFeatureCountOutput, capabilityFeatures);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialCapabilityFeaturesEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>> capabilityFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrEnumerateSpatialCapabilityFeaturesEXT",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, capability, allocator, capabilityFeatures);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextAsyncEXT(
    uint64_t session, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialContextAsyncEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, session, createInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextAsyncEXT(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialContextAsyncEXT",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, createInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT(uint64_t session, uint64_t future,
                                                                                         ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrCreateSpatialContextCompleteEXT",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, session, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT_native(uint64_t session, uint64_t future,
                                                                                                ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrCreateSpatialContextCompleteEXT_native",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, session, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT(uint64_t future,
                                                                                         ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
          { "xrCreateSpatialContextCompleteEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialContextCompleteEXT_usingContext(
    uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialContextCompleteEXT_usingContext",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialContextEXT(uint64_t spatialContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialContextEXT", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialEntityFromIdEXT(
    uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT const> createInfo, ::by_ref<uint64_t> spatialEntity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialEntityFromIdEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, createInfo, spatialEntity);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialEntityFromIdEXT(uint64_t spatialContext, uint64_t entityId,
                                                                                                                                              ::by_ref<uint64_t> spatialEntity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialEntityFromIdEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, entityId, spatialEntity);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialEntityEXT(uint64_t spatialEntity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialEntityEXT", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialEntity);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotAsyncEXT(
    uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialDiscoverySnapshotAsyncEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT const>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, createInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT(
    uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const> createSnapshotCompletionInfo,
    ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                       { "xrCreateSpatialDiscoverySnapshotCompleteEXT",
                                         {},
                                         { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, createSnapshotCompletionInfo, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT_native(
    uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const> createSnapshotCompletionInfo,
    ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                       { "xrCreateSpatialDiscoverySnapshotCompleteEXT_native",
                                         {},
                                         { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, createSnapshotCompletionInfo, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT(
    uint64_t spatialContext, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialDiscoverySnapshotCompleteEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, spatialContext, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext(
    uint64_t spatialContext, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, spatialContext, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrQuerySpatialComponentDataEXT(
    uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryConditionEXT const> queryCondition,
    ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT> queryResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrQuerySpatialComponentDataEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryConditionEXT const>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, queryCondition, queryResult);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferStringEXT(uint64_t snapshot,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                   uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint8_t* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferStringEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferStringEXT(uint64_t snapshot,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                   ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferStringEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint8EXT(uint64_t snapshot,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                  uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint8_t* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferUint8EXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint8EXT(uint64_t snapshot,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                  ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferUint8EXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint16EXT(uint64_t snapshot,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                   uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint16_t* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferUint16EXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint16EXT(uint64_t snapshot,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                   ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint16_t>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferUint16EXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint32EXT(uint64_t snapshot,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                   uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint32_t* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferUint32EXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferUint32EXT(uint64_t snapshot,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                   ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferUint32EXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferFloatEXT(uint64_t snapshot,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                  uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, float_t* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferFloatEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<float_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferFloatEXT(uint64_t snapshot,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                  ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<float_t>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferFloatEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<float_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector2fEXT(
    uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrGetSpatialBufferVector2fEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector2fEXT(
    uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferVector2fEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector3fEXT(
    uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrGetSpatialBufferVector3fEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, bufferCapacityInput, bufferCountOutput, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrGetSpatialBufferVector3fEXT(
    uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrGetSpatialBufferVector3fEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const>>(),
                                                               ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot, info, allocator, buffer);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialUpdateSnapshotEXT(
    uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT const> createInfo, ::by_ref<uint64_t> snapshot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialUpdateSnapshotEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT const>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, spatialContext, createInfo, snapshot);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialUpdateSnapshotEXT(uint64_t spatialContext, uint32_t entityCount, uint64_t* entities, uint32_t componentTypeCount,
                                                                                        ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes,
                                                                                        ::by_ref<uint64_t> snapshot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialUpdateSnapshotEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, spatialContext, entityCount, entities, componentTypeCount,
                                                                                                         componentTypes, snapshot);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialUpdateSnapshotEXT(
    uint64_t spatialContext, ::Unity::Collections::NativeArray_1<uint64_t> entities,
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes, ::by_ref<uint64_t> snapshot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrCreateSpatialUpdateSnapshotEXT",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint64_t>>(),
                              ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, spatialContext, entities, componentTypes, snapshot);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialSnapshotEXT(uint64_t snapshot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialSnapshotEXT", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, snapshot);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextAsyncEXT(
    uint64_t session, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialPersistenceContextAsyncEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, session, createInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextAsyncEXT(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrCreateSpatialPersistenceContextAsyncEXT",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, createInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextAsyncEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT persistenceScope,
                                                                                                 ::by_ref<uint64_t> future) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
          { "xrCreateSpatialPersistenceContextAsyncEXT", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, persistenceScope, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT(uint64_t instance, uint64_t systemId, uint32_t persistenceScopeCapacityInput,
                                                                                              ::by_ref<uint32_t> persistenceScopeCountOutput,
                                                                                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT* persistenceScopes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrEnumerateSpatialPersistenceScopesEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, persistenceScopeCapacityInput,
                                                                                               persistenceScopeCountOutput, persistenceScopes);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT(
    uint64_t instance, uint64_t systemId, ::Unity::Collections::Allocator allocator,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>> persistenceScopes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrEnumerateSpatialPersistenceScopesEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, instance, systemId, allocator, persistenceScopes);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT(uint32_t persistenceScopeCapacityInput, ::by_ref<uint32_t> persistenceScopeCountOutput,
                                                                                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT* persistenceScopes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrEnumerateSpatialPersistenceScopesEXT",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, persistenceScopeCapacityInput, persistenceScopeCountOutput,
                                                                                                         persistenceScopes);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrEnumerateSpatialPersistenceScopesEXT(
    ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>> persistenceScopes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrEnumerateSpatialPersistenceScopesEXT",
                                                {},
                                                { ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, allocator, persistenceScopes);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT(
    uint64_t session, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialPersistenceContextCompleteEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, session, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT_native(
    uint64_t session, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrCreateSpatialPersistenceContextCompleteEXT_native",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, session, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT(
    uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialPersistenceContextCompleteEXT",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrCreateSpatialPersistenceContextCompleteEXT_usingContext(
    uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                              { "xrCreateSpatialPersistenceContextCompleteEXT_usingContext",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrDestroySpatialPersistenceContextEXT(uint64_t persistenceContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(), { "xrDestroySpatialPersistenceContextEXT", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPersistSpatialEntityAsyncEXT(
    uint64_t persistenceContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT const> persistInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrPersistSpatialEntityAsyncEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, persistInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPersistSpatialEntityCompleteEXT(uint64_t persistenceContext, uint64_t future,
                                                                                         ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrPersistSpatialEntityCompleteEXT",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrPersistSpatialEntityCompleteEXT_native(uint64_t persistenceContext, uint64_t future,
                                                                                                ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrPersistSpatialEntityCompleteEXT_native",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityAsyncEXT(
    uint64_t persistenceContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT const> unpersistInfo, ::by_ref<uint64_t> future) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                                                           { "xrUnpersistSpatialEntityAsyncEXT",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT const>>(),
                                                               ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, unpersistInfo, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityAsyncEXT(uint64_t persistenceContext, ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid,
                                                                                        ::by_ref<uint64_t> future) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
          { "xrUnpersistSpatialEntityAsyncEXT", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, persistUuid, future);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityCompleteEXT(uint64_t persistenceContext, uint64_t future,
                                                                                           ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrUnpersistSpatialEntityCompleteEXT",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, future, completion);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::xrUnpersistSpatialEntityCompleteEXT_native(uint64_t persistenceContext, uint64_t future,
                                                                                                  ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT> completion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*>(),
                          { "xrUnpersistSpatialEntityCompleteEXT_native",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, persistenceContext, future, completion);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi::OpenXRNativeApi() {}
