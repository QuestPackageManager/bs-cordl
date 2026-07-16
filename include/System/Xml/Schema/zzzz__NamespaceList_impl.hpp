#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::NamespaceList_ListType::NamespaceList_ListType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceList_ListType::NamespaceList_ListType() {}
constexpr ::System::Xml::Schema::NamespaceList_ListType System::Xml::Schema::NamespaceList_ListType::Any{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::NamespaceList_ListType System::Xml::Schema::NamespaceList_ListType::Other{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::NamespaceList_ListType System::Xml::Schema::NamespaceList_ListType::Set{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61d85bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::NamespaceList::*)(::StringW, ::StringW)>(&::System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x61d85c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::Clone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x61d884c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::NamespaceList_ListType (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61d897c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Excluded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Excluded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61d8984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "get_Excluded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Enumerate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Enumerate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61d898c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "get_Enumerate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Allows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::NamespaceList::*)(::StringW)>(&::System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61d89f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { ::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Allows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::NamespaceList::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61d8a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "Allows", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::ToString)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x61d8a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { ::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.IsSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*)>(&::System::Xml::Schema::NamespaceList::IsSubset)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x61d8f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(),
                                                { "IsSubset", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Xml::Schema::NamespaceList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Union
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::NamespaceList* (*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, bool)>(
    &::System::Xml::Schema::NamespaceList::Union)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x61d92f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(),
                            { "Union", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.CompareSetToOther
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::NamespaceList::*)(::System::Xml::Schema::NamespaceList*)>(
    &::System::Xml::Schema::NamespaceList::CompareSetToOther)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x61d982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "CompareSetToOther", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Intersection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::NamespaceList* (*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, bool)>(
    &::System::Xml::Schema::NamespaceList::Intersection)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x61d9970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(),
                            { "Intersection", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.RemoveNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::NamespaceList::*)(::StringW)>(&::System::Xml::Schema::NamespaceList::RemoveNamespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61d9e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "RemoveNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::NamespaceList_ListType& System::Xml::Schema::NamespaceList::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::Schema::NamespaceList_ListType const& System::Xml::Schema::NamespaceList::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::Schema::NamespaceList::__cordl_internal_set_type(::System::Xml::Schema::NamespaceList_ListType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::NamespaceList::__cordl_internal_get_set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___set;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::NamespaceList::__cordl_internal_get_set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___set;
}
constexpr void System::Xml::Schema::NamespaceList::__cordl_internal_set_set(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___set = value;
}
constexpr ::StringW& System::Xml::Schema::NamespaceList::__cordl_internal_get_targetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::NamespaceList::__cordl_internal_get_targetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespace;
}
constexpr void System::Xml::Schema::NamespaceList::__cordl_internal_set_targetNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetNamespace = value;
}
inline void System::Xml::Schema::NamespaceList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::NamespaceList::_ctor(::StringW namespaces, ::StringW targetNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namespaces, targetNamespace);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*>(this, ___internal_method);
}
inline ::System::Xml::Schema::NamespaceList_ListType System::Xml::Schema::NamespaceList::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList_ListType>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::NamespaceList::get_Excluded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "get_Excluded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Xml::Schema::NamespaceList::get_Enumerate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "get_Enumerate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline bool System::Xml::Schema::NamespaceList::Allows(::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Xml::Schema::NamespaceList::Allows(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "Allows", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline ::StringW System::Xml::Schema::NamespaceList::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::Schema::NamespaceList::IsSubset(::System::Xml::Schema::NamespaceList* sub, ::System::Xml::Schema::NamespaceList* super) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(),
                                                           { "IsSubset", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Xml::Schema::NamespaceList*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sub, super);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::Union(::System::Xml::Schema::NamespaceList* o1, ::System::Xml::Schema::NamespaceList* o2, bool v1Compat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(),
                                       { "Union", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*>(nullptr, ___internal_method, o1, o2, v1Compat);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::CompareSetToOther(::System::Xml::Schema::NamespaceList* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "CompareSetToOther", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*>(this, ___internal_method, other);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::Intersection(::System::Xml::Schema::NamespaceList* o1, ::System::Xml::Schema::NamespaceList* o2, bool v1Compat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(),
                          { "Intersection", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*>(nullptr, ___internal_method, o1, o2, v1Compat);
}
inline void System::Xml::Schema::NamespaceList::RemoveNamespace(::StringW tns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceList*>(), { "RemoveNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tns);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::NamespaceList*>());
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::New_ctor(::StringW namespaces, ::StringW targetNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::NamespaceList*>(namespaces, targetNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceList::NamespaceList() {}
