#pragma once
// IWYU pragma private; include "Unity\Profiling\LowLevel\Unsafe\ProfilerUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerUnsafeUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerCategoryDescription_def.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategoryColor_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterOptions_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateCategory__Unmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint8_t*, int32_t, ::Unity::Profiling::ProfilerCategoryColor)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCategory__Unmanaged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5e498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                         { "CreateCategory__Unmanaged", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerCategoryColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.GetCategoryDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription (*)(uint16_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a5d100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(), { "GetCategoryDescription", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6a5d2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                         { "CreateMarker", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateMarker__Unmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(uint8_t*, int32_t, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker__Unmanaged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a5e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                           { "CreateMarker__Unmanaged",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(),
                                                                                               ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.SetMarkerMetadata__Unmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, uint8_t*, int32_t, uint8_t, uint8_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::SetMarkerMetadata__Unmanaged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a5e5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                           { "SetMarkerMetadata__Unmanaged",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.BeginSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a5d4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(), { "BeginSample", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.BeginSampleWithMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, void*)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSampleWithMetadata)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5e66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                             { "BeginSampleWithMetadata", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.EndSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a5d564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(), { "EndSample", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateCounterValue__Unmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void* (*)(::by_ref<::System::IntPtr>, uint8_t*, int32_t, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, uint8_t, uint8_t, int32_t, ::Unity::Profiling::ProfilerCounterOptions)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCounterValue__Unmanaged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a5e6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                             { "CreateCounterValue__Unmanaged",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(),
                                                                 ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerCounterOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.Utf8ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*, int32_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::Utf8ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6a5d190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                           { "Utf8ToString", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.GetCategoryDescription_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint16_t, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a5e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                            { "GetCategoryDescription_Injected", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateMarker_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                           { "CreateMarker_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint16_t>(),
                                                                                               ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline uint16_t Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCategory__Unmanaged(uint8_t* name, int32_t nameLen, ::Unity::Profiling::ProfilerCategoryColor colorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                       { "CreateCategory__Unmanaged", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerCategoryColor>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, name, nameLen, colorIndex);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription(uint16_t categoryId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(), { "GetCategoryDescription", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>(nullptr, ___internal_method, categoryId);
}
inline ::System::IntPtr Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker(::StringW name, uint16_t categoryId, ::Unity::Profiling::LowLevel::MarkerFlags flags,
                                                                                                int32_t metadataCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                       { "CreateMarker", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name, categoryId, flags, metadataCount);
}
inline ::System::IntPtr Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker__Unmanaged(uint8_t* name, int32_t nameLen, uint16_t categoryId,
                                                                                                           ::Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                         { "CreateMarker__Unmanaged",
                                                                                           {},
                                                                                           { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(),
                                                                                             ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name, nameLen, categoryId, flags, metadataCount);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::SetMarkerMetadata__Unmanaged(::System::IntPtr markerPtr, int32_t index, uint8_t* name, int32_t nameLen, uint8_t type,
                                                                                                    uint8_t unit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                         { "SetMarkerMetadata__Unmanaged",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerPtr, index, name, nameLen, type, unit);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample(::System::IntPtr markerPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(), { "BeginSample", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerPtr);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSampleWithMetadata(::System::IntPtr markerPtr, int32_t metadataCount, void* metadata) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                           { "BeginSampleWithMetadata", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerPtr, metadataCount, metadata);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample(::System::IntPtr markerPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(), { "EndSample", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerPtr);
}
inline void* Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCounterValue__Unmanaged(::by_ref<::System::IntPtr> counterPtr, uint8_t* name, int32_t nameLen, uint16_t categoryId,
                                                                                                      ::Unity::Profiling::LowLevel::MarkerFlags flags, uint8_t dataType, uint8_t dataUnit,
                                                                                                      int32_t dataSize, ::Unity::Profiling::ProfilerCounterOptions counterOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                           { "CreateCounterValue__Unmanaged",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(),
                                                               ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerCounterOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, counterPtr, name, nameLen, categoryId, flags, dataType, dataUnit, dataSize, counterOptions);
}
inline ::StringW Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::Utf8ToString(uint8_t* chars, int32_t charsLen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                         { "Utf8ToString", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, chars, charsLen);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription_Injected(uint16_t categoryId,
                                                                                                       ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                          { "GetCategoryDescription_Injected", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, categoryId, ret);
}
inline ::System::IntPtr Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, uint16_t categoryId,
                                                                                                         ::Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>(),
                                                                                         { "CreateMarker_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint16_t>(),
                                                                                             ::i2c::type_of<::Unity::Profiling::LowLevel::MarkerFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name, categoryId, flags, metadataCount);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::ProfilerUnsafeUtility() {}
