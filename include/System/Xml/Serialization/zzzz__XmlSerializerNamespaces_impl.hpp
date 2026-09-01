#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializerNamespaces.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerNamespaces_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializerNamespaces::*)()>(&::System::Xml::Serialization::XmlSerializerNamespaces::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62eacb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializerNamespaces::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializerNamespaces::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62eacbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.AddInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializerNamespaces::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializerNamespaces::AddInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62ead70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(),
                                                                                           { "AddInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlQualifiedName*> (::System::Xml::Serialization::XmlSerializerNamespaces::*)()>(
    &::System::Xml::Serialization::XmlSerializerNamespaces::ToArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62eae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "ToArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlSerializerNamespaces::*)()>(&::System::Xml::Serialization::XmlSerializerNamespaces::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62eb314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.get_NamespaceList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::XmlSerializerNamespaces::*)()>(
    &::System::Xml::Serialization::XmlSerializerNamespaces::get_NamespaceList)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x62eaf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "get_NamespaceList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.get_Namespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Xml::Serialization::XmlSerializerNamespaces::*)()>(
    &::System::Xml::Serialization::XmlSerializerNamespaces::get_Namespaces)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62eadac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "get_Namespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerNamespaces.set_Namespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializerNamespaces::*)(::System::Collections::Hashtable*)>(
    &::System::Xml::Serialization::XmlSerializerNamespaces::set_Namespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62eb338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(),
                                                                                           { "set_Namespaces", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializerNamespaces::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializerNamespaces::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::Serialization::XmlSerializerNamespaces::__cordl_internal_set_namespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
inline void System::Xml::Serialization::XmlSerializerNamespaces::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializerNamespaces::Add(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::Serialization::XmlSerializerNamespaces::AddInternal(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(),
                                                                                         { "AddInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline ::ArrayW<::System::Xml::XmlQualifiedName*> System::Xml::Serialization::XmlSerializerNamespaces::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlQualifiedName*>>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::XmlSerializerNamespaces::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::XmlSerializerNamespaces::get_NamespaceList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "get_NamespaceList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::XmlSerializerNamespaces::get_Namespaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "get_Namespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializerNamespaces::set_Namespaces(::System::Collections::Hashtable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerNamespaces*>(), { "set_Namespaces", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlSerializerNamespaces* System::Xml::Serialization::XmlSerializerNamespaces::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializerNamespaces*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializerNamespaces::XmlSerializerNamespaces() {}
