#pragma once
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::__BigInteger__GetBytesMode::__BigInteger__GetBytesMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Numerics::__BigInteger__GetBytesMode::__BigInteger__GetBytesMode() {}
constexpr ::System::Numerics::__BigInteger__GetBytesMode System::Numerics::__BigInteger__GetBytesMode::AllocateArray{ static_cast<int32_t>(0x0) };
constexpr ::System::Numerics::__BigInteger__GetBytesMode System::Numerics::__BigInteger__GetBytesMode::Count{ static_cast<int32_t>(0x1) };
constexpr ::System::Numerics::__BigInteger__GetBytesMode System::Numerics::__BigInteger__GetBytesMode::Span{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::BigInteger::*)(int32_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x292e018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::BigInteger::*)(int64_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x292e094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::BigInteger::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x292e1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::BigInteger::*)(::System::ReadOnlySpan_1<uint8_t>, bool, bool)>(
    &::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x292e24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::BigInteger::*)(int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x292e834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::BigInteger::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, bool)>(
    &::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x292e840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.get_MinusOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)()>(&::System::Numerics::BigInteger::get_MinusOne)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x292e9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "get_MinusOne",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Numerics::BigInteger::*)()>(&::System::Numerics::BigInteger::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x292ea3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Object*)>(&::System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x292ea90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x292eb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Numerics::BigInteger::*)(::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x292ec2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Numerics::BigInteger::*)(::System::Object*)>(&::System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x292ed54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.TryWriteBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Span_1<uint8_t>, ByRef<int32_t>, bool, bool)>(
    &::System::Numerics::BigInteger::TryWriteBytes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x292ee2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "TryWriteBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.TryWriteOrCountBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Span_1<uint8_t>, ByRef<int32_t>, bool, bool)>(
    &::System::Numerics::BigInteger::TryWriteOrCountBytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x292f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "TryWriteOrCountBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.TryGetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Numerics::BigInteger::*)(
    ::System::Numerics::__BigInteger__GetBytesMode, ::System::Span_1<uint8_t>, bool, bool, ByRef<int32_t>)>(&::System::Numerics::BigInteger::TryGetBytes)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x292ee6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "TryGetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::__BigInteger__GetBytesMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Numerics::BigInteger::*)()>(&::System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x292f38c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Numerics::BigInteger::*)(::StringW, ::System::IFormatProvider*)>(
    &::System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x292f468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Numerics::BigInteger (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(&::System::Numerics::BigInteger::Add)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x292f4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Subtract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Numerics::BigInteger (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(&::System::Numerics::BigInteger::Subtract)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x292f7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "Subtract", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(uint8_t)>(
    &::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292fba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(int32_t)>(
    &::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292fbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(int64_t)>(
    &::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292f5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x292fbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LeftShift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, int32_t)>(
    &::System::Numerics::BigInteger::op_LeftShift)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x292fcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_LeftShift", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_RightShift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, int32_t)>(
    &::System::Numerics::BigInteger::op_RightShift)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x292ff20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_RightShift", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::op_Addition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29302e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.GetPartsForBitManipulation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Numerics::BigInteger>, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, ByRef<int32_t>)>(
    &::System::Numerics::BigInteger::GetPartsForBitManipulation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2930224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "GetPartsForBitManipulation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::BigInteger>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.GetDiffLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::System::Numerics::BigInteger::GetDiffLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x292ebc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "GetDiffLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IFormattable"
constexpr System::Numerics::BigInteger::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Numerics::BigInteger::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Numerics::BigInteger::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Numerics::BigInteger::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr System::Numerics::BigInteger::operator ::System::IComparable_1<::System::Numerics::BigInteger>*() {
  return static_cast<::System::IComparable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr ::System::IComparable_1<::System::Numerics::BigInteger>* System::Numerics::BigInteger::i___System__IComparable_1___System__Numerics__BigInteger_() {
  return static_cast<::System::IComparable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr System::Numerics::BigInteger::operator ::System::IEquatable_1<::System::Numerics::BigInteger>*() {
  return static_cast<::System::IEquatable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr ::System::IEquatable_1<::System::Numerics::BigInteger>* System::Numerics::BigInteger::i___System__IEquatable_1___System__Numerics__BigInteger_() {
  return static_cast<::System::IEquatable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Numerics::BigInteger::setStaticF_s_bnMinInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnMinInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>(
      std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnMinInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnMinInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>();
}
inline void System::Numerics::BigInteger::setStaticF_s_bnOneInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>(
      std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnOneInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>();
}
inline void System::Numerics::BigInteger::setStaticF_s_bnZeroInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnZeroInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>(
      std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnZeroInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnZeroInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>();
}
inline void System::Numerics::BigInteger::setStaticF_s_bnMinusOneInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnMinusOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>(
      std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnMinusOneInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnMinusOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>();
}
inline void System::Numerics::BigInteger::setStaticF_s_success(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_success", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Numerics::BigInteger::getStaticF_s_success() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_success", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get>();
}
inline void System::Numerics::BigInteger::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param isUnsigned: bool (default: false)
/// @param isBigEndian: bool (default: false)
inline void System::Numerics::BigInteger::_ctor(::System::ReadOnlySpan_1<uint8_t> value, bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, isUnsigned, isBigEndian);
}
inline void System::Numerics::BigInteger::_ctor(int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgu) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, rgu);
}
inline void System::Numerics::BigInteger::_ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> value, bool negative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, negative);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::get_MinusOne() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "get_MinusOne",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method);
}
inline int32_t System::Numerics::BigInteger::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Numerics::BigInteger::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool System::Numerics::BigInteger::Equals(::System::Numerics::BigInteger other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t System::Numerics::BigInteger::CompareTo(::System::Numerics::BigInteger other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline int32_t System::Numerics::BigInteger::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
/// @param isUnsigned: bool (default: false)
/// @param isBigEndian: bool (default: false)
inline bool System::Numerics::BigInteger::TryWriteBytes(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "TryWriteBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, bytesWritten, isUnsigned, isBigEndian);
}
/// @param isUnsigned: bool (default: false)
/// @param isBigEndian: bool (default: false)
inline bool System::Numerics::BigInteger::TryWriteOrCountBytes(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "TryWriteOrCountBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, bytesWritten, isUnsigned, isBigEndian);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Numerics::BigInteger::TryGetBytes(::System::Numerics::__BigInteger__GetBytesMode mode, ::System::Span_1<uint8_t> destination, bool isUnsigned,
                                                                                      bool isBigEndian, ByRef<int32_t> bytesWritten) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "TryGetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::__BigInteger__GetBytesMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, mode, destination, isUnsigned, isBigEndian, bytesWritten);
}
inline ::StringW System::Numerics::BigInteger::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Numerics::BigInteger::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, provider);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::Add(::ArrayW<uint32_t, ::Array<uint32_t>*> leftBits, int32_t leftSign, ::ArrayW<uint32_t, ::Array<uint32_t>*> rightBits,
                                                                        int32_t rightSign) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, leftBits, leftSign, rightBits, rightSign);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> leftBits, int32_t leftSign, ::ArrayW<uint32_t, ::Array<uint32_t>*> rightBits,
                                                                             int32_t rightSign) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "Subtract", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, leftBits, leftSign, rightBits, rightSign);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BigInteger::op_Explicit_int32_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_LeftShift(::System::Numerics::BigInteger value, int32_t shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_LeftShift", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, shift);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_RightShift(::System::Numerics::BigInteger value, int32_t shift) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_RightShift", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, shift);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Addition(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::GetPartsForBitManipulation(ByRef<::System::Numerics::BigInteger> x, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> xd, ByRef<int32_t> xl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "GetPartsForBitManipulation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::BigInteger>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x, xd, xl);
}
inline int32_t System::Numerics::BigInteger::GetDiffLength(::ArrayW<uint32_t, ::Array<uint32_t>*> rgu1, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgu2, int32_t cu) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigInteger>::get(), "GetDiffLength", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, rgu1, rgu2, cu);
}
// Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::System::Numerics::BigInteger::BigInteger(int32_t _sign, ::ArrayW<uint32_t, ::Array<uint32_t>*> _bits) noexcept {
  this->_sign = _sign;
  this->_bits = _bits;
}
// Ctor Parameters []
constexpr ::System::Numerics::BigInteger::BigInteger() {}
