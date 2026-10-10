#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString512Bytes.hpp"
#include "Unity/Collections/zzzz__FixedBytes510_impl.hpp"
#include "Unity/Collections/zzzz__Unicode_impl.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__FixedList512Bytes_1_def.hpp"
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
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.get_UTF8MaxLengthInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Collections::FixedString512Bytes::get_UTF8MaxLengthInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68dbb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_UTF8MaxLengthInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dbb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::GetUnsafePtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68dbbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "GetUnsafePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68dbbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.set_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::set_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68dbbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68dbbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::set_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dbc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.TryResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::FixedString512Bytes::TryResize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68dbc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                             { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68dbcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::get_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68dbcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(int32_t, uint8_t)>(&::Unity::Collections::FixedString512Bytes::set_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68dbcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.ElementAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint8_t> (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::ElementAt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68dbce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68dbcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<uint8_t const>)>(&::Unity::Collections::FixedString512Bytes::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68dbcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Add", {}, { ::i2c::type_of<::by_ref<uint8_t const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString512Bytes_Enumerator (::Unity::Collections::FixedString512Bytes::*)()>(
    &::Unity::Collections::FixedString512Bytes::GetEnumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68dbd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)(::StringW)>(&::Unity::Collections::FixedString512Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68dbd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::StringW)>(&::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68dbd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.AsFixedList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::FixedList512Bytes_1<uint8_t>> (::Unity::Collections::FixedString512Bytes::*)()>(
    &::Unity::Collections::FixedString512Bytes::AsFixedList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68dbe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "AsFixedList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::StringW)>(&::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68dbe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (::Unity::Collections::FixedString512Bytes::*)(::StringW)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68dbe74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::Unicode_Rune, int32_t)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x68dbed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::Unicode_Rune, int32_t)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68dbf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(uint8_t*, int32_t)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68dbf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Initialize", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68dc014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText const>)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68dc0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::FixedString512Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68dc13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString32Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68d845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString32Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68dc198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString32Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68dc204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString32Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68dc2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dc2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::FixedString512Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68dc2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString64Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68d9ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString64Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68dc338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString64Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68dc3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString64Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68dc460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dc478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::FixedString512Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68dc47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString128Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68db144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString128Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68dc4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString128Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68dc544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString128Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68dc600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dc618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::FixedString512Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68dc61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString512Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68dc678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString512Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68dc6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString512Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68dc714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString512Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68dc7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dc7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::FixedString512Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68dc7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString4096Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68dc830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (::Unity::Collections::FixedString512Bytes::*)(::by_ref<::Unity::Collections::FixedString4096Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68dc860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString4096Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68dc8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::by_ref<::Unity::Collections::FixedString4096Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68dc988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dc9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Implicit___Unity__Collections__FixedString4096Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString4096Bytes (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>)>(
    &::Unity::Collections::FixedString512Bytes::op_Implicit___Unity__Collections__FixedString4096Bytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68dc9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::StringW)>(&::Unity::Collections::FixedString512Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68dca08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString512Bytes const>, ::StringW)>(&::Unity::Collections::FixedString512Bytes::op_Inequality)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68dcb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.op_Implicit___Unity__Collections__FixedString512Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString512Bytes (*)(::StringW)>(
    &::Unity::Collections::FixedString512Bytes::op_Implicit___Unity__Collections__FixedString512Bytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68dcad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68dbb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString512Bytes::*)()>(&::Unity::Collections::FixedString512Bytes::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68dcb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes::*)(::System::Object*)>(&::Unity::Collections::FixedString512Bytes::Equals)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x68dcbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CheckIndexInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::CheckIndexInRange)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68dce08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CheckLengthInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::CheckLengthInRange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x68dcefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckLengthInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CheckCapacityInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes::*)(int32_t)>(&::Unity::Collections::FixedString512Bytes::CheckCapacityInRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68dcfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckCapacityInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CheckCopyError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::CopyError, ::StringW)>(&::Unity::Collections::FixedString512Bytes::CheckCopyError)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68dd084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                             { "CheckCopyError", {}, { ::i2c::type_of<::Unity::Collections::CopyError>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes.CheckFormatError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::FormatError)>(&::Unity::Collections::FixedString512Bytes::CheckFormatError)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68dd10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckFormatError", {}, { ::i2c::type_of<::Unity::Collections::FormatError>() } })));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::FixedString512Bytes::get_UTF8MaxLengthInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_UTF8MaxLengthInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW Unity::Collections::FixedString512Bytes::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::FixedString512Bytes::GetUnsafePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "GetUnsafePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString512Bytes::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString512Bytes::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::FixedString512Bytes::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString512Bytes::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Unity::Collections::FixedString512Bytes::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                           { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, newLength, clearOptions);
}
inline bool Unity::Collections::FixedString512Bytes::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint8_t Unity::Collections::FixedString512Bytes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, index);
}
inline void Unity::Collections::FixedString512Bytes::set_Item(int32_t index, uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::by_ref<uint8_t> Unity::Collections::FixedString512Bytes::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<uint8_t>>(*this, ___internal_method, index);
}
inline void Unity::Collections::FixedString512Bytes::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString512Bytes::Add(/* [IsReadOnly] */ ::by_ref<uint8_t const> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Add", {}, { ::i2c::type_of<::by_ref<uint8_t const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::FixedString512Bytes_Enumerator Unity::Collections::FixedString512Bytes::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes_Enumerator>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString512Bytes::CompareTo(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::by_ref<::Unity::Collections::FixedList512Bytes_1<uint8_t>> Unity::Collections::FixedString512Bytes::AsFixedList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "AsFixedList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::FixedList512Bytes_1<uint8_t>>>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(::StringW source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline ::Unity::Collections::CopyError Unity::Collections::FixedString512Bytes::Initialize(::StringW source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(*this, ___internal_method, source);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(::Unity::Collections::Unicode_Rune rune, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rune, count);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(::Unity::Collections::Unicode_Rune rune, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, rune, count);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(uint8_t* srcBytes, int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Initialize", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, srcBytes, srcLength);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString512Bytes::CompareTo(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString512Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                   /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString512Bytes::CompareTo(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString512Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                   /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString512Bytes::CompareTo(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString512Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                   /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString512Bytes::CompareTo(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString512Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                   /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString512Bytes::CompareTo(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FormatError Unity::Collections::FixedString512Bytes::Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString512Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a,
                                                                   /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::Unity::Collections::FixedString4096Bytes
Unity::Collections::FixedString512Bytes::op_Implicit___Unity__Collections__FixedString4096Bytes(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> fs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString4096Bytes>(nullptr, ___internal_method, fs);
}
inline bool Unity::Collections::FixedString512Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString512Bytes::op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> a, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes const>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Collections::FixedString512Bytes Unity::Collections::FixedString512Bytes::op_Implicit___Unity__Collections__FixedString512Bytes(::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString512Bytes>(nullptr, ___internal_method, b);
}
inline ::StringW Unity::Collections::FixedString512Bytes::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString512Bytes::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::FixedString512Bytes::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline void Unity::Collections::FixedString512Bytes::CheckIndexInRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void Unity::Collections::FixedString512Bytes::CheckLengthInRange(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckLengthInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void Unity::Collections::FixedString512Bytes::CheckCapacityInRange(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckCapacityInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void Unity::Collections::FixedString512Bytes::CheckCopyError(::Unity::Collections::CopyError error, ::StringW source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckCopyError", {}, { ::i2c::type_of<::Unity::Collections::CopyError>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error, source);
}
inline void Unity::Collections::FixedString512Bytes::CheckFormatError(::Unity::Collections::FormatError error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes>(), { "CheckFormatError", {}, { ::i2c::type_of<::Unity::Collections::FormatError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr Unity::Collections::FixedString512Bytes::operator ::Unity::Collections::INativeList_1<uint8_t>*() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::FixedString512Bytes::i___Unity__Collections__INativeList_1_uint8_t_() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr Unity::Collections::FixedString512Bytes::operator ::Unity::Collections::IIndexable_1<uint8_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::FixedString512Bytes::i___Unity__Collections__IIndexable_1_uint8_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr Unity::Collections::FixedString512Bytes::operator ::Unity::Collections::IUTF8Bytes*() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::FixedString512Bytes::i___Unity__Collections__IUTF8Bytes() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IComparable_1<::StringW>*() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::FixedString512Bytes::i___System__IComparable_1___StringW_() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IEquatable_1<::StringW>*() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::FixedString512Bytes::i___System__IEquatable_1___StringW_() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::FixedString512Bytes::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::FixedString512Bytes::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::FixedString512Bytes::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::FixedString512Bytes::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::FixedString512Bytes::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::FixedString512Bytes::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::FixedString512Bytes::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::FixedString512Bytes::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::FixedString512Bytes::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::FixedString512Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::FixedString512Bytes::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes510",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::FixedString512Bytes::FixedString512Bytes(uint16_t utf8LengthInBytes, ::Unity::Collections::FixedBytes510 bytes) noexcept {
  this->utf8LengthInBytes = utf8LengthInBytes;
  this->bytes = bytes;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedString512Bytes::FixedString512Bytes() {}
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes_Enumerator::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::FixedString512Bytes_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68dbd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes_Enumerator::*)()>(&::Unity::Collections::FixedString512Bytes_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dd160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString512Bytes_Enumerator::*)()>(&::Unity::Collections::FixedString512Bytes_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68dd164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString512Bytes_Enumerator::*)()>(&::Unity::Collections::FixedString512Bytes_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68dd1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Unicode_Rune (::Unity::Collections::FixedString512Bytes_Enumerator::*)()>(
    &::Unity::Collections::FixedString512Bytes_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68dd1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString512Bytes_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Collections::FixedString512Bytes_Enumerator::*)()>(
    &::Unity::Collections::FixedString512Bytes_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68dd1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::FixedString512Bytes_Enumerator::_ctor(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Unity::Collections::FixedString512Bytes_Enumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::FixedString512Bytes_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString512Bytes_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Collections::Unicode_Rune Unity::Collections::FixedString512Bytes_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Unicode_Rune>(*this, ___internal_method);
}
inline ::System::Object* Unity::Collections::FixedString512Bytes_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedString512Bytes_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Unity::Collections::FixedString512Bytes_Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::Collections::FixedString512Bytes_Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::FixedString512Bytes_Enumerator::FixedString512Bytes_Enumerator(::Unity::Collections::FixedString512Bytes target, int32_t offset,
                                                                                               ::Unity::Collections::Unicode_Rune current) noexcept {
  this->target = target;
  this->offset = offset;
  this->current = current;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedString512Bytes_Enumerator::FixedString512Bytes_Enumerator() {}
