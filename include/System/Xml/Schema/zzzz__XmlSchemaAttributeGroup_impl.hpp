#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaAttributeGroup.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(&::System::Xml::Schema::XmlSchemaAttributeGroup::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAttributeGroup::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_Attributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_AnyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_AnyAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_AnyAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.set_AnyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::set_AnyAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(),
                                                                                           { "set_AnyAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_QualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_QualifiedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_QualifiedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_AttributeUses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_AttributeUses)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x622cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_AttributeUses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_AttributeWildcard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_AttributeWildcard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_AttributeWildcard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.set_AttributeWildcard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::set_AttributeWildcard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(),
                                                                                           { "set_AttributeWildcard", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_RedefinedAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttributeGroup* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_RedefinedAttributeGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ccd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_RedefinedAttributeGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_Redefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttributeGroup* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::get_Redefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ccdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_Redefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.set_Redefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::set_Redefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(),
                                                                                           { "set_Redefined", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_SelfReferenceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(&::System::Xml::Schema::XmlSchemaAttributeGroup::get_SelfReferenceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ccec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_SelfReferenceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.set_SelfReferenceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(int32_t)>(&::System::Xml::Schema::XmlSchemaAttributeGroup::set_SelfReferenceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ccf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "set_SelfReferenceCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.get_NameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(&::System::Xml::Schema::XmlSchemaAttributeGroup::get_NameAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ccfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.set_NameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAttributeGroup::set_NameAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.SetQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::SetQualifiedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622cd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "SetQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaAttributeGroup::Clone)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x622cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAttributeGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAttributeGroup::*)()>(&::System::Xml::Schema::XmlSchemaAttributeGroup::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x622d1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_anyAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_anyAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyAttribute = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_qname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qname;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_qname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qname;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qname = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup*& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_redefined() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefined;
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup* const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_redefined() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefined;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_redefined(::System::Xml::Schema::XmlSchemaAttributeGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redefined = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_attributeUses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeUses;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_attributeUses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeUses;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_attributeUses(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeUses = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_attributeWildcard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeWildcard;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_attributeWildcard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeWildcard;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_attributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeWildcard = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_selfReferenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfReferenceCount;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_get_selfReferenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfReferenceCount;
}
constexpr void System::Xml::Schema::XmlSchemaAttributeGroup::__cordl_internal_set_selfReferenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selfReferenceCount = value;
}
inline ::StringW System::Xml::Schema::XmlSchemaAttributeGroup::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaAttributeGroup::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_Attributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::XmlSchemaAttributeGroup::get_AnyAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_AnyAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(),
                                                                                         { "set_AnyAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaAttributeGroup::get_QualifiedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_QualifiedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaAttributeGroup::get_AttributeUses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_AttributeUses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::XmlSchemaAttributeGroup::get_AttributeWildcard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_AttributeWildcard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::set_AttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(),
                                                                                         { "set_AttributeWildcard", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaAttributeGroup* System::Xml::Schema::XmlSchemaAttributeGroup::get_RedefinedAttributeGroup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_RedefinedAttributeGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttributeGroup*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttributeGroup* System::Xml::Schema::XmlSchemaAttributeGroup::get_Redefined() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_Redefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttributeGroup*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::set_Redefined(::System::Xml::Schema::XmlSchemaAttributeGroup* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(),
                                                                                         { "set_Redefined", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlSchemaAttributeGroup::get_SelfReferenceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "get_SelfReferenceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::set_SelfReferenceCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "set_SelfReferenceCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlSchemaAttributeGroup::get_NameAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::set_NameAttribute(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::SetQualifiedName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { "SetQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaAttributeGroup::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAttributeGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttributeGroup* System::Xml::Schema::XmlSchemaAttributeGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaAttributeGroup*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup::XmlSchemaAttributeGroup() {}
