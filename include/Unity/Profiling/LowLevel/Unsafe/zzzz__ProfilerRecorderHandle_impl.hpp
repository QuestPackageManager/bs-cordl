#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerRecorderHandle.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderDescription_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)(uint64_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a58748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)()>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a58750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a58764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                             { "GetDescription", {}, { ::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>*)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6a588c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                { "GetAvailable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName__Unmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, uint8_t*, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a58ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                { "GetByName__Unmanaged", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, char16_t*, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a58b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                             { "GetByName", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName_Unsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, char16_t*, int32_t)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a58b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                { "GetByName_Unsafe", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a58840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                             { "GetDescriptionInternal", {}, { ::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetAvailable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a58a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                             { "GetAvailable_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName__Unmanaged_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Profiling::ProfilerCategory>, uint8_t*, int32_t, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a58b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                             { "GetByName__Unmanaged_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName_Unsafe_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Profiling::ProfilerCategory>, char16_t*, int32_t, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a58be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                             { "GetByName_Unsafe_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>)>(
        &::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a58c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                                                           { "GetDescriptionInternal_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>(),
                                                                                               ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>() } })));
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline bool Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                           { "GetDescription", {}, { ::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(nullptr, ___internal_method, handle);
}
inline void
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable(::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>* outRecorderHandleList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                              { "GetAvailable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outRecorderHandleList);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged(::Unity::Profiling::ProfilerCategory category,
                                                                                                                                                     uint8_t* name, int32_t nameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                              { "GetByName__Unmanaged", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName(::Unity::Profiling::ProfilerCategory category, char16_t* name,
                                                                                                                                          int32_t nameLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                           { "GetByName", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe(::Unity::Profiling::ProfilerCategory category,
                                                                                                                                                 char16_t* name, int32_t nameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                              { "GetByName_Unsafe", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription
Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                           { "GetDescriptionInternal", {}, { ::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetAvailable_Injected(::by_ref<::UnityEngine::Bindings::BlittableListWrapper> outRecorderHandleList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                           { "GetAvailable_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outRecorderHandleList);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged_Injected(::by_ref<::Unity::Profiling::ProfilerCategory> category, uint8_t* name, int32_t nameLen,
                                                                                                      ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                           { "GetByName__Unmanaged_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, category, name, nameLen, ret);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Unsafe_Injected(::by_ref<::Unity::Profiling::ProfilerCategory> category, char16_t* name, int32_t nameLen,
                                                                                                  ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                           { "GetByName_Unsafe_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, category, name, nameLen, ret);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> handle,
                                                                                                        ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                                                                                         { "GetDescriptionInternal_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>(),
                                                                                             ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, ret);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle() {}
