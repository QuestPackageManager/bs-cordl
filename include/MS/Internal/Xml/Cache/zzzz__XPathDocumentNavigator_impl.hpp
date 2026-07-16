#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathDocumentNavigator.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_impl.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathDocumentNavigator_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNamespaceScope_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int32_t, ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int32_t)>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6274eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Value)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6274f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNavigator* (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::Clone)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6275338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNodeType (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NodeType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62753b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LocalName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62753f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6275448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Prefix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x627549c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NameTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62754f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.MoveToFirstNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToFirstNamespace)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x627554c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.MoveToNextNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToNextNamespace)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6275818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.MoveToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToParent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6275954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.IsSamePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(::System::Xml::XPath::XPathNavigator*)>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::IsSamePosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62759dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_UnderlyingObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(
    &::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_UnderlyingObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6275a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::HasLineInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6275a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LineNumber)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6275adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LinePosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6275b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathDocumentNavigator.GetPositionHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&::MS::Internal::Xml::Cache::XPathDocumentNavigator::GetPositionHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6275c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "GetPositionHashCode", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__pageCurrent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageCurrent;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> const& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__pageCurrent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageCurrent;
}
constexpr void MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_set__pageCurrent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageCurrent = value;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__pageParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageParent;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> const& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__pageParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageParent;
}
constexpr void MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageParent = value;
}
constexpr int32_t& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__idxCurrent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idxCurrent;
}
constexpr int32_t const& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__idxCurrent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idxCurrent;
}
constexpr void MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_set__idxCurrent(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idxCurrent = value;
}
constexpr int32_t& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__idxParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idxParent;
}
constexpr int32_t const& MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_get__idxParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idxParent;
}
constexpr void MS::Internal::Xml::Cache::XPathDocumentNavigator::__cordl_internal_set__idxParent(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idxParent = value;
}
inline void MS::Internal::Xml::Cache::XPathDocumentNavigator::_ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageCurrent, int32_t idxCurrent,
                                                                    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageParent, int32_t idxParent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageCurrent, idxCurrent, pageParent, idxParent);
}
inline ::StringW MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNavigator* MS::Internal::Xml::Cache::XPathDocumentNavigator::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNavigator*>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNodeType MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NodeType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NamespaceURI() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Prefix() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NameTable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline bool MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceScope);
}
inline bool MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope scope) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scope);
}
inline bool MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToParent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MS::Internal::Xml::Cache::XPathDocumentNavigator::IsSamePosition(::System::Xml::XPath::XPathNavigator* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Object* MS::Internal::Xml::Cache::XPathDocumentNavigator::get_UnderlyingObject() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool MS::Internal::Xml::Cache::XPathDocumentNavigator::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathDocumentNavigator::GetPositionHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(), { "GetPositionHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::MS::Internal::Xml::Cache::XPathDocumentNavigator* MS::Internal::Xml::Cache::XPathDocumentNavigator::New_ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageCurrent, int32_t idxCurrent,
                                                                                                                      ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageParent, int32_t idxParent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::Cache::XPathDocumentNavigator*>(pageCurrent, idxCurrent, pageParent, idxParent));
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr MS::Internal::Xml::Cache::XPathDocumentNavigator::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* MS::Internal::Xml::Cache::XPathDocumentNavigator::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::Cache::XPathDocumentNavigator::XPathDocumentNavigator() {}
