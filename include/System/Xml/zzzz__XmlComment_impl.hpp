#pragma once
// IWYU pragma private; include "System\Xml\XmlComment.hpp"
#include "System/Xml/zzzz__XmlCharacterData_impl.hpp"
#include "System/Xml/zzzz__XmlComment_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlComment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlComment::*)(::StringW, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlComment::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62babc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlComment::*)()>(&::System::Xml::XmlComment::get_Name)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62babf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlComment::*)()>(&::System::Xml::XmlComment::get_LocalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62bac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlComment::*)()>(&::System::Xml::XmlComment::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlComment::*)(bool)>(&::System::Xml::XmlComment::CloneNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62bac48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlComment::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlComment::WriteTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62baca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.WriteContentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlComment::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlComment::WriteContentTo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62bace4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComment.get_XPNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNodeType (::System::Xml::XmlComment::*)()>(&::System::Xml::XmlComment::get_XPNodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62bace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ::i2c::class_of<::System::Xml::XmlComment*>(), 56 }));
    return ___internal_method;
  }
};
inline void System::Xml::XmlComment::_ctor(::StringW comment, ::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlComment*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment, doc);
}
inline ::StringW System::Xml::XmlComment::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlComment::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlComment::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlComment::CloneNode(bool deep) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline void System::Xml::XmlComment::WriteTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlComment::WriteContentTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::System::Xml::XPath::XPathNodeType System::Xml::XmlComment::get_XPNodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlComment*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlComment* System::Xml::XmlComment::New_ctor(::StringW comment, ::System::Xml::XmlDocument* doc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlComment*>(comment, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlComment::XmlComment() {}
