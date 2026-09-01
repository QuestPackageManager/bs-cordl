#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeBitArray.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c2f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(uint64_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64ce2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::GetBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::IsSet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c2ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::Find)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::Find)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.TestNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::TestNone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c3058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.TestAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::TestAny)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c3088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.TestAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::TestAll)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c30c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.CountBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CountBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c3108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.CheckArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CheckArgs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64ce7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "CheckArgs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.CheckArgsPosCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CheckArgsPosCount)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x64ce8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                             { "CheckArgsPosCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly.CheckArgsUlong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CheckArgsUlong)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x64cea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                           { "CheckArgsUlong", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::get_IsCreated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::get_IsEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::_ctor(uint64_t* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
inline uint64_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::GetBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::IsSet(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::Find(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::Find(int32_t pos, int32_t count, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, count, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::TestNone(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::TestAny(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::TestAll(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CountBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CheckArgs(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "CheckArgs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CheckArgsPosCount(int32_t begin, int32_t count, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                           { "CheckArgsPosCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, count, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::CheckArgsUlong(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(),
                                                                                         { "CheckArgsUlong", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, numBits);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "uint64_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::UnsafeBitArray_ReadOnly(uint64_t* Ptr, int32_t Length) noexcept {
  this->Ptr = Ptr;
  this->Length = Length;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly::UnsafeBitArray_ReadOnly() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(void*, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64cd5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(
    int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::NativeArrayOptions)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c248c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Alloc)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64c2420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "Alloc", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Free)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64c263c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                            { "Free", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c24bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64ce04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Realloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Realloc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x64ce06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Realloc", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Resize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64c24fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                             { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::SetCapacity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c257c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.TrimExcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TrimExcess)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c25a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TrimExcess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64cdfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(::Unity::Jobs::JobHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Dispose)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64ce16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c2838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, bool)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Set)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64ce238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "Set", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, bool)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Set)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64c28bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, bool, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::SetBits)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64c28f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, uint64_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::SetBits)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64c29a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::GetBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::IsSet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c2aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CopyUlong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(
    int32_t, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>, int32_t, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CopyUlong)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64ce260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                             { "CopyUlong",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Copy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64c2adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(
    int32_t, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>, int32_t, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Copy)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x64c2b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
            { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Find)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c2dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Find)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c2de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.TestNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TestNone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.TestAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TestAny)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.TestAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TestAll)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CountBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CountBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.AsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::AsReadOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c2f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "AsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CheckSizeMultipleOf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckSizeMultipleOf8)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64ce2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CheckSizeMultipleOf8", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CheckArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64ce35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CheckArgs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CheckArgsPosCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgsPosCount)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x64ce438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                             { "CheckArgsPosCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CheckArgsUlong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgsUlong)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x64ce58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                           { "CheckArgsUlong", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray.CheckArgsCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>, int32_t, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>, int32_t, int32_t)>(
        &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgsCopy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x64ce6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                { "CheckArgsCopy",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::_ctor(void* ptr, int32_t sizeInBytes, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                              { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, sizeInBytes, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::_ctor(int32_t numBits, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                        ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, numBits, allocator, options);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Alloc(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "Alloc", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*>(nullptr, ___internal_method, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* data, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                          { "Free", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, allocator);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Realloc(int32_t capacityInBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Realloc", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacityInBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Resize(int32_t numBits, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, numBits, options);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::SetCapacity(int32_t capacityInBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacityInBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TrimExcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Set(uint64_t* ptr, int32_t pos, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "Set", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, pos, value);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Set(int32_t pos, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::SetBits(int32_t pos, bool value, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::SetBits(int32_t pos, uint64_t value, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value, numBits);
}
inline uint64_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::GetBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::IsSet(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CopyUlong(int32_t dstPos, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> srcBitArray, int32_t srcPos,
                                                                            int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                           { "CopyUlong",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcBitArray, srcPos, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Copy(int32_t dstPos, int32_t srcPos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcPos, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Copy(int32_t dstPos, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> srcBitArray, int32_t srcPos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
          { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcBitArray, srcPos, numBits);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Find(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::Find(int32_t pos, int32_t count, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                                                         { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, count, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TestNone(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TestAny(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::TestAll(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CountBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckSizeMultipleOf8(int32_t sizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CheckSizeMultipleOf8", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sizeInBytes);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgs(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CheckArgs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgsPosCount(int32_t begin, int32_t count, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                                           { "CheckArgsPosCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, count, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgsUlong(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), { "CheckArgsUlong", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, numBits);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::CheckArgsCopy(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> dstBitArray, int32_t dstPos,
                                                                                ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> srcBitArray, int32_t srcPos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(),
                                              { "CheckArgsCopy",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dstBitArray, dstPos, srcBitArray, srcPos, numBits);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "uint64_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}")
// }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::UnsafeBitArray(uint64_t* Ptr, int32_t Length, int32_t Capacity,
                                                                                 ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept {
  this->Ptr = Ptr;
  this->Length = Length;
  this->Capacity = Capacity;
  this->Allocator = Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray::UnsafeBitArray() {}
