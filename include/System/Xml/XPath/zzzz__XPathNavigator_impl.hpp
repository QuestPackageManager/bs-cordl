#pragma once
// IWYU pragma private; include "System\Xml\XPath\XPathNavigator.hpp"
#include "System/Xml/XPath/zzzz__XPathItem_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNamespaceScope_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigatorKeyComparer_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62e8648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_XmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_XmlType)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x62e8654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_TypedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_TypedValue)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x62e87e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_ValueType)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x62e8ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_ValueAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_ValueAsBoolean)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x62e8ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_ValueAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_ValueAsDateTime)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x62e8f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_ValueAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_ValueAsDouble)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x62e9230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_ValueAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_ValueAsInt)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x62e94fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_ValueAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_ValueAsLong)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x62e97c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.ValueAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XPath::XPathNavigator::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XPath::XPathNavigator::ValueAs)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x62e9a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e9d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_NameTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XPath::XPathNavigator::*)(::StringW)>(&::System::Xml::XPath::XPathNavigator::LookupNamespace)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x62e9d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XPath::XPathNavigator::*)(::StringW)>(&::System::Xml::XPath::XPathNavigator::LookupPrefix)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x62e9f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XPath::XPathNavigator::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XPath::XPathNavigator::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x62ea138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNavigator* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNodeType (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_NodeType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_LocalName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_Prefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_UnderlyingObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_UnderlyingObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ea3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.MoveToNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigator::*)(::StringW)>(&::System::Xml::XPath::XPathNavigator::MoveToNamespace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x62ea3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.MoveToFirstNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(
    &::System::Xml::XPath::XPathNavigator::MoveToFirstNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.MoveToNextNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(
    &::System::Xml::XPath::XPathNavigator::MoveToNextNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.MoveToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::MoveToParent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.IsSamePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigator::*)(::System::Xml::XPath::XPathNavigator*)>(&::System::Xml::XPath::XPathNavigator::IsSamePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62ea444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator.IsText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XPath::XPathNodeType)>(&::System::Xml::XPath::XPathNavigator::IsText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62ea490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { "IsText", {}, { ::i2c::type_of<::System::Xml::XPath::XPathNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XPath::XPathNavigator::*)()>(&::System::Xml::XPath::XPathNavigator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62ea4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::XPath::XPathNavigator::setStaticF_comparer(::System::Xml::XPath::XPathNavigatorKeyComparer* value) {
  ::cordl_internals::setStaticField<::System::Xml::XPath::XPathNavigatorKeyComparer*, "comparer", ::System::Xml::XPath::XPathNavigator*>(
      std::forward<::System::Xml::XPath::XPathNavigatorKeyComparer*>(value));
}
inline ::System::Xml::XPath::XPathNavigatorKeyComparer* System::Xml::XPath::XPathNavigator::getStaticF_comparer() {
  return ::cordl_internals::getStaticField<::System::Xml::XPath::XPathNavigatorKeyComparer*, "comparer", ::System::Xml::XPath::XPathNavigator*>();
}
inline void System::Xml::XPath::XPathNavigator::setStaticF_NodeTypeLetter(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "NodeTypeLetter", ::System::Xml::XPath::XPathNavigator*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Xml::XPath::XPathNavigator::getStaticF_NodeTypeLetter() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "NodeTypeLetter", ::System::Xml::XPath::XPathNavigator*>();
}
inline void System::Xml::XPath::XPathNavigator::setStaticF_UniqueIdTbl(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "UniqueIdTbl", ::System::Xml::XPath::XPathNavigator*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Xml::XPath::XPathNavigator::getStaticF_UniqueIdTbl() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "UniqueIdTbl", ::System::Xml::XPath::XPathNavigator*>();
}
inline void System::Xml::XPath::XPathNavigator::setStaticF_ContentKindMasks(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "ContentKindMasks", ::System::Xml::XPath::XPathNavigator*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::XPath::XPathNavigator::getStaticF_ContentKindMasks() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ContentKindMasks", ::System::Xml::XPath::XPathNavigator*>();
}
inline ::StringW System::Xml::XPath::XPathNavigator::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XPath::XPathNavigator::get_XmlType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XPath::XPathNavigator::get_TypedValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XPath::XPathNavigator::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Xml::XPath::XPathNavigator::get_ValueAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XPath::XPathNavigator::get_ValueAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline double_t System::Xml::XPath::XPathNavigator::get_ValueAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t System::Xml::XPath::XPathNavigator::get_ValueAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XPath::XPathNavigator::get_ValueAsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XPath::XPathNavigator::ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, returnType, nsResolver);
}
inline ::System::Object* System::Xml::XPath::XPathNavigator::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XPath::XPathNavigator::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Xml::XPath::XPathNavigator::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XPath::XPathNavigator::LookupPrefix(::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceURI);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::XPath::XPathNavigator::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::System::Xml::XPath::XPathNavigator* System::Xml::XPath::XPathNavigator::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNavigator*>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNodeType System::Xml::XPath::XPathNavigator::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XPath::XPathNavigator::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XPath::XPathNavigator::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XPath::XPathNavigator::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XPath::XPathNavigator::get_UnderlyingObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::XPath::XPathNavigator::MoveToNamespace(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::XPath::XPathNavigator::MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceScope);
}
inline bool System::Xml::XPath::XPathNavigator::MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceScope);
}
inline bool System::Xml::XPath::XPathNavigator::MoveToParent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XPath::XPathNavigator::IsSamePosition(::System::Xml::XPath::XPathNavigator* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XPath::XPathNavigator::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline bool System::Xml::XPath::XPathNavigator::IsText(::System::Xml::XPath::XPathNodeType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { "IsText", {}, { ::i2c::type_of<::System::Xml::XPath::XPathNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline void System::Xml::XPath::XPathNavigator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNavigator* System::Xml::XPath::XPathNavigator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XPath::XPathNavigator*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Xml::XPath::XPathNavigator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Xml::XPath::XPathNavigator::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XPath::XPathNavigator::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XPath::XPathNavigator::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathNavigator::XPathNavigator() {}
