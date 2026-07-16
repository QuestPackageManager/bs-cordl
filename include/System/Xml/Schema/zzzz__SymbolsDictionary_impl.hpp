#pragma once
// IWYU pragma private; include "System/Xml/Schema/SymbolsDictionary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SymbolsDictionary::*)()>(&::System::Xml::Schema::SymbolsDictionary::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6317af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SymbolsDictionary::*)()>(&::System::Xml::Schema::SymbolsDictionary::get_Count)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6317b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.get_IsUpaEnforced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SymbolsDictionary::*)()>(&::System::Xml::Schema::SymbolsDictionary::get_IsUpaEnforced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "get_IsUpaEnforced", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.set_IsUpaEnforced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SymbolsDictionary::*)(bool)>(&::System::Xml::Schema::SymbolsDictionary::set_IsUpaEnforced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "set_IsUpaEnforced", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.AddName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::XmlQualifiedName*, ::System::Object*)>(
    &::System::Xml::Schema::SymbolsDictionary::AddName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6317ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                             { "AddName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.AddNamespaceList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::Schema::NamespaceList*, ::System::Object*, bool)>(
    &::System::Xml::Schema::SymbolsDictionary::AddNamespaceList)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6317ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                { "AddNamespaceList", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.AddWildcard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SymbolsDictionary::*)(::StringW, ::System::Object*)>(&::System::Xml::Schema::SymbolsDictionary::AddWildcard)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6318018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "AddWildcard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.GetNamespaceListSymbols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::Schema::NamespaceList*)>(
    &::System::Xml::Schema::SymbolsDictionary::GetNamespaceListSymbols)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x6318178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                                                           { "GetNamespaceListSymbols", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SymbolsDictionary::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63188a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SymbolsDictionary::Exists)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6318938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "Exists", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.GetParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::SymbolsDictionary::*)(int32_t)>(&::System::Xml::Schema::SymbolsDictionary::GetParticle)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6318968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "GetParticle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SymbolsDictionary.NameOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SymbolsDictionary::*)(int32_t)>(&::System::Xml::Schema::SymbolsDictionary::NameOf)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x631899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "NameOf", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_last() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last;
}
constexpr int32_t const& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_last() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last;
}
constexpr void System::Xml::Schema::SymbolsDictionary::__cordl_internal_set_last(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___last = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___names;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___names;
}
constexpr void System::Xml::Schema::SymbolsDictionary::__cordl_internal_set_names(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___names = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_wildcards() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wildcards;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_wildcards() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wildcards;
}
constexpr void System::Xml::Schema::SymbolsDictionary::__cordl_internal_set_wildcards(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wildcards = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_particles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particles;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_particles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particles;
}
constexpr void System::Xml::Schema::SymbolsDictionary::__cordl_internal_set_particles(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particles = value;
}
constexpr ::System::Object*& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_particleLast() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particleLast;
}
constexpr ::System::Object* const& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_particleLast() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particleLast;
}
constexpr void System::Xml::Schema::SymbolsDictionary::__cordl_internal_set_particleLast(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particleLast = value;
}
constexpr bool& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_isUpaEnforced() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUpaEnforced;
}
constexpr bool const& System::Xml::Schema::SymbolsDictionary::__cordl_internal_get_isUpaEnforced() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUpaEnforced;
}
constexpr void System::Xml::Schema::SymbolsDictionary::__cordl_internal_set_isUpaEnforced(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isUpaEnforced = value;
}
inline void System::Xml::Schema::SymbolsDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SymbolsDictionary::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Schema::SymbolsDictionary::get_IsUpaEnforced() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "get_IsUpaEnforced", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SymbolsDictionary::set_IsUpaEnforced(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "set_IsUpaEnforced", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::SymbolsDictionary::AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                           { "AddName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, particle);
}
inline void System::Xml::Schema::SymbolsDictionary::AddNamespaceList(::System::Xml::Schema::NamespaceList* list, ::System::Object* particle, bool allowLocal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                              { "AddNamespaceList", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, particle, allowLocal);
}
inline void System::Xml::Schema::SymbolsDictionary::AddWildcard(::StringW wildcard, ::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "AddWildcard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wildcard, particle);
}
inline ::System::Collections::ICollection* System::Xml::Schema::SymbolsDictionary::GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "GetNamespaceListSymbols", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, list);
}
inline int32_t System::Xml::Schema::SymbolsDictionary::get_Item(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline bool System::Xml::Schema::SymbolsDictionary::Exists(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "Exists", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::System::Object* System::Xml::Schema::SymbolsDictionary::GetParticle(int32_t symbol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "GetParticle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, symbol);
}
inline ::StringW System::Xml::Schema::SymbolsDictionary::NameOf(int32_t symbol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SymbolsDictionary*>(), { "NameOf", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, symbol);
}
inline ::System::Xml::Schema::SymbolsDictionary* System::Xml::Schema::SymbolsDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SymbolsDictionary*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SymbolsDictionary::SymbolsDictionary() {}
