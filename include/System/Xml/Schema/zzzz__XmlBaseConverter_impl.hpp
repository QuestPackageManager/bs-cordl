#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlBaseConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlBaseConverter::*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::XmlBaseConverter::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62474b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlBaseConverter::*)(::System::Xml::Schema::XmlTypeCode)>(&::System::Xml::Schema::XmlBaseConverter::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6247598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlBaseConverter::*)(::System::Xml::Schema::XmlBaseConverter*)>(&::System::Xml::Schema::XmlBaseConverter::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6247670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlBaseConverter::*)(::System::Xml::Schema::XmlBaseConverter*, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62476bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62476e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBaseConverter::*)(double_t)>(&::System::Xml::Schema::XmlBaseConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62477c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBaseConverter::*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6247894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBaseConverter::*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6247964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6247a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6247ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(bool)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6247b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTimeOffset)>(
    &::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6247c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(double_t)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6247d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6247e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6247f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6248034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62480fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime)>(
    &::System::Xml::Schema::XmlBaseConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x62481c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62482c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(
    &::System::Xml::Schema::XmlBaseConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x624838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6248458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6248524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlBaseConverter::*)(bool)>(&::System::Xml::Schema::XmlBaseConverter::ToDouble)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62485f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::ToDouble)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62486c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlBaseConverter::*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::ToDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62487a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlBaseConverter::*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::ToDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6248878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToDouble)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6248948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToDouble)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62489fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlBaseConverter::*)(bool)>(&::System::Xml::Schema::XmlBaseConverter::ToInt32)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6248ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::ToInt32)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6248b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlBaseConverter::*)(double_t)>(&::System::Xml::Schema::XmlBaseConverter::ToInt32)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6248c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlBaseConverter::*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::ToInt32)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6248d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToInt32)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6248e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToInt32)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6248ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlBaseConverter::*)(bool)>(&::System::Xml::Schema::XmlBaseConverter::ToInt64)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6248f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::ToInt64)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6249044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlBaseConverter::*)(double_t)>(&::System::Xml::Schema::XmlBaseConverter::ToInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6249128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlBaseConverter::*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::ToInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62491f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToInt64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62492c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToInt64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x624937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlBaseConverter::*)(double_t)>(&::System::Xml::Schema::XmlBaseConverter::ToSingle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6249430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlBaseConverter::*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::ToSingle)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6249500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToSingle)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62495b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(bool)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6249668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x624972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6249800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(::System::Decimal)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x62498e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(double_t)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x62499f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6249ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6249b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(float_t)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6249c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6249cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlBaseConverter::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6249da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(bool, ::System::Type*)>(&::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6249db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(::System::DateTime, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6249e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(::System::Decimal, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6249e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(double_t, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6249f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(int32_t, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6249f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(int64_t, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6249fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x624a020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::XmlBaseConverter::*)()>(
    &::System::Xml::Schema::XmlBaseConverter::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x624a044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_SchemaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::XmlBaseConverter::*)()>(&::System::Xml::Schema::XmlBaseConverter::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x624a04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_TypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.get_XmlTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlBaseConverter::*)()>(&::System::Xml::Schema::XmlBaseConverter::get_XmlTypeName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x624a054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_XmlTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.get_DefaultClrType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::XmlBaseConverter::*)()>(&::System::Xml::Schema::XmlBaseConverter::get_DefaultClrType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x624a290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_DefaultClrType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.IsDerivedFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Xml::Schema::XmlBaseConverter::IsDerivedFrom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x624a298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                                                           { "IsDerivedFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.CreateInvalidClrMappingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::XmlBaseConverter::*)(::System::Type*, ::System::Type*)>(
    &::System::Xml::Schema::XmlBaseConverter::CreateInvalidClrMappingException)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x624a308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                             { "CreateInvalidClrMappingException", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.QNameToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlBaseConverter::QNameToString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x624a15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "QNameToString", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.ChangeListType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlBaseConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBaseConverter::ChangeListType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x624a564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToBase64Binary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToBase64Binary)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624a5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToBase64Binary", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToDate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToDayTimeDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToDayTimeDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x624a750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDayTimeDuration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x624a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDuration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGDay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGDay", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGMonth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonth", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGMonthDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGMonthDay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonthDay", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGYear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYear", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGYearMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGYearMonth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624a9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYearMonth", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToDateOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToDateOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624aa58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDateOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToDateTimeOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624aad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDateTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGDayOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGDayOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624ab58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGDayOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGMonthOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGMonthOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624abd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonthOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGMonthDayOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGMonthDayOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624ac58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonthDayOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGYearOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGYearOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624acd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYearOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToGYearMonthOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToGYearMonthOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624ad58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYearMonthOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToHexBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToHexBinary)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x624add8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToHexBinary", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::StringW, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBaseConverter::StringToQName)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x624af14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                             { "StringToQName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToTimeOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624b2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.StringToYearMonthDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::StringToYearMonthDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x624b334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToYearMonthDuration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.AnyUriToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Uri*)>(&::System::Xml::Schema::XmlBaseConverter::AnyUriToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x624b378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "AnyUriToString", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Base64BinaryToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::Xml::Schema::XmlBaseConverter::Base64BinaryToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x624b3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Base64BinaryToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DateToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::DateToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DateTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::DateTimeToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateTimeToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DayTimeDurationToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::System::Xml::Schema::XmlBaseConverter::DayTimeDurationToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x624b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DayTimeDurationToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DurationToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::System::Xml::Schema::XmlBaseConverter::DurationToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x624b568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DurationToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GDayToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::GDayToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GDayToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GMonthToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::GMonthToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GMonthDayToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::GMonthDayToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthDayToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GYearToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::GYearToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GYearMonthToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::GYearMonthToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624b7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearMonthToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DateOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::DateOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624b864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DateTimeOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::DateTimeOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624b8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateTimeOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GDayOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::GDayOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624b994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GDayOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GMonthOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::GMonthOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624ba2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GMonthDayOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::GMonthDayOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624bac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthDayOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GYearOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::GYearOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624bb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.GYearMonthOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::GYearMonthOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624bbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearMonthOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.QNameToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlQualifiedName*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlBaseConverter::QNameToString)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x624bc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                { "QNameToString", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.TimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::Schema::XmlBaseConverter::TimeToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x624bea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "TimeToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.TimeOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::TimeOffsetToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x624bf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "TimeOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.YearMonthDurationToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::System::Xml::Schema::XmlBaseConverter::YearMonthDurationToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x624bfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "YearMonthDurationToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DateTimeOffsetToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlBaseConverter::DateTimeOffsetToDateTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x624c01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateTimeOffsetToDateTime", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DecimalToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Xml::Schema::XmlBaseConverter::DecimalToInt32)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x624c084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DecimalToInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DecimalToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Xml::Schema::XmlBaseConverter::DecimalToInt64)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x624c20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DecimalToInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.DecimalToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Xml::Schema::XmlBaseConverter::DecimalToUInt64)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x624c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DecimalToUInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Int32ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::Int32ToByte)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x624c520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Int32ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::Int32ToInt16)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x624c5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToInt16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Int32ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::Int32ToSByte)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x624c6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToSByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Int32ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int32_t)>(&::System::Xml::Schema::XmlBaseConverter::Int32ToUInt16)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x624c7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToUInt16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Int64ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::Int64ToInt32)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x624c890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int64ToInt32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.Int64ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int64_t)>(&::System::Xml::Schema::XmlBaseConverter::Int64ToUInt32)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x624c96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int64ToUInt32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.UntypedAtomicToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::UntypedAtomicToDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "UntypedAtomicToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlBaseConverter.UntypedAtomicToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::Schema::XmlBaseConverter::UntypedAtomicToDateTimeOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "UntypedAtomicToDateTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::Schema::XmlBaseConverter::__cordl_internal_get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Xml::Schema::XmlBaseConverter::__cordl_internal_get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::Schema::XmlBaseConverter::__cordl_internal_set_schemaType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaType = value;
}
constexpr ::System::Xml::Schema::XmlTypeCode& System::Xml::Schema::XmlBaseConverter::__cordl_internal_get_typeCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeCode;
}
constexpr ::System::Xml::Schema::XmlTypeCode const& System::Xml::Schema::XmlBaseConverter::__cordl_internal_get_typeCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeCode;
}
constexpr void System::Xml::Schema::XmlBaseConverter::__cordl_internal_set_typeCode(::System::Xml::Schema::XmlTypeCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeCode = value;
}
constexpr ::System::Type*& System::Xml::Schema::XmlBaseConverter::__cordl_internal_get_clrTypeDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrTypeDefault;
}
constexpr ::System::Type* const& System::Xml::Schema::XmlBaseConverter::__cordl_internal_get_clrTypeDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrTypeDefault;
}
constexpr void System::Xml::Schema::XmlBaseConverter::__cordl_internal_set_clrTypeDefault(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clrTypeDefault = value;
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_ICollectionType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "ICollectionType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_ICollectionType() {
  return ::cordl_internals::getStaticField<::System::Type*, "ICollectionType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_IEnumerableType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "IEnumerableType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_IEnumerableType() {
  return ::cordl_internals::getStaticField<::System::Type*, "IEnumerableType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_IListType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "IListType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_IListType() {
  return ::cordl_internals::getStaticField<::System::Type*, "IListType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_ObjectArrayType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "ObjectArrayType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_ObjectArrayType() {
  return ::cordl_internals::getStaticField<::System::Type*, "ObjectArrayType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_StringArrayType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "StringArrayType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_StringArrayType() {
  return ::cordl_internals::getStaticField<::System::Type*, "StringArrayType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_XmlAtomicValueArrayType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "XmlAtomicValueArrayType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_XmlAtomicValueArrayType() {
  return ::cordl_internals::getStaticField<::System::Type*, "XmlAtomicValueArrayType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_DecimalType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "DecimalType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_DecimalType() {
  return ::cordl_internals::getStaticField<::System::Type*, "DecimalType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_Int32Type(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "Int32Type", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_Int32Type() {
  return ::cordl_internals::getStaticField<::System::Type*, "Int32Type", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_Int64Type(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "Int64Type", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_Int64Type() {
  return ::cordl_internals::getStaticField<::System::Type*, "Int64Type", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_StringType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "StringType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_StringType() {
  return ::cordl_internals::getStaticField<::System::Type*, "StringType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_XmlAtomicValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "XmlAtomicValueType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_XmlAtomicValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "XmlAtomicValueType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_ObjectType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "ObjectType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_ObjectType() {
  return ::cordl_internals::getStaticField<::System::Type*, "ObjectType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_ByteType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "ByteType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_ByteType() {
  return ::cordl_internals::getStaticField<::System::Type*, "ByteType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_Int16Type(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "Int16Type", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_Int16Type() {
  return ::cordl_internals::getStaticField<::System::Type*, "Int16Type", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_SByteType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "SByteType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_SByteType() {
  return ::cordl_internals::getStaticField<::System::Type*, "SByteType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_UInt16Type(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "UInt16Type", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_UInt16Type() {
  return ::cordl_internals::getStaticField<::System::Type*, "UInt16Type", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_UInt32Type(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "UInt32Type", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_UInt32Type() {
  return ::cordl_internals::getStaticField<::System::Type*, "UInt32Type", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_UInt64Type(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "UInt64Type", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_UInt64Type() {
  return ::cordl_internals::getStaticField<::System::Type*, "UInt64Type", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_XPathItemType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "XPathItemType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_XPathItemType() {
  return ::cordl_internals::getStaticField<::System::Type*, "XPathItemType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_DoubleType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "DoubleType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_DoubleType() {
  return ::cordl_internals::getStaticField<::System::Type*, "DoubleType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_SingleType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "SingleType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_SingleType() {
  return ::cordl_internals::getStaticField<::System::Type*, "SingleType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_DateTimeType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "DateTimeType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_DateTimeType() {
  return ::cordl_internals::getStaticField<::System::Type*, "DateTimeType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_DateTimeOffsetType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "DateTimeOffsetType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_DateTimeOffsetType() {
  return ::cordl_internals::getStaticField<::System::Type*, "DateTimeOffsetType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_BooleanType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "BooleanType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_BooleanType() {
  return ::cordl_internals::getStaticField<::System::Type*, "BooleanType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_ByteArrayType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "ByteArrayType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_ByteArrayType() {
  return ::cordl_internals::getStaticField<::System::Type*, "ByteArrayType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_XmlQualifiedNameType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "XmlQualifiedNameType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_XmlQualifiedNameType() {
  return ::cordl_internals::getStaticField<::System::Type*, "XmlQualifiedNameType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_UriType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "UriType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_UriType() {
  return ::cordl_internals::getStaticField<::System::Type*, "UriType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_TimeSpanType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "TimeSpanType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_TimeSpanType() {
  return ::cordl_internals::getStaticField<::System::Type*, "TimeSpanType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::setStaticF_XPathNavigatorType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "XPathNavigatorType", ::System::Xml::Schema::XmlBaseConverter*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::getStaticF_XPathNavigatorType() {
  return ::cordl_internals::getStaticField<::System::Type*, "XPathNavigatorType", ::System::Xml::Schema::XmlBaseConverter*>();
}
inline void System::Xml::Schema::XmlBaseConverter::_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaType);
}
inline void System::Xml::Schema::XmlBaseConverter::_ctor(::System::Xml::Schema::XmlTypeCode typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeCode);
}
inline void System::Xml::Schema::XmlBaseConverter::_ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, converterAtomic);
}
inline void System::Xml::Schema::XmlBaseConverter::_ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic, ::System::Type* clrTypeDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, converterAtomic, clrTypeDefault);
}
inline bool System::Xml::Schema::XmlBaseConverter::ToBoolean(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlBaseConverter::ToBoolean(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlBaseConverter::ToBoolean(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlBaseConverter::ToBoolean(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlBaseConverter::ToBoolean(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlBaseConverter::ToBoolean(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::ToDateTime(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::ToDateTimeOffset(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::ToDateTimeOffset(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::ToDateTimeOffset(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlBaseConverter::ToDecimal(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlBaseConverter::ToDecimal(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlBaseConverter::ToDouble(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlBaseConverter::ToDouble(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlBaseConverter::ToDouble(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlBaseConverter::ToDouble(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlBaseConverter::ToDouble(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlBaseConverter::ToDouble(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::ToInt32(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::ToInt32(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::ToInt32(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::ToInt32(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::ToInt32(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::ToInt32(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::ToInt64(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::ToInt64(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::ToInt64(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::ToInt64(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::ToInt64(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::ToInt64(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlBaseConverter::ToSingle(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlBaseConverter::ToSingle(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlBaseConverter::ToSingle(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, nsResolver);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::ToString(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(bool value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(::System::DateTime value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(::System::Decimal value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(double_t value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(int32_t value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(int64_t value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeType(::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlBaseConverter::get_SchemaType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_SchemaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::XmlBaseConverter::get_TypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_TypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::get_XmlTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_XmlTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::XmlBaseConverter::get_DefaultClrType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "get_DefaultClrType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlBaseConverter::IsDerivedFrom(::System::Type* derivedType, ::System::Type* baseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                                                         { "IsDerivedFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, derivedType, baseType);
}
inline ::System::Exception* System::Xml::Schema::XmlBaseConverter::CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                           { "CreateInvalidClrMappingException", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, sourceType, destinationType);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::QNameToString(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "QNameToString", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::System::Object* System::Xml::Schema::XmlBaseConverter::ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::ArrayW<uint8_t> System::Xml::Schema::XmlBaseConverter::StringToBase64Binary(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToBase64Binary", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToDate(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToDateTime(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Xml::Schema::XmlBaseConverter::StringToDayTimeDuration(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDayTimeDuration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Xml::Schema::XmlBaseConverter::StringToDuration(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDuration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToGDay(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGDay", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToGMonth(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonth", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToGMonthDay(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonthDay", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToGYear(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYear", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToGYearMonth(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYearMonth", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToDateOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDateOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToDateTimeOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToDateTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToGDayOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGDayOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToGMonthOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonthOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToGMonthDayOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGMonthDayOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToGYearOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYearOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToGYearMonthOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToGYearMonthOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Xml::Schema::XmlBaseConverter::StringToHexBinary(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToHexBinary", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlBaseConverter::StringToQName(::StringW value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                           { "StringToQName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, value, nsResolver);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::StringToTime(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::StringToTimeOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Xml::Schema::XmlBaseConverter::StringToYearMonthDuration(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "StringToYearMonthDuration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::AnyUriToString(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "AnyUriToString", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::Base64BinaryToString(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Base64BinaryToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::DateToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::DateTimeToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateTimeToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::DayTimeDurationToString(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DayTimeDurationToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::DurationToString(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DurationToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GDayToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GDayToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GMonthToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GMonthDayToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthDayToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GYearToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GYearMonthToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearMonthToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::DateOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::DateTimeOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateTimeOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GDayOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GDayOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GMonthOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GMonthDayOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GMonthDayOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GYearOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::GYearMonthOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "GYearMonthOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::QNameToString(::System::Xml::XmlQualifiedName* qname, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(),
                                                           { "QNameToString", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, qname, nsResolver);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::TimeToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "TimeToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::TimeOffsetToString(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "TimeOffsetToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlBaseConverter::YearMonthDurationToString(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "YearMonthDurationToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::DateTimeOffsetToDateTime(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DateTimeOffsetToDateTime", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::DecimalToInt32(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DecimalToInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlBaseConverter::DecimalToInt64(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DecimalToInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Xml::Schema::XmlBaseConverter::DecimalToUInt64(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "DecimalToUInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Xml::Schema::XmlBaseConverter::Int32ToByte(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Xml::Schema::XmlBaseConverter::Int32ToInt16(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToInt16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Xml::Schema::XmlBaseConverter::Int32ToSByte(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToSByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Xml::Schema::XmlBaseConverter::Int32ToUInt16(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int32ToUInt16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlBaseConverter::Int64ToInt32(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int64ToInt32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Xml::Schema::XmlBaseConverter::Int64ToUInt32(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "Int64ToUInt32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlBaseConverter::UntypedAtomicToDateTime(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "UntypedAtomicToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlBaseConverter::UntypedAtomicToDateTimeOffset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlBaseConverter*>(), { "UntypedAtomicToDateTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlBaseConverter* System::Xml::Schema::XmlBaseConverter::New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlBaseConverter*>(schemaType));
}
inline ::System::Xml::Schema::XmlBaseConverter* System::Xml::Schema::XmlBaseConverter::New_ctor(::System::Xml::Schema::XmlTypeCode typeCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlBaseConverter*>(typeCode));
}
inline ::System::Xml::Schema::XmlBaseConverter* System::Xml::Schema::XmlBaseConverter::New_ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlBaseConverter*>(converterAtomic));
}
inline ::System::Xml::Schema::XmlBaseConverter* System::Xml::Schema::XmlBaseConverter::New_ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic, ::System::Type* clrTypeDefault) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlBaseConverter*>(converterAtomic, clrTypeDefault));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlBaseConverter::XmlBaseConverter() {}
