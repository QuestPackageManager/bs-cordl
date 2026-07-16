#pragma once
// IWYU pragma private; include "System/Xml/Linq/XDocument.hpp"
#include "System/Xml/Linq/zzzz__XContainer_impl.hpp"
#include "System/Xml/Linq/zzzz__XDocument_def.hpp"
#include "System/Xml/Linq/zzzz__XAttribute_def.hpp"
#include "System/Xml/Linq/zzzz__XDeclaration_def.hpp"
#include "System/Xml/Linq/zzzz__XElement_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)()>(&::System::Xml::Linq::XDocument::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a2900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XDocument*)>(&::System::Xml::Linq::XDocument::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61a2904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.get_Declaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XDeclaration* (::System::Xml::Linq::XDocument::*)()>(&::System::Xml::Linq::XDocument::get_Declaration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "get_Declaration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.set_Declaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XDeclaration*)>(&::System::Xml::Linq::XDocument::set_Declaration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a2994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "set_Declaration", {}, { ::i2c::type_of<::System::Xml::Linq::XDeclaration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XDocument::*)()>(&::System::Xml::Linq::XDocument::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a299c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.get_Root
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XElement* (::System::Xml::Linq::XDocument::*)()>(&::System::Xml::Linq::XDocument::get_Root)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61a29a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "get_Root", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::XDocument::WriteTo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x61a29f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XAttribute*)>(&::System::Xml::Linq::XDocument::AddAttribute)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61a2b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.AddAttributeSkipNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XAttribute*)>(&::System::Xml::Linq::XDocument::AddAttributeSkipNotify)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61a2b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XNode* (::System::Xml::Linq::XDocument::*)()>(&::System::Xml::Linq::XDocument::CloneNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61a2bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.IsWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::Linq::XDocument::IsWhitespace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61a2c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "IsWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.ValidateNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*)>(
    &::System::Xml::Linq::XDocument::ValidateNode)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x61a2c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.ValidateDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XNode*, ::System::Xml::XmlNodeType, ::System::Xml::XmlNodeType)>(
    &::System::Xml::Linq::XDocument::ValidateDocument)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x61a2e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Linq::XDocument*>(),
                         { "ValidateDocument", {}, { ::i2c::type_of<::System::Xml::Linq::XNode*>(), ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XDocument.ValidateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XDocument::*)(::StringW)>(&::System::Xml::Linq::XDocument::ValidateString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a2f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XDeclaration*& System::Xml::Linq::XDocument::__cordl_internal_get__declaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declaration;
}
constexpr ::System::Xml::Linq::XDeclaration* const& System::Xml::Linq::XDocument::__cordl_internal_get__declaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declaration;
}
constexpr void System::Xml::Linq::XDocument::__cordl_internal_set__declaration(::System::Xml::Linq::XDeclaration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____declaration = value;
}
inline void System::Xml::Linq::XDocument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Linq::XDocument::_ctor(::System::Xml::Linq::XDocument* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Xml::Linq::XDeclaration* System::Xml::Linq::XDocument::get_Declaration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "get_Declaration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XDeclaration*>(this, ___internal_method);
}
inline void System::Xml::Linq::XDocument::set_Declaration(::System::Xml::Linq::XDeclaration* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "set_Declaration", {}, { ::i2c::type_of<::System::Xml::Linq::XDeclaration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNodeType System::Xml::Linq::XDocument::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::Linq::XElement* System::Xml::Linq::XDocument::get_Root() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "get_Root", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XElement*>(this, ___internal_method);
}
inline void System::Xml::Linq::XDocument::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::Linq::XDocument::AddAttribute(::System::Xml::Linq::XAttribute* a) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline void System::Xml::Linq::XDocument::AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::System::Xml::Linq::XNode* System::Xml::Linq::XDocument::CloneNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode*>(this, ___internal_method);
}
template <typename T> inline T System::Xml::Linq::XDocument::GetFirstNode() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "GetFirstNode", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline bool System::Xml::Linq::XDocument::IsWhitespace(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(), { "IsWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline void System::Xml::Linq::XDocument::ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, previous);
}
inline void System::Xml::Linq::XDocument::ValidateDocument(::System::Xml::Linq::XNode* previous, ::System::Xml::XmlNodeType allowBefore, ::System::Xml::XmlNodeType allowAfter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XDocument*>(),
                          { "ValidateDocument", {}, { ::i2c::type_of<::System::Xml::Linq::XNode*>(), ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, allowBefore, allowAfter);
}
inline void System::Xml::Linq::XDocument::ValidateString(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XDocument*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Xml::Linq::XDocument* System::Xml::Linq::XDocument::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XDocument*>());
}
inline ::System::Xml::Linq::XDocument* System::Xml::Linq::XDocument::New_ctor(::System::Xml::Linq::XDocument* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XDocument*>(other));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XDocument::XDocument() {}
