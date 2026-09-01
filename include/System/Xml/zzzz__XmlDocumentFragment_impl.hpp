#pragma once
// IWYU pragma private; include "System\Xml\XmlDocumentFragment.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlDocumentFragment_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlDocument*)>(&::System::Xml::XmlDocumentFragment::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62bd054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_Name)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62bfb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_LocalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62bfb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bfbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_ParentNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bfbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_OwnerDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_OwnerDocument)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62bfbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.set_InnerXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentFragment::*)(::StringW)>(&::System::Xml::XmlDocumentFragment::set_InnerXml)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62bfc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocumentFragment::*)(bool)>(&::System::Xml::XmlDocumentFragment::CloneNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62bfed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_IsContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_LastNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlLinkedNode* (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bff5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.set_LastNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlLinkedNode*)>(&::System::Xml::XmlDocumentFragment::set_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bff64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.IsValidChildType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlDocumentFragment::IsValidChildType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62bff6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.CanInsertAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocumentFragment::CanInsertAfter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62bffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.CanInsertBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocumentFragment::CanInsertBefore)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62c0050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocumentFragment::WriteTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62c00b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.WriteContentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocumentFragment::WriteContentTo)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x62c00c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocumentFragment.get_XPNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNodeType (::System::Xml::XmlDocumentFragment::*)()>(&::System::Xml::XmlDocumentFragment::get_XPNodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c0368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 56 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlDocumentFragment::__cordl_internal_get_lastChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr ::System::Xml::XmlLinkedNode* const& System::Xml::XmlDocumentFragment::__cordl_internal_get_lastChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr void System::Xml::XmlDocumentFragment::__cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastChild = value;
}
inline void System::Xml::XmlDocumentFragment::_ctor(::System::Xml::XmlDocument* ownerDocument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownerDocument);
}
inline ::StringW System::Xml::XmlDocumentFragment::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocumentFragment::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlDocumentFragment::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocumentFragment::get_ParentNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocumentFragment::get_OwnerDocument() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline void System::Xml::XmlDocumentFragment::set_InnerXml(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocumentFragment::CloneNode(bool deep) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline bool System::Xml::XmlDocumentFragment::get_IsContainer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlDocumentFragment::get_LastNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlLinkedNode*>(this, ___internal_method);
}
inline void System::Xml::XmlDocumentFragment::set_LastNode(::System::Xml::XmlLinkedNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocumentFragment::IsValidChildType(::System::Xml::XmlNodeType type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::Xml::XmlDocumentFragment::CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newChild, refChild);
}
inline bool System::Xml::XmlDocumentFragment::CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newChild, refChild);
}
inline void System::Xml::XmlDocumentFragment::WriteTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlDocumentFragment::WriteContentTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::System::Xml::XPath::XPathNodeType System::Xml::XmlDocumentFragment::get_XPNodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocumentFragment*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlDocumentFragment* System::Xml::XmlDocumentFragment::New_ctor(::System::Xml::XmlDocument* ownerDocument) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDocumentFragment*>(ownerDocument));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDocumentFragment::XmlDocumentFragment() {}
