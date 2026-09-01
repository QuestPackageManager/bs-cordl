#pragma once
// IWYU pragma private; include "Unity\Collections\NativeText.hpp"
#include "Unity/Collections/zzzz__Unicode_impl.hpp"
#include "Unity/Collections/zzzz__NativeText_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString4096Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeText_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeText*)>(
    &::Unity::Collections::NativeText_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c5f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_Capacity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64c5fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(&::Unity::Collections::NativeText_ReadOnly::set_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_IsEmpty)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64c6018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(bool)>(&::Unity::Collections::NativeText_ReadOnly::set_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c60fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_IsEmpty", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_Length)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64c6100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(&::Unity::Collections::NativeText_ReadOnly::set_Length)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(&::Unity::Collections::NativeText_ReadOnly::get_Item)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c6174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(int32_t, uint8_t)>(&::Unity::Collections::NativeText_ReadOnly::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c61c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c61cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.ElementAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint8_t> (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(&::Unity::Collections::NativeText_ReadOnly::ElementAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c61d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::GetUnsafePtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c5d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "GetUnsafePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.TryResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::NativeText_ReadOnly::TryResize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c621c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                                                             { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CheckNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::Unity::Collections::NativeText_ReadOnly::CheckNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c6224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CheckNull", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.ErrorWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::ErrorWrite)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c627c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "ErrorWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::StringW)>(&::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64c62c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::StringW)>(&::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64c63cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c63f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c6450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c64ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText)>(&::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c6508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c6564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c65c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c66b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c66c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c66cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c6728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c6818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c6834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c6890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c6980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                         { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c699c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c69f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c6ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                         { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c6b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c6b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText_ReadOnly>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c6c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                         { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c6c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64c6c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c6ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::System::Object*)>(&::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x64c6d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c7010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText_Enumerator (::Unity::Collections::NativeText_ReadOnly::*)()>(
    &::Unity::Collections::NativeText_ReadOnly::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c7014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeText_ReadOnly::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeText* text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Unity::Collections::NativeText_ReadOnly::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::set_IsEmpty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_IsEmpty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Unity::Collections::NativeText_ReadOnly::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, index);
}
inline void Unity::Collections::NativeText_ReadOnly::set_Item(int32_t index, uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Unity::Collections::NativeText_ReadOnly::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::by_ref<uint8_t> Unity::Collections::NativeText_ReadOnly::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<uint8_t>>(*this, ___internal_method, index);
}
inline uint8_t* Unity::Collections::NativeText_ReadOnly::GetUnsafePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "GetUnsafePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeText_ReadOnly::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                                                           { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, newLength, clearOptions);
}
inline void Unity::Collections::NativeText_ReadOnly::CheckNull(void* dataPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CheckNull", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dataPtr);
}
inline void Unity::Collections::NativeText_ReadOnly::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::ErrorWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "ErrorWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::NativeText other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::NativeText other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText_ReadOnly>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Collections::NativeText_ReadOnly::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Collections::NativeText_ReadOnly::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeText_Enumerator Unity::Collections::NativeText_ReadOnly::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_ReadOnly>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText_Enumerator>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::Unity::Collections::INativeList_1<uint8_t>*() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::NativeText_ReadOnly::i___Unity__Collections__INativeList_1_uint8_t_() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::Unity::Collections::IIndexable_1<uint8_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::NativeText_ReadOnly::i___Unity__Collections__IIndexable_1_uint8_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::Unity::Collections::IUTF8Bytes*() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::NativeText_ReadOnly::i___Unity__Collections__IUTF8Bytes() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::StringW>*() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___StringW_() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::StringW>*() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___StringW_() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeText_ReadOnly::NativeText_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeText_ReadOnly::NativeText_ReadOnly() {}
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)(::Unity::Collections::NativeText)>(&::Unity::Collections::NativeText_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c4ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c5c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)()>(&::Unity::Collections::NativeText_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText_Enumerator::*)()>(&::Unity::Collections::NativeText_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x64c5c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)()>(&::Unity::Collections::NativeText_Enumerator::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c5f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Collections::NativeText_Enumerator::*)()>(
    &::Unity::Collections::NativeText_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64c5f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Unicode_Rune (::Unity::Collections::NativeText_Enumerator::*)()>(
    &::Unity::Collections::NativeText_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c5f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeText_Enumerator::_ctor(::Unity::Collections::NativeText source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline void Unity::Collections::NativeText_Enumerator::_ctor(::Unity::Collections::NativeText_ReadOnly source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline void Unity::Collections::NativeText_Enumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeText_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* Unity::Collections::NativeText_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::Unity::Collections::Unicode_Rune Unity::Collections::NativeText_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Unicode_Rune>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
constexpr Unity::Collections::NativeText_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*
Unity::Collections::NativeText_Enumerator::i___System__Collections__Generic__IEnumerator_1___Unity__Collections__Unicode_Rune_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Unity::Collections::NativeText_Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::Collections::NativeText_Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::NativeText_Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeText_Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeText_ReadOnly", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeText_Enumerator::NativeText_Enumerator(::Unity::Collections::NativeText_ReadOnly target, int32_t offset, ::Unity::Collections::Unicode_Rune current) noexcept {
  this->target = target;
  this->offset = offset;
  this->current = current;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeText_Enumerator::NativeText_Enumerator() {}
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::StringW, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c3ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::StringW, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x64c3cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64c3f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64c3de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c4084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c40e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString32Bytes>,
                                                                                                  ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString32Bytes>, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c4234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString64Bytes>,
                                                                                                  ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c423c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString64Bytes>, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c432c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString128Bytes>,
                                                                                                  ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c4334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString128Bytes>, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c4424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString512Bytes>,
                                                                                                  ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c442c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString512Bytes>, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c451c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString4096Bytes>,
                                                                                                  ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c4524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<::Unity::Collections::FixedString4096Bytes>, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c4614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_Length)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64c461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.set_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::set_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c3e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_Capacity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64c4758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::set_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c47c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.TryResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(&::Unity::Collections::NativeText::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_IsEmpty)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64c486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c4950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::GetUnsafePtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c3e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "GetUnsafePtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::get_Item)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c4960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t, uint8_t)>(&::Unity::Collections::NativeText::set_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64c4a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.ElementAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint8_t> (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::ElementAt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c4a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c4ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::by_ref<uint8_t>)>(&::Unity::Collections::NativeText::Add)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x64c4ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Add", {}, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c4b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c4be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText_ReadOnly)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64c4c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText_ReadOnly)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c4c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c4cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::NativeText::*)(::Unity::Jobs::JobHandle)>(&::Unity::Collections::NativeText::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64c4dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c4e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText_Enumerator (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c4ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::StringW)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64c4ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::StringW)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64c4ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString32Bytes)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c4f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64c4f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c50b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString32Bytes)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c50d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString64Bytes)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c50d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64c5130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c5248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString64Bytes)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString128Bytes)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c5264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64c52c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c53d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString128Bytes)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c53f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString512Bytes)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c53f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64c5450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c5568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString512Bytes)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString4096Bytes)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c5584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64c55e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeText>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c56f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString4096Bytes)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64c4e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ::i2c::class_of<::Unity::Collections::NativeText>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c5714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ::i2c::class_of<::Unity::Collections::NativeText>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeText::*)(::System::Object*)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x64c5760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ::i2c::class_of<::Unity::Collections::NativeText>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::Unity::Collections::NativeText::CheckNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c5a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckNull", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::CheckWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckWriteAndBumpSecondaryVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::CheckWriteAndBumpSecondaryVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c5a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckWriteAndBumpSecondaryVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckIndexInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::CheckIndexInRange)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x64c5a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.ThrowCopyError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeText::*)(::Unity::Collections::CopyError, ::StringW)>(&::Unity::Collections::NativeText::ThrowCopyError)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64c5bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "ThrowCopyError", {}, { ::i2c::type_of<::Unity::Collections::CopyError>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.AsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText_ReadOnly (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::AsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c5c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "AsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeText::_ctor(::StringW source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::StringW source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(int32_t capacity, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, allocator);
}
inline void Unity::Collections::NativeText::_ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString32Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString32Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                              { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString64Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString64Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                              { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString128Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString128Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                              { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString512Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString512Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                              { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString4096Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::by_ref<::Unity::Collections::FixedString4096Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                              { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, allocator);
}
inline int32_t Unity::Collections::NativeText::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText::set_Length(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::NativeText::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText::set_Capacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Unity::Collections::NativeText::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "TryResize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, newLength, clearOptions);
}
inline bool Unity::Collections::NativeText::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeText::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::NativeText::GetUnsafePtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "GetUnsafePtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline uint8_t Unity::Collections::NativeText::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, index);
}
inline void Unity::Collections::NativeText::set_Item(int32_t index, uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::by_ref<uint8_t> Unity::Collections::NativeText::ElementAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<uint8_t>>(*this, ___internal_method, index);
}
inline void Unity::Collections::NativeText::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText::Add(::by_ref<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Add", {}, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::NativeText other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::NativeText other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeText_ReadOnly>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void Unity::Collections::NativeText::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::NativeText::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
inline ::StringW Unity::Collections::NativeText::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeText_Enumerator Unity::Collections::NativeText::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText_Enumerator>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::StringW other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::Equals(::StringW other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString32Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString64Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString128Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString512Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedString4096Bytes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Collections::NativeText::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeText>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeText>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeText::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeText>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void Unity::Collections::NativeText::CheckNull(void* dataPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckNull", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dataPtr);
}
inline void Unity::Collections::NativeText::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText::CheckWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText::CheckWriteAndBumpSecondaryVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckWriteAndBumpSecondaryVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeText::CheckIndexInRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void Unity::Collections::NativeText::ThrowCopyError(::Unity::Collections::CopyError error, ::StringW source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "ThrowCopyError", {}, { ::i2c::type_of<::Unity::Collections::CopyError>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error, source);
}
inline ::Unity::Collections::NativeText_ReadOnly Unity::Collections::NativeText::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeText>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText_ReadOnly>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::INativeList_1<uint8_t>*() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::NativeText::i___Unity__Collections__INativeList_1_uint8_t_() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::IIndexable_1<uint8_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::NativeText::i___Unity__Collections__IIndexable_1_uint8_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeText::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::NativeText::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeText::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::IUTF8Bytes*() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::NativeText::i___Unity__Collections__IUTF8Bytes() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::StringW>*() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::NativeText::i___System__IComparable_1___StringW_() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::StringW>*() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::NativeText::i___System__IEquatable_1___StringW_() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeText::NativeText(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeText::NativeText() {}
