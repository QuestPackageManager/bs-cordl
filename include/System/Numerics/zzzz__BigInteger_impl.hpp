#pragma once
// IWYU pragma private; include "System/Numerics/BigInteger.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::BigInteger_GetBytesMode::BigInteger_GetBytesMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Numerics::BigInteger_GetBytesMode::BigInteger_GetBytesMode() {}
constexpr ::System::Numerics::BigInteger_GetBytesMode System::Numerics::BigInteger_GetBytesMode::AllocateArray{ static_cast<int32_t>(0x0) };
constexpr ::System::Numerics::BigInteger_GetBytesMode System::Numerics::BigInteger_GetBytesMode::Count{ static_cast<int32_t>(0x1) };
constexpr ::System::Numerics::BigInteger_GetBytesMode System::Numerics::BigInteger_GetBytesMode::Span{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(int32_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60ec058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(uint32_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60ec0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(int64_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x60ec170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(uint64_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60ec294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(float_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60ec35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(double_t)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x60ec3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(::System::Decimal)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x60ec6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(::ArrayW<uint8_t>)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60ec8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(::System::ReadOnlySpan_1<uint8_t>, bool, bool)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x60ec994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(int32_t, ::ArrayW<uint32_t>)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ecf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Numerics::BigInteger::*)(::ArrayW<uint32_t>, bool)>(&::System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x60ecf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.get_Zero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)()>(&::System::Numerics::BigInteger::get_Zero)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ed110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "get_Zero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.get_MinusOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)()>(&::System::Numerics::BigInteger::get_MinusOne)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ed16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "get_MinusOne", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.get_IsZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Numerics::BigInteger::*)()>(&::System::Numerics::BigInteger::get_IsZero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ed1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "get_IsZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::StringW, ::System::IFormatProvider*)>(&::System::Numerics::BigInteger::Parse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60ed1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(
    &::System::Numerics::BigInteger::Parse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60ed264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                         { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Numerics::BigInteger::*)()>(&::System::Numerics::BigInteger::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60ed344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ::i2c::class_of<::System::Numerics::BigInteger>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Object*)>(&::System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60ed39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ::i2c::class_of<::System::Numerics::BigInteger>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Numerics::BigInteger::*)(int64_t)>(&::System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60ed510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "Equals", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60ed450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "Equals", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Numerics::BigInteger::*)(int64_t)>(&::System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60ed5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "CompareTo", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Numerics::BigInteger::*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x60ed670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "CompareTo", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Numerics::BigInteger::*)(::System::Object*)>(&::System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60ed798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Numerics::BigInteger::*)()>(&::System::Numerics::BigInteger::ToByteArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60ed8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToByteArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Numerics::BigInteger::*)(bool, bool)>(&::System::Numerics::BigInteger::ToByteArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60ed908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToByteArray", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.TryWriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>, bool, bool)>(
    &::System::Numerics::BigInteger::TryWriteBytes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60edeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                            { "TryWriteBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.TryWriteOrCountBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Numerics::BigInteger::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>, bool, bool)>(
    &::System::Numerics::BigInteger::TryWriteOrCountBytes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60edf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                            { "TryWriteOrCountBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.TryGetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Numerics::BigInteger::*)(::System::Numerics::BigInteger_GetBytesMode, ::System::Span_1<uint8_t>, bool, bool,
                                                                                                             ::by_ref<int32_t>)>(&::System::Numerics::BigInteger::TryGetBytes)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x60ed994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "TryGetBytes",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::Numerics::BigInteger_GetBytesMode>(), ::i2c::type_of<::System::Span_1<uint8_t>>(),
                                                                                   ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Numerics::BigInteger::*)()>(&::System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60ee00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ::i2c::class_of<::System::Numerics::BigInteger>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Numerics::BigInteger::*)(::System::IFormatProvider*)>(&::System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60ee0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Numerics::BigInteger::*)(::StringW, ::System::IFormatProvider*)>(&::System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ee120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t)>(&::System::Numerics::BigInteger::Add)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x60ee158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::op_Subtraction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60ee4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t)>(&::System::Numerics::BigInteger::Subtract)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x60ee58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                         { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(uint8_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60ee964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(int8_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60ee990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(int16_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60ee9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(uint16_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60ee9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(int32_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60eea0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(uint32_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60eea34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(int64_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60ee2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Implicit___System__Numerics__BigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(uint64_t)>(&::System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60ec6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_uint8_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_uint8_t)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60eea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_int8_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_int8_t)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60eebdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_int16_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_int16_t)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60eec74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_uint16_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_uint16_t)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60eed0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_int32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60eeaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_uint32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60eeda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_int64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60eee5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_uint64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60eef04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_float_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60eefd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit_double_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60ef040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x60ef248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, int32_t)>(&::System::Numerics::BigInteger::op_LeftShift)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x60ef368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LeftShift", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, int32_t)>(&::System::Numerics::BigInteger::op_RightShift)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x60ef5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_RightShift", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::op_Addition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60ef9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::op_Multiply)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60efa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::op_Division)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60efe84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(
    &::System::Numerics::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x60f017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60f03ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60f0470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Numerics::BigInteger, int64_t)>(&::System::Numerics::BigInteger::op_LessThan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60f04f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThan", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Numerics::BigInteger, int64_t)>(&::System::Numerics::BigInteger::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60f0564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Numerics::BigInteger, int64_t)>(&::System::Numerics::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60f05d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Equality", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Numerics::BigInteger, int64_t)>(&::System::Numerics::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60f0648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_LessThan)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60f06bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThan", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Numerics::BigInteger)>(&::System::Numerics::BigInteger::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60f0730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.GetPartsForBitManipulation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Numerics::BigInteger>, ::by_ref<::ArrayW<uint32_t>>, ::by_ref<int32_t>)>(
    &::System::Numerics::BigInteger::GetPartsForBitManipulation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60ef8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                         { "GetPartsForBitManipulation",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigInteger.GetDiffLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, int32_t)>(&::System::Numerics::BigInteger::GetDiffLength)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60ed584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                             { "GetDiffLength", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Numerics::BigInteger::setStaticF_s_bnMinInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnMinInt", ::System::Numerics::BigInteger>(std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnMinInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnMinInt", ::System::Numerics::BigInteger>();
}
inline void System::Numerics::BigInteger::setStaticF_s_bnOneInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnOneInt", ::System::Numerics::BigInteger>(std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnOneInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnOneInt", ::System::Numerics::BigInteger>();
}
inline void System::Numerics::BigInteger::setStaticF_s_bnZeroInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnZeroInt", ::System::Numerics::BigInteger>(std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnZeroInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnZeroInt", ::System::Numerics::BigInteger>();
}
inline void System::Numerics::BigInteger::setStaticF_s_bnMinusOneInt(::System::Numerics::BigInteger value) {
  ::cordl_internals::setStaticField<::System::Numerics::BigInteger, "s_bnMinusOneInt", ::System::Numerics::BigInteger>(std::forward<::System::Numerics::BigInteger>(value));
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::getStaticF_s_bnMinusOneInt() {
  return ::cordl_internals::getStaticField<::System::Numerics::BigInteger, "s_bnMinusOneInt", ::System::Numerics::BigInteger>();
}
inline void System::Numerics::BigInteger::setStaticF_s_success(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_success", ::System::Numerics::BigInteger>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Numerics::BigInteger::getStaticF_s_success() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_success", ::System::Numerics::BigInteger>();
}
inline void System::Numerics::BigInteger::_ctor(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(::ArrayW<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Numerics::BigInteger::_ctor(::System::ReadOnlySpan_1<uint8_t> value, bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, isUnsigned, isBigEndian);
}
inline void System::Numerics::BigInteger::_ctor(int32_t n, ::ArrayW<uint32_t> rgu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, n, rgu);
}
inline void System::Numerics::BigInteger::_ctor(::ArrayW<uint32_t> value, bool negative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, negative);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::get_Zero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "get_Zero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::get_MinusOne() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "get_MinusOne", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method);
}
inline bool System::Numerics::BigInteger::get_IsZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "get_IsZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::Parse(::StringW value, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value, provider);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::Parse(::StringW value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                       { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value, style, provider);
}
inline int32_t System::Numerics::BigInteger::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Numerics::BigInteger>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Numerics::BigInteger::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Numerics::BigInteger>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Numerics::BigInteger::Equals(int64_t other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "Equals", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::Numerics::BigInteger::Equals(::System::Numerics::BigInteger other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "Equals", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Numerics::BigInteger::CompareTo(int64_t other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "CompareTo", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t System::Numerics::BigInteger::CompareTo(::System::Numerics::BigInteger other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "CompareTo", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t System::Numerics::BigInteger::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
inline ::ArrayW<uint8_t> System::Numerics::BigInteger::ToByteArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToByteArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Numerics::BigInteger::ToByteArray(bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToByteArray", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method, isUnsigned, isBigEndian);
}
inline bool System::Numerics::BigInteger::TryWriteBytes(::System::Span_1<uint8_t> destination, ::by_ref<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                       { "TryWriteBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, bytesWritten, isUnsigned, isBigEndian);
}
inline bool System::Numerics::BigInteger::TryWriteOrCountBytes(::System::Span_1<uint8_t> destination, ::by_ref<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                          { "TryWriteOrCountBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, bytesWritten, isUnsigned, isBigEndian);
}
inline ::ArrayW<uint8_t> System::Numerics::BigInteger::TryGetBytes(::System::Numerics::BigInteger_GetBytesMode mode, ::System::Span_1<uint8_t> destination, bool isUnsigned, bool isBigEndian,
                                                                   ::by_ref<int32_t> bytesWritten) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                                                         { "TryGetBytes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Numerics::BigInteger_GetBytesMode>(), ::i2c::type_of<::System::Span_1<uint8_t>>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method, mode, destination, isUnsigned, isBigEndian, bytesWritten);
}
inline ::StringW System::Numerics::BigInteger::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Numerics::BigInteger>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Numerics::BigInteger::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, provider);
}
inline ::StringW System::Numerics::BigInteger::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::Add(::ArrayW<uint32_t> leftBits, int32_t leftSign, ::ArrayW<uint32_t> rightBits, int32_t rightSign) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                              { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, leftBits, leftSign, rightBits, rightSign);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Subtraction(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, left, right);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::Subtract(::ArrayW<uint32_t> leftBits, int32_t leftSign, ::ArrayW<uint32_t> rightBits, int32_t rightSign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                       { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, leftBits, leftSign, rightBits, rightSign);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit___System__Numerics__BigInteger(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline uint8_t System::Numerics::BigInteger::op_Explicit_uint8_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Numerics::BigInteger::op_Explicit_int8_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Numerics::BigInteger::op_Explicit_int16_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Numerics::BigInteger::op_Explicit_uint16_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BigInteger::op_Explicit_int32_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Numerics::BigInteger::op_Explicit_uint32_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Numerics::BigInteger::op_Explicit_int64_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Numerics::BigInteger::op_Explicit_uint64_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline float_t System::Numerics::BigInteger::op_Explicit_float_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Numerics::BigInteger::op_Explicit_double_t(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Numerics::BigInteger::op_Explicit___System__Decimal(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_LeftShift(::System::Numerics::BigInteger value, int32_t shift) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LeftShift", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value, shift);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_RightShift(::System::Numerics::BigInteger value, int32_t shift) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_RightShift", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value, shift);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_UnaryNegation(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Addition(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, left, right);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Multiply(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, left, right);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Division(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, dividend, divisor);
}
inline ::System::Numerics::BigInteger System::Numerics::BigInteger::op_Modulus(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_Modulus", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, dividend, divisor);
}
inline bool System::Numerics::BigInteger::op_LessThanOrEqual(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_Inequality(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_LessThan(::System::Numerics::BigInteger left, int64_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThan", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_LessThanOrEqual(::System::Numerics::BigInteger left, int64_t right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_Equality(::System::Numerics::BigInteger left, int64_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Equality", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_Inequality(::System::Numerics::BigInteger left, int64_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_LessThan(int64_t left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThan", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::op_LessThanOrEqual(int64_t left, ::System::Numerics::BigInteger right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::BigInteger::GetPartsForBitManipulation(::by_ref<::System::Numerics::BigInteger> x, ::by_ref<::ArrayW<uint32_t>> xd, ::by_ref<int32_t> xl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Numerics::BigInteger>(),
          { "GetPartsForBitManipulation", {}, { ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, xd, xl);
}
inline int32_t System::Numerics::BigInteger::GetDiffLength(::ArrayW<uint32_t> rgu1, ::ArrayW<uint32_t> rgu2, int32_t cu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigInteger>(),
                                                           { "GetDiffLength", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, rgu1, rgu2, cu);
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::Numerics::BigInteger::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Numerics::BigInteger::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Numerics::BigInteger::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Numerics::BigInteger::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr System::Numerics::BigInteger::operator ::System::IComparable_1<::System::Numerics::BigInteger>*() {
  return static_cast<::System::IComparable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr ::System::IComparable_1<::System::Numerics::BigInteger>* System::Numerics::BigInteger::i___System__IComparable_1___System__Numerics__BigInteger_() {
  return static_cast<::System::IComparable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr System::Numerics::BigInteger::operator ::System::IEquatable_1<::System::Numerics::BigInteger>*() {
  return static_cast<::System::IEquatable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr ::System::IEquatable_1<::System::Numerics::BigInteger>* System::Numerics::BigInteger::i___System__IEquatable_1___System__Numerics__BigInteger_() {
  return static_cast<::System::IEquatable_1<::System::Numerics::BigInteger>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::BigInteger::BigInteger(int32_t _sign, ::ArrayW<uint32_t> _bits) noexcept {
  this->_sign = _sign;
  this->_bits = _bits;
}
// Ctor Parameters []
constexpr ::System::Numerics::BigInteger::BigInteger() {}
