#pragma once
// IWYU pragma private; include "System\Xml\XmlEntityReference.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_impl.hpp"
#include "System/Xml/zzzz__XmlEntityReference_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlEntityReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::StringW, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlEntityReference::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62bd658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::StringW)>(&::System::Xml::XmlEntityReference::set_Value)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62c1d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlEntityReference::*)(bool)>(&::System::Xml::XmlEntityReference::CloneNode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62c1da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_IsContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.SetParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlEntityReference::SetParent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62c1de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.SetParentForLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlEntityReference::SetParentForLoad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62c24c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_LastNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlLinkedNode* (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c24d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.set_LastNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::System::Xml::XmlLinkedNode*)>(&::System::Xml::XmlEntityReference::set_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c24dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.IsValidChildType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlEntityReference::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlEntityReference::IsValidChildType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62c24e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlEntityReference::WriteTo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62c24fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.WriteContentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlEntityReference::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlEntityReference::WriteContentTo)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x62c2524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_BaseURI)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x62c27c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.ConstructBaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlEntityReference::*)(::StringW, ::StringW)>(&::System::Xml::XmlEntityReference::ConstructBaseURI)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62c27f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { "ConstructBaseURI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEntityReference.get_ChildBaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlEntityReference::*)()>(&::System::Xml::XmlEntityReference::get_ChildBaseURI)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62c28e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { "get_ChildBaseURI", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlEntityReference::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::XmlEntityReference::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::XmlEntityReference::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlEntityReference::__cordl_internal_get_lastChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr ::System::Xml::XmlLinkedNode* const& System::Xml::XmlEntityReference::__cordl_internal_get_lastChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr void System::Xml::XmlEntityReference::__cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastChild = value;
}
inline void System::Xml::XmlEntityReference::_ctor(::StringW name, ::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, doc);
}
inline ::StringW System::Xml::XmlEntityReference::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlEntityReference::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlEntityReference::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlEntityReference::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlEntityReference::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlEntityReference::CloneNode(bool deep) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline bool System::Xml::XmlEntityReference::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlEntityReference::get_IsContainer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlEntityReference::SetParent(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Xml::XmlEntityReference::SetParentForLoad(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlEntityReference::get_LastNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlLinkedNode*>(this, ___internal_method);
}
inline void System::Xml::XmlEntityReference::set_LastNode(::System::Xml::XmlLinkedNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlEntityReference::IsValidChildType(::System::Xml::XmlNodeType type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline void System::Xml::XmlEntityReference::WriteTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlEntityReference::WriteContentTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::StringW System::Xml::XmlEntityReference::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlEntityReference*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlEntityReference::ConstructBaseURI(::StringW baseURI, ::StringW systemId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { "ConstructBaseURI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, baseURI, systemId);
}
inline ::StringW System::Xml::XmlEntityReference::get_ChildBaseURI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlEntityReference*>(), { "get_ChildBaseURI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlEntityReference* System::Xml::XmlEntityReference::New_ctor(::StringW name, ::System::Xml::XmlDocument* doc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlEntityReference*>(name, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlEntityReference::XmlEntityReference() {}
