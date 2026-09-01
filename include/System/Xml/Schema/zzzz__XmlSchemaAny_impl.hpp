#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaAny.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622beec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAny::set_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622bef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.set_ProcessContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(
    &::System::Xml::Schema::XmlSchemaAny::set_ProcessContents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622befc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(),
                                                                                           { "set_ProcessContents", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentProcessing>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_NamespaceList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::get_NamespaceList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_NamespaceList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_ResolvedNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::get_ResolvedNamespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x622bf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_ResolvedNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_ProcessContentsCorrect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContentProcessing (::System::Xml::Schema::XmlSchemaAny::*)()>(
    &::System::Xml::Schema::XmlSchemaAny::get_ProcessContentsCorrect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x622bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_ProcessContentsCorrect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_NameString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::get_NameString)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x622bf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.BuildNamespaceList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAny::BuildNamespaceList)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x622c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "BuildNamespaceList", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.BuildNamespaceListV1Compat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAny::BuildNamespaceListV1Compat)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x622c4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "BuildNamespaceListV1Compat", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.Allows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaAny::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaAny::Allows)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x622c574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "Allows", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x622c59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Schema::XmlSchemaAny::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_processContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_processContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr void System::Xml::Schema::XmlSchemaAny::__cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processContents = value;
}
constexpr ::System::Xml::Schema::NamespaceList*& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_namespaceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceList;
}
constexpr ::System::Xml::Schema::NamespaceList* const& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_namespaceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceList;
}
constexpr void System::Xml::Schema::XmlSchemaAny::__cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceList = value;
}
inline ::StringW System::Xml::Schema::XmlSchemaAny::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAny::set_Namespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaAny::set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(),
                                                                                         { "set_ProcessContents", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentProcessing>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::XmlSchemaAny::get_NamespaceList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_NamespaceList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchemaAny::get_ResolvedNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_ResolvedNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaContentProcessing System::Xml::Schema::XmlSchemaAny::get_ProcessContentsCorrect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "get_ProcessContentsCorrect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentProcessing>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchemaAny::get_NameString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAny::BuildNamespaceList(::StringW targetNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "BuildNamespaceList", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetNamespace);
}
inline void System::Xml::Schema::XmlSchemaAny::BuildNamespaceListV1Compat(::StringW targetNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "BuildNamespaceListV1Compat", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetNamespace);
}
inline bool System::Xml::Schema::XmlSchemaAny::Allows(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { "Allows", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline void System::Xml::Schema::XmlSchemaAny::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAny*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAny* System::Xml::Schema::XmlSchemaAny::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaAny*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaAny::XmlSchemaAny() {}
