#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlDateTime.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDateTime_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(bool)>(&::System::Data::SqlTypes::SqlDateTime::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6088180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(::System::DateTime)>(&::System::Data::SqlTypes::SqlDateTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x608818c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(int32_t, int32_t)>(&::System::Data::SqlTypes::SqlDateTime::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60882f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6088424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::ToTimeSpan)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6088434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "ToTimeSpan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::ToDateTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60884e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "ToDateTime", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.FromTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::TimeSpan)>(&::System::Data::SqlTypes::SqlDateTime::FromTimeSpan)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6088590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "FromTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.FromDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::DateTime)>(&::System::Data::SqlTypes::SqlDateTime::FromDateTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60881fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "FromDateTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_Value)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6088784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_DayTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_DayTicks)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6088820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_DayTicks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_TimeTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_TimeTicks)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6088864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_TimeTicks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_Implicit___System__Data__SqlTypes__SqlDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::DateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::op_Implicit___System__Data__SqlTypes__SqlDateTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60888a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "op_Implicit", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60888d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::op_Equality)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60889d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::op_LessThan)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6088ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                                { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::op_GreaterThan)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6088ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::LessThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6088c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                                { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::GreaterThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6088d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                                { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDateTime::CompareTo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6088d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)(::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::CompareTo)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6088ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDateTime::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDateTime::Equals)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6089020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6089164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlDateTime::*)()>(
    &::System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6089224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x608922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x608943c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlDateTime::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60895e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLTicksPerMillisecond(double_t value) {
  ::cordl_internals::setStaticField<double_t, "s_SQLTicksPerMillisecond", ::System::Data::SqlTypes::SqlDateTime>(std::forward<double_t>(value));
}
inline double_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLTicksPerMillisecond() {
  return ::cordl_internals::getStaticField<double_t, "s_SQLTicksPerMillisecond", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_SQLTicksPerSecond(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerSecond", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_SQLTicksPerSecond() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerSecond", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_SQLTicksPerMinute(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerMinute", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_SQLTicksPerMinute() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerMinute", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_SQLTicksPerHour(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerHour", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_SQLTicksPerHour() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerHour", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLTicksPerDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SQLTicksPerDay", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLTicksPerDay() {
  return ::cordl_internals::getStaticField<int32_t, "s_SQLTicksPerDay", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_ticksPerSecond(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_ticksPerSecond", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_ticksPerSecond() {
  return ::cordl_internals::getStaticField<int64_t, "s_ticksPerSecond", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLBaseDate(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_SQLBaseDate", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLBaseDate() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_SQLBaseDate", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLBaseDateTicks(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_SQLBaseDateTicks", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLBaseDateTicks() {
  return ::cordl_internals::getStaticField<int64_t, "s_SQLBaseDateTicks", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minYear(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_minYear", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_minYear() {
  return ::cordl_internals::getStaticField<int32_t, "s_minYear", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxYear(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_maxYear", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxYear() {
  return ::cordl_internals::getStaticField<int32_t, "s_maxYear", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_minDay", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_minDay() {
  return ::cordl_internals::getStaticField<int32_t, "s_minDay", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_maxDay", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxDay() {
  return ::cordl_internals::getStaticField<int32_t, "s_maxDay", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minTime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_minTime", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_minTime() {
  return ::cordl_internals::getStaticField<int32_t, "s_minTime", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxTime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_maxTime", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxTime() {
  return ::cordl_internals::getStaticField<int32_t, "s_maxTime", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_dayBase(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_dayBase", ::System::Data::SqlTypes::SqlDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_dayBase() {
  return ::cordl_internals::getStaticField<int32_t, "s_dayBase", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_daysToMonth365(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_daysToMonth365", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Data::SqlTypes::SqlDateTime::getStaticF_s_daysToMonth365() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_daysToMonth365", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_daysToMonth366(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_daysToMonth366", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Data::SqlTypes::SqlDateTime::getStaticF_s_daysToMonth366() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_daysToMonth366", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minDateTime(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_minDateTime", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::getStaticF_s_minDateTime() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_minDateTime", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxDateTime(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_maxDateTime", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxDateTime() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_maxDateTime", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minTimeSpan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "s_minTimeSpan", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Data::SqlTypes::SqlDateTime::getStaticF_s_minTimeSpan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "s_minTimeSpan", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxTimeSpan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "s_maxTimeSpan", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxTimeSpan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "s_maxTimeSpan", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_ISO8601_DateTimeFormat(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_ISO8601_DateTimeFormat", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::StringW>(value));
}
inline ::StringW System::Data::SqlTypes::SqlDateTime::getStaticF_s_ISO8601_DateTimeFormat() {
  return ::cordl_internals::getStaticField<::StringW, "s_ISO8601_DateTimeFormat", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_dateTimeFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_dateTimeFormats", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Data::SqlTypes::SqlDateTime::getStaticF_s_dateTimeFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_dateTimeFormats", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_MinValue(::System::Data::SqlTypes::SqlDateTime value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDateTime, "MinValue", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::Data::SqlTypes::SqlDateTime>(value));
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDateTime, "MinValue", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_MaxValue(::System::Data::SqlTypes::SqlDateTime value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDateTime, "MaxValue", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::Data::SqlTypes::SqlDateTime>(value));
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDateTime, "MaxValue", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_Null(::System::Data::SqlTypes::SqlDateTime value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDateTime, "Null", ::System::Data::SqlTypes::SqlDateTime>(std::forward<::System::Data::SqlTypes::SqlDateTime>(value));
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDateTime, "Null", ::System::Data::SqlTypes::SqlDateTime>();
}
inline void System::Data::SqlTypes::SqlDateTime::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlDateTime::_ctor(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlDateTime::_ctor(int32_t dayTicks, int32_t timeTicks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dayTicks, timeTicks);
}
inline bool System::Data::SqlTypes::SqlDateTime::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Data::SqlTypes::SqlDateTime::ToTimeSpan(::System::Data::SqlTypes::SqlDateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "ToTimeSpan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::ToDateTime(::System::Data::SqlTypes::SqlDateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "ToDateTime", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::FromTimeSpan(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "FromTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDateTime>(nullptr, ___internal_method, value);
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::FromDateTime(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "FromDateTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::get_DayTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_DayTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::get_TimeTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "get_TimeTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::op_Implicit___System__Data__SqlTypes__SqlDateTime(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "op_Implicit", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDateTime>(nullptr, ___internal_method, value);
}
inline ::StringW System::Data::SqlTypes::SqlDateTime::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::op_Equality(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::op_LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                              { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::op_GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                              { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(),
                                              { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::CompareTo(::System::Data::SqlTypes::SqlDateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlDateTime::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlDateTime::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDateTime>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlDateTime::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlDateTime::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlDateTime::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlDateTime::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlDateTime::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlDateTime::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_day", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_time", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlDateTime::SqlDateTime(bool m_fNotNull, int32_t m_day, int32_t m_time) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_day = m_day;
  this->m_time = m_time;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlDateTime::SqlDateTime() {}
