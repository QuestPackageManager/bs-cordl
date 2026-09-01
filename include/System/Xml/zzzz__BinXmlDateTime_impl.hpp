#pragma once
// IWYU pragma private; include "System\Xml\BinXmlDateTime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__BinXmlDateTime_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.Write2Dig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::System::Xml::BinXmlDateTime::Write2Dig)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6194358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "Write2Dig", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.Write4DigNeg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::System::Xml::BinXmlDateTime::Write4DigNeg)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x61943ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "Write4DigNeg", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.Write3Dec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::System::Xml::BinXmlDateTime::Write3Dec)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x619445c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "Write3Dec", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.WriteDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t, int32_t)>(&::System::Xml::BinXmlDateTime::WriteDate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61944f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                         { "WriteDate", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.WriteTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t, int32_t, int32_t)>(&::System::Xml::BinXmlDateTime::WriteTime)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x61945f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
            { "WriteTime", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.WriteTimeFullPrecision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t, int32_t, int32_t)>(&::System::Xml::BinXmlDateTime::WriteTimeFullPrecision)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6194734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "WriteTimeFullPrecision",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.WriteTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::TimeSpan)>(&::System::Xml::BinXmlDateTime::WriteTimeZone)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6194970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "WriteTimeZone", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.WriteTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, bool, int32_t, int32_t)>(&::System::Xml::BinXmlDateTime::WriteTimeZone)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6194ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                         { "WriteTimeZone", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.BreakDownXsdDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                                                                ::by_ref<int32_t>)>(&::System::Xml::BinXmlDateTime::BreakDownXsdDateTime)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6194be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                         { "BreakDownXsdDateTime",
                                           {},
                                           { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.BreakDownXsdDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Xml::BinXmlDateTime::BreakDownXsdDate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6194dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                { "BreakDownXsdDate",
                                                  {},
                                                  { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.BreakDownXsdTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Xml::BinXmlDateTime::BreakDownXsdTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6194f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "BreakDownXsdTime",
                                                                                              {},
                                                                                              { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdDateTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::System::Xml::BinXmlDateTime::XsdDateTimeToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6195008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateTimeToString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdDateTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::Xml::BinXmlDateTime::XsdDateTimeToDateTime)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6195110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateTimeToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdDateToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::System::Xml::BinXmlDateTime::XsdDateToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61951c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateToString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdDateToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::Xml::BinXmlDateTime::XsdDateToDateTime)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61952b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::System::Xml::BinXmlDateTime::XsdTimeToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6195404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdTimeToString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::Xml::BinXmlDateTime::XsdTimeToDateTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61954dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdTimeToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.SqlDateTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, uint32_t)>(&::System::Xml::BinXmlDateTime::SqlDateTimeToString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6195584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlDateTimeToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.SqlDateTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int32_t, uint32_t)>(&::System::Xml::BinXmlDateTime::SqlDateTimeToDateTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x61956cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlDateTimeToDateTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.SqlSmallDateTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int16_t, uint16_t)>(&::System::Xml::BinXmlDateTime::SqlSmallDateTimeToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61957c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlSmallDateTimeToString", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.SqlSmallDateTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int16_t, uint16_t)>(&::System::Xml::BinXmlDateTime::SqlSmallDateTimeToDateTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61958c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlSmallDateTimeToDateTime", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateToDateTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6195940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToDateTime)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6195a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                                                           { "XsdKatmaiDateTimeToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiTimeToDateTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6195cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateOffsetToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToDateTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6195d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateOffsetToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateTimeOffsetToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToDateTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6195e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeOffsetToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiTimeOffsetToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToDateTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6195fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeOffsetToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateOffsetToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToDateTimeOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6195e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateOffsetToDateTimeOffset", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateTimeOffsetToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToDateTimeOffset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6195f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeOffsetToDateTimeOffset", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiTimeOffsetToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToDateTimeOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6196088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeOffsetToDateTimeOffset", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateToString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6196144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToString)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6196264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiTimeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiTimeToString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6196500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6196638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                                                           { "XsdKatmaiDateOffsetToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiDateTimeOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x619678c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeOffsetToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.XsdKatmaiTimeOffsetToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6196a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                                                           { "XsdKatmaiTimeOffsetToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.GetKatmaiDateTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::System::Xml::BinXmlDateTime::GetKatmaiDateTicks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61959c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetKatmaiDateTicks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.GetKatmaiTimeTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::System::Xml::BinXmlDateTime::GetKatmaiTimeTicks)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6195ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetKatmaiTimeTicks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.GetKatmaiTimeZoneTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlDateTime::GetKatmaiTimeZoneTicks)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61960f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetKatmaiTimeZoneTicks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.GetFractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DateTime)>(&::System::Xml::BinXmlDateTime::GetFractions)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x61963ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetFractions", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlDateTime.GetFractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DateTimeOffset)>(&::System::Xml::BinXmlDateTime::GetFractions)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x619694c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetFractions", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::BinXmlDateTime::setStaticF_KatmaiTimeScaleMultiplicator(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "KatmaiTimeScaleMultiplicator", ::System::Xml::BinXmlDateTime*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::BinXmlDateTime::getStaticF_KatmaiTimeScaleMultiplicator() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "KatmaiTimeScaleMultiplicator", ::System::Xml::BinXmlDateTime*>();
}
inline void System::Xml::BinXmlDateTime::setStaticF_SQLTicksPerMillisecond(double_t value) {
  ::cordl_internals::setStaticField<double_t, "SQLTicksPerMillisecond", ::System::Xml::BinXmlDateTime*>(std::forward<double_t>(value));
}
inline double_t System::Xml::BinXmlDateTime::getStaticF_SQLTicksPerMillisecond() {
  return ::cordl_internals::getStaticField<double_t, "SQLTicksPerMillisecond", ::System::Xml::BinXmlDateTime*>();
}
inline void System::Xml::BinXmlDateTime::setStaticF_SQLTicksPerSecond(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerSecond", ::System::Xml::BinXmlDateTime*>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::BinXmlDateTime::getStaticF_SQLTicksPerSecond() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerSecond", ::System::Xml::BinXmlDateTime*>();
}
inline void System::Xml::BinXmlDateTime::setStaticF_SQLTicksPerMinute(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerMinute", ::System::Xml::BinXmlDateTime*>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::BinXmlDateTime::getStaticF_SQLTicksPerMinute() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerMinute", ::System::Xml::BinXmlDateTime*>();
}
inline void System::Xml::BinXmlDateTime::setStaticF_SQLTicksPerHour(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerHour", ::System::Xml::BinXmlDateTime*>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::BinXmlDateTime::getStaticF_SQLTicksPerHour() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerHour", ::System::Xml::BinXmlDateTime*>();
}
inline void System::Xml::BinXmlDateTime::setStaticF_SQLTicksPerDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerDay", ::System::Xml::BinXmlDateTime*>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::BinXmlDateTime::getStaticF_SQLTicksPerDay() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerDay", ::System::Xml::BinXmlDateTime*>();
}
inline void System::Xml::BinXmlDateTime::Write2Dig(::System::Text::StringBuilder* sb, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "Write2Dig", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, val);
}
inline void System::Xml::BinXmlDateTime::Write4DigNeg(::System::Text::StringBuilder* sb, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "Write4DigNeg", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, val);
}
inline void System::Xml::BinXmlDateTime::Write3Dec(::System::Text::StringBuilder* sb, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "Write3Dec", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, val);
}
inline void System::Xml::BinXmlDateTime::WriteDate(::System::Text::StringBuilder* sb, int32_t yr, int32_t mnth, int32_t day) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                       { "WriteDate", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, yr, mnth, day);
}
inline void System::Xml::BinXmlDateTime::WriteTime(::System::Text::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t ms) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
          { "WriteTime", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, hr, min, sec, ms);
}
inline void System::Xml::BinXmlDateTime::WriteTimeFullPrecision(::System::Text::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t fraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "WriteTimeFullPrecision",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, hr, min, sec, fraction);
}
inline void System::Xml::BinXmlDateTime::WriteTimeZone(::System::Text::StringBuilder* sb, ::System::TimeSpan zone) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "WriteTimeZone", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, zone);
}
inline void System::Xml::BinXmlDateTime::WriteTimeZone(::System::Text::StringBuilder* sb, bool negTimeZone, int32_t hr, int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                       { "WriteTimeZone", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, negTimeZone, hr, min);
}
inline void System::Xml::BinXmlDateTime::BreakDownXsdDateTime(int64_t val, ::by_ref<int32_t> yr, ::by_ref<int32_t> mnth, ::by_ref<int32_t> day, ::by_ref<int32_t> hr, ::by_ref<int32_t> min,
                                                              ::by_ref<int32_t> sec, ::by_ref<int32_t> ms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                       { "BreakDownXsdDateTime",
                                         {},
                                         { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, yr, mnth, day, hr, min, sec, ms);
}
inline void System::Xml::BinXmlDateTime::BreakDownXsdDate(int64_t val, ::by_ref<int32_t> yr, ::by_ref<int32_t> mnth, ::by_ref<int32_t> day, ::by_ref<bool> negTimeZone, ::by_ref<int32_t> hr,
                                                          ::by_ref<int32_t> min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                           { "BreakDownXsdDate",
                                                             {},
                                                             { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, yr, mnth, day, negTimeZone, hr, min);
}
inline void System::Xml::BinXmlDateTime::BreakDownXsdTime(int64_t val, ::by_ref<int32_t> hr, ::by_ref<int32_t> min, ::by_ref<int32_t> sec, ::by_ref<int32_t> ms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "BreakDownXsdTime",
                                                                                            {},
                                                                                            { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                              ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, hr, min, sec, ms);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdDateTimeToString(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateTimeToString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, val);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdDateTimeToDateTime(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateTimeToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, val);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdDateToString(int64_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateToString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, val);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdDateToDateTime(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdDateToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, val);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdTimeToString(int64_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdTimeToString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, val);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdTimeToDateTime(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdTimeToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, val);
}
inline ::StringW System::Xml::BinXmlDateTime::SqlDateTimeToString(int32_t dateticks, uint32_t timeticks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlDateTimeToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dateticks, timeticks);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::SqlDateTimeToDateTime(int32_t dateticks, uint32_t timeticks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlDateTimeToDateTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateticks, timeticks);
}
inline ::StringW System::Xml::BinXmlDateTime::SqlSmallDateTimeToString(int16_t dateticks, uint16_t timeticks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlSmallDateTimeToString", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dateticks, timeticks);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::SqlSmallDateTimeToDateTime(int16_t dateticks, uint16_t timeticks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "SqlSmallDateTimeToDateTime", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateticks, timeticks);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdKatmaiDateToDateTime(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToDateTime(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdKatmaiTimeToDateTime(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToDateTime(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                                                         { "XsdKatmaiDateOffsetToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToDateTime(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeOffsetToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTime System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToDateTime(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(),
                                                                                         { "XsdKatmaiTimeOffsetToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTimeOffset System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateOffsetToDateTimeOffset", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTimeOffset System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeOffsetToDateTimeOffset", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, data, offset);
}
inline ::System::DateTimeOffset System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeOffsetToDateTimeOffset", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, data, offset);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdKatmaiDateToString(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, offset);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToString(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, offset);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdKatmaiTimeToString(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, offset);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToString(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateOffsetToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, offset);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToString(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiDateTimeOffsetToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, offset);
}
inline ::StringW System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToString(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "XsdKatmaiTimeOffsetToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, offset);
}
inline int64_t System::Xml::BinXmlDateTime::GetKatmaiDateTicks(::ArrayW<uint8_t> data, ::by_ref<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetKatmaiDateTicks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, data, pos);
}
inline int64_t System::Xml::BinXmlDateTime::GetKatmaiTimeTicks(::ArrayW<uint8_t> data, ::by_ref<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetKatmaiTimeTicks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, data, pos);
}
inline int64_t System::Xml::BinXmlDateTime::GetKatmaiTimeZoneTicks(::ArrayW<uint8_t> data, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetKatmaiTimeZoneTicks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, data, pos);
}
inline int32_t System::Xml::BinXmlDateTime::GetFractions(::System::DateTime dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetFractions", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dt);
}
inline int32_t System::Xml::BinXmlDateTime::GetFractions(::System::DateTimeOffset dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlDateTime*>(), { "GetFractions", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dt);
}
// Ctor Parameters []
constexpr ::System::Xml::BinXmlDateTime::BinXmlDateTime() {}
