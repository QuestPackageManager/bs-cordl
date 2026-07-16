#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString32Bytes.hpp"
#include "Unity/Collections/zzzz__FixedBytes30_impl.hpp"
#include "Unity/Collections/zzzz__Unicode_impl.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString4096Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__FormatError_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeText_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.get_UTF8MaxLengthInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Collections::FixedString32Bytes::get_UTF8MaxLengthInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a94f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_UTF8MaxLengthInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a9500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::GetUnsafePtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a9550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "GetUnsafePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a9558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.set_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::set_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a9560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a9570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::set_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a9578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.TryResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::FixedString32Bytes::TryResize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64a957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                             { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a962c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::get_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(int32_t, uint8_t)>(&::Unity::Collections::FixedString32Bytes::set_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.ElementAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint8_t> (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::ElementAt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<uint8_t>)>(&::Unity::Collections::FixedString32Bytes::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Add", {}, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString32Bytes_Enumerator (::Unity::Collections::FixedString32Bytes::*)()>(
    &::Unity::Collections::FixedString32Bytes::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a968c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)(::StringW)>(&::Unity::Collections::FixedString32Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a96ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::StringW)>(&::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64a96d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.AsFixedList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::FixedList32Bytes_1<uint8_t>> (::Unity::Collections::FixedString32Bytes::*)()>(
    &::Unity::Collections::FixedString32Bytes::AsFixedList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64a9760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "AsFixedList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::StringW)>(&::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a97a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (::Unity::Collections::FixedString32Bytes::*)(::StringW)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a97b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::Unicode_Rune, int32_t)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::Unicode_Rune, int32_t)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a981c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(uint8_t*, int32_t)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64a9888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64a991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64a99ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::FixedString32Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a9a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a9aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64a9b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a9bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a9bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::FixedString32Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a9bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a9c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64a9ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a9d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a9d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Implicit___Unity__Collections__FixedString64Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString64Bytes (*)(::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString64Bytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a9d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::FixedString32Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a9da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a9e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64a9e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a9f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a9f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Implicit___Unity__Collections__FixedString128Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString128Bytes (*)(::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString128Bytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64a9f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::FixedString32Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a9f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a9fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a9ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64aa05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64aa118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64aa130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Implicit___Unity__Collections__FixedString512Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString512Bytes (*)(::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString512Bytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64aa134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::FixedString32Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64aa198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64aa1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString32Bytes::*)(::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64aa200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64aa26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64aa328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                         { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64aa340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Implicit___Unity__Collections__FixedString4096Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString4096Bytes (*)(::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString4096Bytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64aa344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.op_Implicit___Unity__Collections__FixedString32Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString32Bytes (*)(::StringW)>(
    &::Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString32Bytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64aa3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a9504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString32Bytes::*)()>(&::Unity::Collections::FixedString32Bytes::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64aa3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes::*)(::System::Object*)>(&::Unity::Collections::FixedString32Bytes::Equals)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x64aa408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CheckIndexInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::CheckIndexInRange)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x64aa634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CheckLengthInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::CheckLengthInRange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x64aa728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckLengthInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CheckCapacityInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes::*)(int32_t)>(&::Unity::Collections::FixedString32Bytes::CheckCapacityInRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64aa810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckCapacityInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CheckCopyError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::CopyError, ::StringW)>(&::Unity::Collections::FixedString32Bytes::CheckCopyError)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64aa8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                             { "CheckCopyError", {}, { ::i2c::type_of<::Unity::Collections::CopyError>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes.CheckFormatError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::FormatError)>(&::Unity::Collections::FixedString32Bytes::CheckFormatError)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64aa938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckFormatError", {}, { ::i2c::type_of<::Unity::Collections::FormatError>() } })));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::FixedString32Bytes::get_UTF8MaxLengthInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_UTF8MaxLengthInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW Unity::Collections::FixedString32Bytes::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::FixedString32Bytes::GetUnsafePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "GetUnsafePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString32Bytes::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString32Bytes::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::FixedString32Bytes::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString32Bytes::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Unity::Collections::FixedString32Bytes::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                           { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, newLength, clearOptions);
}
inline bool Unity::Collections::FixedString32Bytes::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint8_t Unity::Collections::FixedString32Bytes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, index);
}
inline void Unity::Collections::FixedString32Bytes::set_Item(int32_t index, uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::by_ref<uint8_t> Unity::Collections::FixedString32Bytes::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<uint8_t>>(*this, ___internal_method, index);
}
inline void Unity::Collections::FixedString32Bytes::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString32Bytes::Add(::by_ref<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Add", {}, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::FixedString32Bytes_Enumerator Unity::Collections::FixedString32Bytes::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString32Bytes_Enumerator>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString32Bytes::CompareTo(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::by_ref<::Unity::Collections::FixedList32Bytes_1<uint8_t>> Unity::Collections::FixedString32Bytes::AsFixedList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "AsFixedList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::FixedList32Bytes_1<uint8_t>>>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::StringW source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline ::Unity::Collections::CopyError Unity::Collections::FixedString32Bytes::Initialize(::StringW source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(*this, ___internal_method, source);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::Unity::Collections::Unicode_Rune rune, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rune, count);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(::Unity::Collections::Unicode_Rune rune, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, rune, count);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(uint8_t* srcBytes, int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, srcBytes, srcLength);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString32Bytes::CompareTo(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::by_ref<::Unity::Collections::FixedString32Bytes> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(::by_ref<::Unity::Collections::FixedString32Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString32Bytes::op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString32Bytes::CompareTo(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::by_ref<::Unity::Collections::FixedString64Bytes> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(::by_ref<::Unity::Collections::FixedString64Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString32Bytes::op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FixedString64Bytes Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString64Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes>(nullptr, ___internal_method, fs);
}
inline int32_t Unity::Collections::FixedString32Bytes::CompareTo(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::by_ref<::Unity::Collections::FixedString128Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(::by_ref<::Unity::Collections::FixedString128Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString32Bytes::op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FixedString128Bytes Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString128Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString128Bytes>(nullptr, ___internal_method, fs);
}
inline int32_t Unity::Collections::FixedString32Bytes::CompareTo(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::by_ref<::Unity::Collections::FixedString512Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(::by_ref<::Unity::Collections::FixedString512Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString32Bytes::op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FixedString512Bytes Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString512Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes>(nullptr, ___internal_method, fs);
}
inline int32_t Unity::Collections::FixedString32Bytes::CompareTo(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes::_ctor(::by_ref<::Unity::Collections::FixedString4096Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString32Bytes::Initialize(::by_ref<::Unity::Collections::FixedString4096Bytes> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString32Bytes::op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FixedString4096Bytes
Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString4096Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString4096Bytes>(nullptr, ___internal_method, fs);
}
inline ::Unity::Collections::FixedString32Bytes Unity::Collections::FixedString32Bytes::op_Implicit___Unity__Collections__FixedString32Bytes(::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString32Bytes>(nullptr, ___internal_method, b);
}
inline ::StringW Unity::Collections::FixedString32Bytes::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString32Bytes::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::FixedString32Bytes::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline void Unity::Collections::FixedString32Bytes::CheckIndexInRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void Unity::Collections::FixedString32Bytes::CheckLengthInRange(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckLengthInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void Unity::Collections::FixedString32Bytes::CheckCapacityInRange(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckCapacityInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void Unity::Collections::FixedString32Bytes::CheckCopyError(::Unity::Collections::CopyError error, ::StringW source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckCopyError", {}, { ::i2c::type_of<::Unity::Collections::CopyError>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error, source);
}
inline void Unity::Collections::FixedString32Bytes::CheckFormatError(::Unity::Collections::FormatError error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes>(), { "CheckFormatError", {}, { ::i2c::type_of<::Unity::Collections::FormatError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr Unity::Collections::FixedString32Bytes::operator ::Unity::Collections::INativeList_1<uint8_t>*() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::FixedString32Bytes::i___Unity__Collections__INativeList_1_uint8_t_() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr Unity::Collections::FixedString32Bytes::operator ::Unity::Collections::IIndexable_1<uint8_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::FixedString32Bytes::i___Unity__Collections__IIndexable_1_uint8_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr Unity::Collections::FixedString32Bytes::operator ::Unity::Collections::IUTF8Bytes*() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::FixedString32Bytes::i___Unity__Collections__IUTF8Bytes() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IComparable_1<::StringW>*() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::FixedString32Bytes::i___System__IComparable_1___StringW_() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IEquatable_1<::StringW>*() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::FixedString32Bytes::i___System__IEquatable_1___StringW_() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::FixedString32Bytes::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::FixedString32Bytes::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::FixedString32Bytes::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::FixedString32Bytes::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::FixedString32Bytes::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::FixedString32Bytes::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::FixedString32Bytes::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::FixedString32Bytes::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::FixedString32Bytes::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::FixedString32Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::FixedString32Bytes::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes30", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Collections::FixedString32Bytes::FixedString32Bytes(uint16_t utf8LengthInBytes, ::Unity::Collections::FixedBytes30 bytes) noexcept {
  this->utf8LengthInBytes = utf8LengthInBytes;
  this->bytes = bytes;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedString32Bytes::FixedString32Bytes() {}
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes_Enumerator::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::FixedString32Bytes_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a969c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes_Enumerator::*)()>(&::Unity::Collections::FixedString32Bytes_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64aa98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString32Bytes_Enumerator::*)()>(&::Unity::Collections::FixedString32Bytes_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64aa990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString32Bytes_Enumerator::*)()>(&::Unity::Collections::FixedString32Bytes_Enumerator::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64aa9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Unicode_Rune (::Unity::Collections::FixedString32Bytes_Enumerator::*)()>(
    &::Unity::Collections::FixedString32Bytes_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64aa9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString32Bytes_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Collections::FixedString32Bytes_Enumerator::*)()>(
    &::Unity::Collections::FixedString32Bytes_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64aa9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::FixedString32Bytes_Enumerator::_ctor(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString32Bytes_Enumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::FixedString32Bytes_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString32Bytes_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Collections::Unicode_Rune Unity::Collections::FixedString32Bytes_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Unicode_Rune>(*this, ___internal_method);
}
inline ::System::Object* Unity::Collections::FixedString32Bytes_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString32Bytes_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Unity::Collections::FixedString32Bytes_Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::Collections::FixedString32Bytes_Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::FixedString32Bytes_Enumerator::FixedString32Bytes_Enumerator(::Unity::Collections::FixedString32Bytes target, int32_t offset,
                                                                                             ::Unity::Collections::Unicode_Rune current) noexcept {
  this->target = target;
  this->offset = offset;
  this->current = current;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedString32Bytes_Enumerator::FixedString32Bytes_Enumerator() {}
