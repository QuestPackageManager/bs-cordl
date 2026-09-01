#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_union.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_union_def.hpp"
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.CreateValueConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (::System::Xml::Schema::Datatype_union::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::Datatype_union::CreateValueConverter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61c3b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_union::*)(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>)>(
    &::System::Xml::Schema::Datatype_union::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61c1e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::Datatype_union::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Schema::Datatype_union::Compare)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x61c3ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_union::*)()>(&::System::Xml::Schema::Datatype_union::get_ValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c3ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_union::*)()>(&::System::Xml::Schema::Datatype_union::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c3d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::Datatype_union::*)()>(&::System::Xml::Schema::Datatype_union::get_FacetsChecker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c3d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.get_ListValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_union::*)()>(&::System::Xml::Schema::Datatype_union::get_ListValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c3d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.get_ValidRestrictionFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::RestrictionFlags (::System::Xml::Schema::Datatype_union::*)()>(
    &::System::Xml::Schema::Datatype_union::get_ValidRestrictionFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c3dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.get_BaseMemberTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> (::System::Xml::Schema::Datatype_union::*)()>(
    &::System::Xml::Schema::Datatype_union::get_BaseMemberTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c3dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { "get_BaseMemberTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.HasAtomicMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Datatype_union::*)()>(&::System::Xml::Schema::Datatype_union::HasAtomicMembers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61c1c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { "HasAtomicMembers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.IsUnionBaseOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Datatype_union::*)(::System::Xml::Schema::DatatypeImplementation*)>(
    &::System::Xml::Schema::Datatype_union::IsUnionBaseOf)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x61c208c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { "IsUnionBaseOf", {}, { ::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_union::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_union::TryParseValue)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x61c3dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_union::*)(::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_union::TryParseValue)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x61c3fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 17 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>& System::Xml::Schema::Datatype_union::__cordl_internal_get_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> const& System::Xml::Schema::Datatype_union::__cordl_internal_get_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr void System::Xml::Schema::Datatype_union::__cordl_internal_set_types(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___types = value;
}
inline void System::Xml::Schema::Datatype_union::setStaticF_atomicValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "atomicValueType", ::System::Xml::Schema::Datatype_union*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_union::getStaticF_atomicValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "atomicValueType", ::System::Xml::Schema::Datatype_union*>();
}
inline void System::Xml::Schema::Datatype_union::setStaticF_listValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "listValueType", ::System::Xml::Schema::Datatype_union*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_union::getStaticF_listValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "listValueType", ::System::Xml::Schema::Datatype_union*>();
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::Datatype_union::CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(this, ___internal_method, schemaType);
}
inline void System::Xml::Schema::Datatype_union::_ctor(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline int32_t System::Xml::Schema::Datatype_union::Compare(::System::Object* value1, ::System::Object* value2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value1, value2);
}
inline ::System::Type* System::Xml::Schema::Datatype_union::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_union::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_union::get_FacetsChecker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::Datatype_union::get_ListValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Xml::Schema::RestrictionFlags System::Xml::Schema::Datatype_union::get_ValidRestrictionFlags() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::RestrictionFlags>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> System::Xml::Schema::Datatype_union::get_BaseMemberTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { "get_BaseMemberTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>(this, ___internal_method);
}
inline bool System::Xml::Schema::Datatype_union::HasAtomicMembers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { "HasAtomicMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::Datatype_union::IsUnionBaseOf(::System::Xml::Schema::DatatypeImplementation* derivedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), { "IsUnionBaseOf", {}, { ::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedType);
}
inline ::System::Exception* System::Xml::Schema::Datatype_union::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                               ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Exception* System::Xml::Schema::Datatype_union::TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                               ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_union*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, nameTable, nsmgr, typedValue);
}
inline ::System::Xml::Schema::Datatype_union* System::Xml::Schema::Datatype_union::New_ctor(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_union*>(types));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_union::Datatype_union() {}
