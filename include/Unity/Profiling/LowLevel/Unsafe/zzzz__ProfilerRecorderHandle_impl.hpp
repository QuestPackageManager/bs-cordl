#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerRecorderHandle.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderDescription_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)(uint64_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6891324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)()>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x689132c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "get_Valid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6891340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>*)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x68914a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetAvailable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName__Unmanaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(
    ::Unity::Profiling::ProfilerCategory, uint8_t*, int32_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6891690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName__Unmanaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(
    ::Unity::Profiling::ProfilerCategory, char16_t*, int32_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6891750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName_Unsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(
    ::Unity::Profiling::ProfilerCategory, char16_t*, int32_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6891758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName_Unsafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x689141c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetAvailable_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6891654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetAvailable_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableListWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName__Unmanaged_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::Profiling::ProfilerCategory>, uint8_t*, int32_t, ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68916f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName__Unmanaged_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerCategory>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName_Unsafe_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::Profiling::ProfilerCategory>, char16_t*, int32_t, ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68917bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName_Unsafe_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerCategory>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6891818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_get_handle() {
  return this->___handle;
}
constexpr uint64_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_get_handle() const {
  return this->___handle;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_set_handle(uint64_t value) {
  this->___handle = value;
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor(uint64_t handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline bool Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "get_Valid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription, false>(nullptr, ___internal_method, handle);
}
inline void
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable(::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>* outRecorderHandleList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetAvailable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, outRecorderHandleList);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged(::Unity::Profiling::ProfilerCategory category,
                                                                                                                                                     uint8_t* name, int32_t nameLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName__Unmanaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, false>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName(::Unity::Profiling::ProfilerCategory category, char16_t* name,
                                                                                                                                          int32_t nameLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, false>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe(::Unity::Profiling::ProfilerCategory category,
                                                                                                                                                 char16_t* name, int32_t nameLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName_Unsafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, false>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription, false>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable_Injected(::ByRef<::UnityEngine::Bindings::BlittableListWrapper> outRecorderHandleList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetAvailable_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableListWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, outRecorderHandleList);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged_Injected(::ByRef<::Unity::Profiling::ProfilerCategory> category, uint8_t* name, int32_t nameLen,
                                                                                                      ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName__Unmanaged_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerCategory>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, category, name, nameLen, ret);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe_Injected(::ByRef<::Unity::Profiling::ProfilerCategory> category, char16_t* name, int32_t nameLen,
                                                                                                  ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetByName_Unsafe_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerCategory>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, category, name, nameLen, ret);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected(::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> handle,
                                                                                                        ::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(), "GetDescriptionInternal_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, ret);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle() {}
