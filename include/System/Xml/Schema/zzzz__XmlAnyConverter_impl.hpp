#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlAnyConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlAnyConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlAnyConverter::*)(::System::Xml::Schema::XmlTypeCode)>(&::System::Xml::Schema::XmlAnyConverter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6257ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6257d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6257fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(
    &::System::Xml::Schema::XmlAnyConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6258160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToDecimal)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6258318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToDouble)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x62584d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToInt32)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x625865c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToInt64)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x62587e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlAnyConverter::ToSingle)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6258974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(bool, ::System::Type*)>(&::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6258b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(::System::DateTime, ::System::Type*)>(
    &::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6258e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(::System::Decimal, ::System::Type*)>(
    &::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6258fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(double_t, ::System::Type*)>(&::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6259224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(int32_t, ::System::Type*)>(&::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x62593d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(int64_t, ::System::Type*)>(&::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x625958c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6259740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlAnyConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1284;
  constexpr static std::size_t addrs = 0x6259908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeTypeWildcardDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardDestination)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6257e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(),
            { "ChangeTypeWildcardDestination", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ChangeTypeWildcardSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardSource)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6258cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(),
                            { "ChangeTypeWildcardSource", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyConverter.ToNavigator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNavigator* (::System::Xml::Schema::XmlAnyConverter::*)(::System::Xml::XPath::XPathNavigator*)>(
    &::System::Xml::Schema::XmlAnyConverter::ToNavigator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x625ab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { "ToNavigator", {}, { ::i2c::type_of<::System::Xml::XPath::XPathNavigator*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlAnyConverter::setStaticF_Item(::System::Xml::Schema::XmlValueConverter* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "Item", ::System::Xml::Schema::XmlAnyConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlAnyConverter::getStaticF_Item() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "Item", ::System::Xml::Schema::XmlAnyConverter*>();
}
inline void System::Xml::Schema::XmlAnyConverter::setStaticF_AnyAtomic(::System::Xml::Schema::XmlValueConverter* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "AnyAtomic", ::System::Xml::Schema::XmlAnyConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlAnyConverter::getStaticF_AnyAtomic() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "AnyAtomic", ::System::Xml::Schema::XmlAnyConverter*>();
}
inline void System::Xml::Schema::XmlAnyConverter::_ctor(::System::Xml::Schema::XmlTypeCode typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeCode);
}
inline bool System::Xml::Schema::XmlAnyConverter::ToBoolean(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlAnyConverter::ToDateTime(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlAnyConverter::ToDateTimeOffset(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlAnyConverter::ToDecimal(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlAnyConverter::ToDouble(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlAnyConverter::ToInt32(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlAnyConverter::ToInt64(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlAnyConverter::ToSingle(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(bool value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(::System::DateTime value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(::System::Decimal value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(double_t value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(int32_t value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(int64_t value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType,
                                                                                             ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(),
                       { "ChangeTypeWildcardDestination", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlAnyConverter::ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(),
                          { "ChangeTypeWildcardSource", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Xml::XPath::XPathNavigator* System::Xml::Schema::XmlAnyConverter::ToNavigator(::System::Xml::XPath::XPathNavigator* nav) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyConverter*>(), { "ToNavigator", {}, { ::i2c::type_of<::System::Xml::XPath::XPathNavigator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNavigator*>(this, ___internal_method, nav);
}
inline ::System::Xml::Schema::XmlAnyConverter* System::Xml::Schema::XmlAnyConverter::New_ctor(::System::Xml::Schema::XmlTypeCode typeCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlAnyConverter*>(typeCode));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlAnyConverter::XmlAnyConverter() {}
