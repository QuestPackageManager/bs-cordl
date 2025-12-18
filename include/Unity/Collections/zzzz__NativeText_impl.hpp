#pragma once
// IWYU pragma private; include "Unity/Collections/NativeText.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeText*)>(
    &::Unity::Collections::NativeText_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630f920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeText*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_Capacity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x630f928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Capacity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(
    &::Unity::Collections::NativeText_ReadOnly::set_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630f998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_Capacity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_IsEmpty)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x630f99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(bool)>(&::Unity::Collections::NativeText_ReadOnly::set_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630fa80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_IsEmpty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_Length)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x630fa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(
    &::Unity::Collections::NativeText_ReadOnly::set_Length)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630faf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_Length", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(
    &::Unity::Collections::NativeText_ReadOnly::get_Item)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630faf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)(int32_t, uint8_t)>(
    &::Unity::Collections::NativeText_ReadOnly::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630fb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630fb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.ElementAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<uint8_t> (::Unity::Collections::NativeText_ReadOnly::*)(int32_t)>(
    &::Unity::Collections::NativeText_ReadOnly::ElementAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x630fb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "ElementAt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (::Unity::Collections::NativeText_ReadOnly::*)()>(
    &::Unity::Collections::NativeText_ReadOnly::GetUnsafePtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x630f720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "GetUnsafePtr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.TryResize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::NativeText_ReadOnly::TryResize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630fba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "TryResize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArrayOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CheckNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::Unity::Collections::NativeText_ReadOnly::CheckNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630fba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CheckNull",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CheckRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630fbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CheckRead",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.ErrorWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::ErrorWrite)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x630fc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "ErrorWrite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::StringW)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x630fc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::StringW)>(&::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x630fd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630fd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630fdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630fe30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::NativeText)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630fe8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630fee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x630ff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6310034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631004c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6310050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x63100ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x631019c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63101b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63101b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6310214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6310304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631031c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6310320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x631037c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x631046c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6310484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6310488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Equality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x63104e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText_ReadOnly>, ::ByRef<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText_ReadOnly::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63105d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63105ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63105f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x631066c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_ReadOnly::*)(::System::Object*)>(
    &::Unity::Collections::NativeText_ReadOnly::Equals)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x63106b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Collections::NativeText_ReadOnly::*)()>(&::Unity::Collections::NativeText_ReadOnly::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6310994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_ReadOnly.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeText_Enumerator (::Unity::Collections::NativeText_ReadOnly::*)()>(
    &::Unity::Collections::NativeText_ReadOnly::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6310998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeText_ReadOnly::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeText* text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeText*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_Capacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::NativeText_ReadOnly::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::set_IsEmpty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_IsEmpty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_Length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint8_t Unity::Collections::NativeText_ReadOnly::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, index);
}
inline void Unity::Collections::NativeText_ReadOnly::set_Item(int32_t index, uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void Unity::Collections::NativeText_ReadOnly::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ByRef<uint8_t> Unity::Collections::NativeText_ReadOnly::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "ElementAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<uint8_t>, false>(this, ___internal_method, index);
}
inline uint8_t* Unity::Collections::NativeText_ReadOnly::GetUnsafePtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "GetUnsafePtr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method);
}
inline bool Unity::Collections::NativeText_ReadOnly::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "TryResize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArrayOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, newLength, clearOptions);
}
inline void Unity::Collections::NativeText_ReadOnly::CheckNull(void* dataPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CheckNull",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dataPtr);
}
inline void Unity::Collections::NativeText_ReadOnly::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CheckRead",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText_ReadOnly::ErrorWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "ErrorWrite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::StringW other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::StringW other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::NativeText other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::NativeText other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::CompareTo(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly> a, ::ByRef<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText_ReadOnly>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW Unity::Collections::NativeText_ReadOnly::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText_ReadOnly::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Unity::Collections::NativeText_ReadOnly::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW Unity::Collections::NativeText_ReadOnly::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeText_Enumerator Unity::Collections::NativeText_ReadOnly::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_ReadOnly>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText_Enumerator, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::Unity::Collections::INativeList_1<uint8_t>*() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::NativeText_ReadOnly::i___Unity__Collections__INativeList_1_uint8_t_() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::Unity::Collections::IIndexable_1<uint8_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::NativeText_ReadOnly::i___Unity__Collections__IIndexable_1_uint8_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::Unity::Collections::IUTF8Bytes*() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::NativeText_ReadOnly::i___Unity__Collections__IUTF8Bytes() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::StringW>*() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___StringW_() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::StringW>*() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___StringW_() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText_ReadOnly::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText_ReadOnly::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeText_ReadOnly::NativeText_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeText_ReadOnly::NativeText_ReadOnly() {}
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)(::Unity::Collections::NativeText)>(
    &::Unity::Collections::NativeText_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630e84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630f604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)()>(&::Unity::Collections::NativeText_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630f60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText_Enumerator::*)()>(&::Unity::Collections::NativeText_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x630f610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText_Enumerator::*)()>(&::Unity::Collections::NativeText_Enumerator::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630f8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::Collections::NativeText_Enumerator::*)()>(
    &::Unity::Collections::NativeText_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x630f8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Unicode_Rune (::Unity::Collections::NativeText_Enumerator::*)()>(
    &::Unity::Collections::NativeText_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630f918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeText_Enumerator::_ctor(::Unity::Collections::NativeText source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void Unity::Collections::NativeText_Enumerator::_ctor(::Unity::Collections::NativeText_ReadOnly source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void Unity::Collections::NativeText_Enumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Collections::NativeText_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Unity::Collections::NativeText_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "System.Collections.IEnumerator.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Unity::Collections::Unicode_Rune Unity::Collections::NativeText_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText_Enumerator>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Unicode_Rune, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
constexpr Unity::Collections::NativeText_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*
Unity::Collections::NativeText_Enumerator::i___System__Collections__Generic__IEnumerator_1___Unity__Collections__Unicode_Rune_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Unity::Collections::NativeText_Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::Collections::NativeText_Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::NativeText_Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeText_Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(::StringW, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(::StringW, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x630d630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t, ::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x630d8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x630d764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630da08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630da64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(
    ::ByRef<::Unity::Collections::FixedString32Bytes>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x630dac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Collections::NativeText::*)(::ByRef<::Unity::Collections::FixedString32Bytes>, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(
    ::ByRef<::Unity::Collections::FixedString64Bytes>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x630dbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Collections::NativeText::*)(::ByRef<::Unity::Collections::FixedString64Bytes>, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(
    ::ByRef<::Unity::Collections::FixedString128Bytes>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x630dcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Collections::NativeText::*)(::ByRef<::Unity::Collections::FixedString128Bytes>, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(
    ::ByRef<::Unity::Collections::FixedString512Bytes>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x630ddb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Collections::NativeText::*)(::ByRef<::Unity::Collections::FixedString512Bytes>, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(
    ::ByRef<::Unity::Collections::FixedString4096Bytes>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x630dea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Collections::NativeText::*)(::ByRef<::Unity::Collections::FixedString4096Bytes>, ::Unity::Collections::Allocator)>(&::Unity::Collections::NativeText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630df98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_Length)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x630dfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.set_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::set_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "set_Length", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_Capacity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x630e0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Capacity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.set_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::set_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "set_Capacity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.TryResize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::NativeText::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630e1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "TryResize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArrayOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_IsEmpty)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x630e1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_IsCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630e2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_IsCreated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.GetUnsafePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::GetUnsafePtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x630d7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "GetUnsafePtr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::get_Item)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630e2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t, uint8_t)>(&::Unity::Collections::NativeText::set_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x630e38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.ElementAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<uint8_t> (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::ElementAt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630e3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "ElementAt", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x630e438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(::ByRef<uint8_t>)>(&::Unity::Collections::NativeText::Add)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x630e444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630e508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630e564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x630e5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::NativeText_ReadOnly)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630e620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x630e67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::NativeText::*)(::Unity::Jobs::JobHandle)>(
    &::Unity::Collections::NativeText::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x630e744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630e7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeText_Enumerator (::Unity::Collections::NativeText::*)()>(
    &::Unity::Collections::NativeText::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x630e840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::StringW)>(&::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x630e854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::StringW)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x630e878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630e89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x630e8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString32Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630ea3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString32Bytes)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630ea58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x630eab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString64Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630ebcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString64Bytes)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630ebe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630ebe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x630ec44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString128Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630ed5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString128Bytes)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630ed74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630ed78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x630edd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString512Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630eeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString512Bytes)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630ef04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::NativeText::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630ef08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText::op_Equality)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x630ef64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Collections::NativeText>, ::ByRef<::Unity::Collections::FixedString4096Bytes>)>(
    &::Unity::Collections::NativeText::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630f07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::Unity::Collections::FixedString4096Bytes)>(
    &::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630f094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x630e7c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x630f098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::NativeText::*)(::System::Object*)>(&::Unity::Collections::NativeText::Equals)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x630f0e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::Unity::Collections::NativeText::CheckNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630f3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckNull", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630f414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckRead",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::CheckWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630f418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckWrite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckWriteAndBumpSecondaryVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)()>(&::Unity::Collections::NativeText::CheckWriteAndBumpSecondaryVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630f41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckWriteAndBumpSecondaryVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.CheckIndexInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(int32_t)>(&::Unity::Collections::NativeText::CheckIndexInRange)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x630f420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckIndexInRange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.ThrowCopyError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeText::*)(::Unity::Collections::CopyError, ::StringW)>(
    &::Unity::Collections::NativeText::ThrowCopyError)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x630f57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "ThrowCopyError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::CopyError>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeText.AsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeText_ReadOnly (::Unity::Collections::NativeText::*)()>(
    &::Unity::Collections::NativeText::AsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630f5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "AsReadOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeText::_ctor(::StringW source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::StringW source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(int32_t capacity, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, allocator);
}
inline void Unity::Collections::NativeText::_ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString32Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString32Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString64Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString64Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString128Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString128Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString512Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString512Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString4096Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline void Unity::Collections::NativeText::_ctor(::ByRef<::Unity::Collections::FixedString4096Bytes> source, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, allocator);
}
inline int32_t Unity::Collections::NativeText::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "set_Length", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Collections::NativeText::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "set_Capacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Collections::NativeText::TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "TryResize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArrayOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, newLength, clearOptions);
}
inline bool Unity::Collections::NativeText::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Collections::NativeText::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_IsCreated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint8_t* Unity::Collections::NativeText::GetUnsafePtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "GetUnsafePtr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method);
}
inline uint8_t Unity::Collections::NativeText::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, index);
}
inline void Unity::Collections::NativeText::set_Item(int32_t index, uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::ByRef<uint8_t> Unity::Collections::NativeText::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "ElementAt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<uint8_t>, false>(this, ___internal_method, index);
}
inline void Unity::Collections::NativeText::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText::Add(::ByRef<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::NativeText other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::NativeText other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::NativeText_ReadOnly other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeText_ReadOnly>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void Unity::Collections::NativeText::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::NativeText::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, inputDeps);
}
inline ::StringW Unity::Collections::NativeText::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeText_Enumerator Unity::Collections::NativeText::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText_Enumerator, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::Equals(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString32Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString32Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString32Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString32Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString64Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString64Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString64Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString64Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString128Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString128Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString128Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString128Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString512Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString512Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString512Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString512Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::NativeText::CompareTo(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::NativeText::op_Equality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::op_Inequality(::ByRef<::Unity::Collections::NativeText> a, ::ByRef<::Unity::Collections::FixedString4096Bytes> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeText>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedString4096Bytes>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::NativeText::Equals(::Unity::Collections::FixedString4096Bytes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedString4096Bytes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW Unity::Collections::NativeText::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::NativeText::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Unity::Collections::NativeText::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void Unity::Collections::NativeText::CheckNull(void* dataPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckNull", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dataPtr);
}
inline void Unity::Collections::NativeText::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckRead",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText::CheckWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckWrite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText::CheckWriteAndBumpSecondaryVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckWriteAndBumpSecondaryVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::NativeText::CheckIndexInRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "CheckIndexInRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void Unity::Collections::NativeText::ThrowCopyError(::Unity::Collections::CopyError error, ::StringW source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "ThrowCopyError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::CopyError>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error, source);
}
inline ::Unity::Collections::NativeText_ReadOnly Unity::Collections::NativeText::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeText>::get(), "AsReadOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText_ReadOnly, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::INativeList_1<uint8_t>*() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::NativeText::i___Unity__Collections__INativeList_1_uint8_t_() {
  return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::IIndexable_1<uint8_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::NativeText::i___Unity__Collections__IIndexable_1_uint8_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeText::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::NativeText::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeText::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr Unity::Collections::NativeText::operator ::Unity::Collections::IUTF8Bytes*() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::NativeText::i___Unity__Collections__IUTF8Bytes() {
  return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::StringW>*() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::NativeText::i___System__IComparable_1___StringW_() {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::StringW>*() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::NativeText::i___System__IEquatable_1___StringW_() {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::NativeText>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__NativeText_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeText>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr Unity::Collections::NativeText::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::NativeText::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeText::NativeText(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeText::NativeText() {}
