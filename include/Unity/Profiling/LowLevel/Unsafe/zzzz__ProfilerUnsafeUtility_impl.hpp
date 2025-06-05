#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerUnsafeUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerCategoryDescription_def.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategoryColor_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterOptions_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateCategory__Unmanaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::Unity::Profiling::ProfilerCategoryColor)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCategory__Unmanaged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48613f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(),
                                                 "CreateCategory__Unmanaged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategoryColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.GetCategoryDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription (*)(uint16_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4860718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "GetCategoryDescription",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4860910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateMarker", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::MarkerFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateMarker__Unmanaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, int32_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker__Unmanaged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4861488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateMarker__Unmanaged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::MarkerFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.SetMarkerMetadata__Unmanaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, uint8_t, uint8_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::SetMarkerMetadata__Unmanaged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48614f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "SetMarkerMetadata__Unmanaged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.BeginSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4860a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "BeginSample",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.EndSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4860b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "EndSample",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateCounterValue__Unmanaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(
    ::ByRef<::System::IntPtr>, ::cordl_internals::Ptr<uint8_t>, int32_t, uint16_t, ::Unity::Profiling::LowLevel::MarkerFlags, uint8_t, uint8_t, int32_t, ::Unity::Profiling::ProfilerCounterOptions)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCounterValue__Unmanaged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4861568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateCounterValue__Unmanaged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::MarkerFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCounterOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.Utf8ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::Utf8ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48607a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "Utf8ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.GetCategoryDescription_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint16_t, ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4861444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "GetCategoryDescription_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>>::get() })));
    return ___internal_method;
  }
};
inline uint16_t Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCategory__Unmanaged(::cordl_internals::Ptr<uint8_t> name, int32_t nameLen,
                                                                                                     ::Unity::Profiling::ProfilerCategoryColor colorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateCategory__Unmanaged",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategoryColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, name, nameLen, colorIndex);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription(uint16_t categoryId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "GetCategoryDescription",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription, false>(nullptr, ___internal_method, categoryId);
}
inline ::System::IntPtr Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker(::StringW name, uint16_t categoryId, ::Unity::Profiling::LowLevel::MarkerFlags flags,
                                                                                                int32_t metadataCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateMarker", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::MarkerFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, name, categoryId, flags, metadataCount);
}
inline ::System::IntPtr Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker__Unmanaged(::cordl_internals::Ptr<uint8_t> name, int32_t nameLen, uint16_t categoryId,
                                                                                                           ::Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateMarker__Unmanaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::MarkerFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, name, nameLen, categoryId, flags, metadataCount);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::SetMarkerMetadata__Unmanaged(::System::IntPtr markerPtr, int32_t index, ::cordl_internals::Ptr<uint8_t> name, int32_t nameLen,
                                                                                                    uint8_t type, uint8_t unit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "SetMarkerMetadata__Unmanaged",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerPtr, index, name, nameLen, type, unit);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample(::System::IntPtr markerPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "BeginSample",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerPtr);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample(::System::IntPtr markerPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "EndSample",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerPtr);
}
inline ::cordl_internals::Ptr<void> Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateCounterValue__Unmanaged(::ByRef<::System::IntPtr> counterPtr, ::cordl_internals::Ptr<uint8_t> name,
                                                                                                                             int32_t nameLen, uint16_t categoryId,
                                                                                                                             ::Unity::Profiling::LowLevel::MarkerFlags flags, uint8_t dataType,
                                                                                                                             uint8_t dataUnit, int32_t dataSize,
                                                                                                                             ::Unity::Profiling::ProfilerCounterOptions counterOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "CreateCounterValue__Unmanaged",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::MarkerFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCounterOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, counterPtr, name, nameLen, categoryId, flags, dataType, dataUnit, dataSize,
                                                                                  counterOptions);
}
inline ::StringW Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::Utf8ToString(::cordl_internals::Ptr<uint8_t> chars, int32_t charsLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "Utf8ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, chars, charsLen);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetCategoryDescription_Injected(uint16_t categoryId,
                                                                                                       ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*>::get(), "GetCategoryDescription_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, categoryId, ret);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::ProfilerUnsafeUtility() {}
