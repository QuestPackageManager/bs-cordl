#pragma once
// IWYU pragma private; include "System\Data\XSDSchema.hpp"
#include "System/Data/zzzz__XMLSchema_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XSDSchema_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
#include "System/Data/zzzz__XSDSchema_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaKeyref_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlAttributeCollection_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::XSDSchema_NameType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema_NameType::*)(::StringW, ::System::Type*)>(&::System::Data::XSDSchema_NameType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6068320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema_NameType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema_NameType.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::XSDSchema_NameType::*)(::System::Object*)>(&::System::Data::XSDSchema_NameType::CompareTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6068328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema_NameType*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::XSDSchema_NameType::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Data::XSDSchema_NameType::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Data::XSDSchema_NameType::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Type*& System::Data::XSDSchema_NameType::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Data::XSDSchema_NameType::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Data::XSDSchema_NameType::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void System::Data::XSDSchema_NameType::_ctor(::StringW n, ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema_NameType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, t);
}
inline int32_t System::Data::XSDSchema_NameType::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema_NameType*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::System::Data::XSDSchema_NameType* System::Data::XSDSchema_NameType::New_ctor(::StringW n, ::System::Type* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XSDSchema_NameType*>(n, t));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::XSDSchema_NameType::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::XSDSchema_NameType::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::XSDSchema_NameType::XSDSchema_NameType() {}
//  Writing Method size for method: ::System::Data::XSDSchema.get_FromInference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XSDSchema::*)()>(&::System::Data::XSDSchema::get_FromInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6058be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "get_FromInference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.set_FromInference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(bool)>(&::System::Data::XSDSchema::set_FromInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6058bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "set_FromInference", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.CollectElementsAnnotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Data::XSDSchema::CollectElementsAnnotations)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6058bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "CollectElementsAnnotations", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.CollectElementsAnnotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*)>(
    &::System::Data::XSDSchema::CollectElementsAnnotations)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x6058c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                { "CollectElementsAnnotations", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.QualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Data::XSDSchema::QualifiedName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60596c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "QualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.SetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Xml::XmlAttribute*>)>(&::System::Data::XSDSchema::SetProperties)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x6059748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "SetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.SetExtProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Xml::XmlAttribute*>)>(&::System::Data::XSDSchema::SetExtProperties)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x6059c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "SetExtProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleColumnExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Object*, ::ArrayW<::System::Xml::XmlAttribute*>)>(
    &::System::Data::XSDSchema::HandleColumnExpression)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x605a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "HandleColumnExpression", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetMsdataAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::StringW)>(&::System::Data::XSDSchema::GetMsdataAttribute)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60595a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "GetMsdataAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.SetExtProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Xml::XmlAttributeCollection*)>(&::System::Data::XSDSchema::SetExtProperties)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x605a230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "SetExtProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlAttributeCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleRefTableProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Data::XSDSchema::HandleRefTableProperties)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x605a484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                         { "HandleRefTableProperties", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::XmlElement*, bool)>(&::System::Data::XSDSchema::HandleRelation)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x605a658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleRelation", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HasAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Data::XSDSchema::HasAttributes)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x605aed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HasAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.IsDatasetParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Data::XSDSchema::IsDatasetParticle)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x605b128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "IsDatasetParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.DatasetElementCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Data::XSDSchema::DatasetElementCount)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x605bb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "DatasetElementCount", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindDatasetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(
    &::System::Data::XSDSchema::FindDatasetElement)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x605be8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindDatasetElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaSet*, ::System::Data::DataTable*)>(&::System::Data::XSDSchema::LoadSchema)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x605c47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "LoadSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaSet*, ::System::Data::DataSet*)>(&::System::Data::XSDSchema::LoadSchema)> {
  constexpr static std::size_t size = 0x1d4c;
  constexpr static std::size_t addrs = 0x605c498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                             { "LoadSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotation*, bool)>(&::System::Data::XSDSchema::HandleRelations)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x605f878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleRelations", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotation*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetParticleItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Data::XSDSchema::GetParticleItems)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x605b664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetParticleItems", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Data::DataTable*, ::System::Collections::ArrayList*,
                                                                                           bool)>(&::System::Data::XSDSchema::HandleParticle)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x605fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleParticle",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Data::DataTable*>(),
                                                                                            ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Data::DataTable*, bool)>(
    &::System::Data::XSDSchema::HandleAttributes)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6061044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::XSDSchema*>(),
                         { "HandleAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Data::DataTable*, bool)>(
    &::System::Data::XSDSchema::HandleAttributeGroup)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6061c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::XSDSchema*>(),
                         { "HandleAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Data::DataTable*, ::System::Collections::ArrayList*,
                                                                                           bool)>(&::System::Data::XSDSchema::HandleComplexType)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x6062008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleComplexType",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Data::DataTable*>(),
                                                                               ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Data::XSDSchema::GetParticle)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x605c350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::XSDSchema::*)(::System::Data::DataTable*, ::StringW)>(&::System::Data::XSDSchema::FindField)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60636cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindField", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.BuildKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*,
                                                                                                                            ::System::Data::DataTable*)>(&::System::Data::XSDSchema::BuildKey)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6063854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                { "BuildKey", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetBooleanAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::StringW, bool)>(
    &::System::Data::XSDSchema::GetBooleanAttribute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x605bd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                { "GetBooleanAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetStringAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::StringW, ::StringW)>(
    &::System::Data::XSDSchema::GetStringAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x605e1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                         { "GetStringAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.TranslateAcceptRejectRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::AcceptRejectRule (*)(::StringW)>(&::System::Data::XSDSchema::TranslateAcceptRejectRule)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6063b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "TranslateAcceptRejectRule", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.TranslateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Rule (*)(::StringW)>(&::System::Data::XSDSchema::TranslateRule)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6063b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "TranslateRule", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleKeyref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaKeyref*)>(&::System::Data::XSDSchema::HandleKeyref)> {
  constexpr static std::size_t size = 0x810;
  constexpr static std::size_t addrs = 0x6063c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleKeyref", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaKeyref*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::XSDSchema::HandleConstraint)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x60645a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.InstantiateSimpleTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Data::XSDSchema::InstantiateSimpleTable)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x60649e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "InstantiateSimpleTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetInstanceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*)>(&::System::Data::XSDSchema::GetInstanceName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x605a578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetInstanceName", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.InstantiateTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaComplexType*,
                                                                                                                 bool)>(&::System::Data::XSDSchema::InstantiateTable)> {
  constexpr static std::size_t size = 0x1404;
  constexpr static std::size_t addrs = 0x6065500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::XSDSchema*>(),
            { "InstantiateTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.XsdtoClr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::System::Data::XSDSchema::XsdtoClr)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6066a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "XsdtoClr", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XSDSchema_NameType* (*)(::StringW)>(&::System::Data::XSDSchema::FindNameType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6066b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindNameType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.ParseDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::XSDSchema::*)(::StringW)>(&::System::Data::XSDSchema::ParseDataType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6066c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "ParseDataType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.IsXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Data::XSDSchema::IsXsdType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6066de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "IsXsdType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindTypeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnnotated* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*)>(
    &::System::Data::XSDSchema::FindTypeNode)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x605e268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindTypeNode", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleSimpleTypeSimpleContentColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::StringW, ::System::Data::DataTable*, bool, ::ArrayW<::System::Xml::XmlAttribute*>, bool)>(
        &::System::Data::XSDSchema::HandleSimpleTypeSimpleContentColumn)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x6062d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                { "HandleSimpleTypeSimpleContentColumn",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleSimpleContentColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::StringW, ::System::Data::DataTable*, bool, ::ArrayW<::System::Xml::XmlAttribute*>, bool)>(
    &::System::Data::XSDSchema::HandleSimpleContentColumn)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x6062614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleSimpleContentColumn",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>(),
                                                                                                   ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleAttributeColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAttribute*, ::System::Data::DataTable*, bool)>(
    &::System::Data::XSDSchema::HandleAttributeColumn)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x606130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                            { "HandleAttributeColumn", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleElementColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Data::DataTable*, bool)>(
    &::System::Data::XSDSchema::HandleElementColumn)> {
  constexpr static std::size_t size = 0xbd4;
  constexpr static std::size_t addrs = 0x6060470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                            { "HandleElementColumn", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(&::System::Data::XSDSchema::HandleDataSet)> {
  constexpr static std::size_t size = 0x1188;
  constexpr static std::size_t addrs = 0x605e6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleDataSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.AddTablesToList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*, ::System::Data::DataTable*)>(
    &::System::Data::XSDSchema::AddTablesToList)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6066e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                            { "AddTablesToList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XSDSchema::*)(::StringW)>(&::System::Data::XSDSchema::GetPrefix)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x6065110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetNamespaceFromPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XSDSchema::*)(::StringW)>(&::System::Data::XSDSchema::GetNamespaceFromPrefix)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x606702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetNamespaceFromPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetTableNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::XSDSchema::GetTableNamespace)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6066904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetTableNamespace", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetTableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::XSDSchema::GetTableName)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6064480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetTableName", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.IsTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Data::XSDSchema::IsTable)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x605b8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "IsTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Data::XSDSchema::HandleTable)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x605e56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XSDSchema::*)()>(&::System::Data::XSDSchema::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6067424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Data::XSDSchema::__cordl_internal_get__schemaSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaSet;
}
constexpr ::System::Xml::Schema::XmlSchemaSet* const& System::Data::XSDSchema::__cordl_internal_get__schemaSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaSet;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__schemaSet(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaSet = value;
}
constexpr ::System::Xml::Schema::XmlSchemaElement*& System::Data::XSDSchema::__cordl_internal_get__dsElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsElement;
}
constexpr ::System::Xml::Schema::XmlSchemaElement* const& System::Data::XSDSchema::__cordl_internal_get__dsElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsElement;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__dsElement(::System::Xml::Schema::XmlSchemaElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dsElement = value;
}
constexpr ::System::Data::DataSet*& System::Data::XSDSchema::__cordl_internal_get__ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr ::System::Data::DataSet* const& System::Data::XSDSchema::__cordl_internal_get__ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__ds(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ds = value;
}
constexpr ::StringW& System::Data::XSDSchema::__cordl_internal_get__schemaName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr ::StringW const& System::Data::XSDSchema::__cordl_internal_get__schemaName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__schemaName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaName = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::XSDSchema::__cordl_internal_get__columnExpressions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnExpressions;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XSDSchema::__cordl_internal_get__columnExpressions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnExpressions;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__columnExpressions(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnExpressions = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__constraintNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintNodes;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__constraintNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintNodes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__constraintNodes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintNodes = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::XSDSchema::__cordl_internal_get__refTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refTables;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XSDSchema::__cordl_internal_get__refTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refTables;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__refTables(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refTables = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::XSDSchema::__cordl_internal_get__complexTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____complexTypes;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XSDSchema::__cordl_internal_get__complexTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____complexTypes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__complexTypes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____complexTypes = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Data::XSDSchema::__cordl_internal_get__annotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& System::Data::XSDSchema::__cordl_internal_get__annotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotations;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__annotations(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____annotations = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Data::XSDSchema::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& System::Data::XSDSchema::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__elements(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elements = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributes;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__attributes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributes = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__elementsTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementsTable;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__elementsTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementsTable;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__elementsTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementsTable = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__attributeGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeGroups;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__attributeGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeGroups;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__attributeGroups(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeGroups = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__schemaTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypes;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__schemaTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__schemaTypes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaTypes = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__expressions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressions;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__expressions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressions;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__expressions(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expressions = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>*&
System::Data::XSDSchema::__cordl_internal_get__tableDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* const&
System::Data::XSDSchema::__cordl_internal_get__tableDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableDictionary;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__tableDictionary(
    ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableDictionary = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__udSimpleTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udSimpleTypes;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__udSimpleTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udSimpleTypes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__udSimpleTypes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____udSimpleTypes = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__existingSimpleTypeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____existingSimpleTypeMap;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XSDSchema::__cordl_internal_get__existingSimpleTypeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____existingSimpleTypeMap;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__existingSimpleTypeMap(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____existingSimpleTypeMap = value;
}
constexpr bool& System::Data::XSDSchema::__cordl_internal_get__fromInference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromInference;
}
constexpr bool const& System::Data::XSDSchema::__cordl_internal_get__fromInference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromInference;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__fromInference(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromInference = value;
}
inline void System::Data::XSDSchema::setStaticF_s_mapNameTypeXsd(::ArrayW<::System::Data::XSDSchema_NameType*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::XSDSchema_NameType*>, "s_mapNameTypeXsd", ::System::Data::XSDSchema*>(std::forward<::ArrayW<::System::Data::XSDSchema_NameType*>>(value));
}
inline ::ArrayW<::System::Data::XSDSchema_NameType*> System::Data::XSDSchema::getStaticF_s_mapNameTypeXsd() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::XSDSchema_NameType*>, "s_mapNameTypeXsd", ::System::Data::XSDSchema*>();
}
inline bool System::Data::XSDSchema::get_FromInference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "get_FromInference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::XSDSchema::set_FromInference(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "set_FromInference", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::XSDSchema::CollectElementsAnnotations(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "CollectElementsAnnotations", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Data::XSDSchema::CollectElementsAnnotations(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* schemaList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                              { "CollectElementsAnnotations", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema, schemaList);
}
inline ::StringW System::Data::XSDSchema::QualifiedName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "QualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline void System::Data::XSDSchema::SetProperties(::System::Object* instance, ::ArrayW<::System::Xml::XmlAttribute*> attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "SetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, attrs);
}
inline void System::Data::XSDSchema::SetExtProperties(::System::Object* instance, ::ArrayW<::System::Xml::XmlAttribute*> attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                           { "SetExtProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, attrs);
}
inline void System::Data::XSDSchema::HandleColumnExpression(::System::Object* instance, ::ArrayW<::System::Xml::XmlAttribute*> attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                           { "HandleColumnExpression", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, attrs);
}
inline ::StringW System::Data::XSDSchema::GetMsdataAttribute(::System::Xml::Schema::XmlSchemaAnnotated* node, ::StringW ln) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetMsdataAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node, ln);
}
inline void System::Data::XSDSchema::SetExtProperties(::System::Object* instance, ::System::Xml::XmlAttributeCollection* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                           { "SetExtProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlAttributeCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, attrs);
}
inline void System::Data::XSDSchema::HandleRefTableProperties(::System::Collections::ArrayList* RefTables, ::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                       { "HandleRefTableProperties", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, RefTables, element);
}
inline void System::Data::XSDSchema::HandleRelation(::System::Xml::XmlElement* node, bool fNested) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleRelation", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, fNested);
}
inline bool System::Data::XSDSchema::HasAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HasAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributes);
}
inline bool System::Data::XSDSchema::IsDatasetParticle(::System::Xml::Schema::XmlSchemaParticle* pt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "IsDatasetParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pt);
}
inline int32_t System::Data::XSDSchema::DatasetElementCount(::System::Xml::Schema::XmlSchemaObjectCollection* elements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "DatasetElementCount", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elements);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Data::XSDSchema::FindDatasetElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindDatasetElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, elements);
}
inline void System::Data::XSDSchema::LoadSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                           { "LoadSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaSet, dt);
}
inline void System::Data::XSDSchema::LoadSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                           { "LoadSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaSet, ds);
}
inline void System::Data::XSDSchema::HandleRelations(::System::Xml::Schema::XmlSchemaAnnotation* ann, bool fNested) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleRelations", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotation*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ann, fNested);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Data::XSDSchema::GetParticleItems(::System::Xml::Schema::XmlSchemaParticle* pt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetParticleItems", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*>(this, ___internal_method, pt);
}
inline void System::Data::XSDSchema::HandleParticle(::System::Xml::Schema::XmlSchemaParticle* pt, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren, bool isBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleParticle",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Data::DataTable*>(),
                                                                                          ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pt, table, tableChildren, isBase);
}
inline void System::Data::XSDSchema::HandleAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Data::DataTable* table, bool isBase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                          { "HandleAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes, table, isBase);
}
inline void System::Data::XSDSchema::HandleAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup, ::System::Data::DataTable* table, bool isBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::XSDSchema*>(),
                       { "HandleAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup, table, isBase);
}
inline void System::Data::XSDSchema::HandleComplexType(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren,
                                                       bool isNillable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleComplexType",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Data::DataTable*>(),
                                                                                          ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ct, table, tableChildren, isNillable);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Data::XSDSchema::GetParticle(::System::Xml::Schema::XmlSchemaComplexType* ct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, ct);
}
inline ::System::Data::DataColumn* System::Data::XSDSchema::FindField(::System::Data::DataTable* table, ::StringW field) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindField", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, table, field);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::XSDSchema::BuildKey(::System::Xml::Schema::XmlSchemaIdentityConstraint* keyNode, ::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                              { "BuildKey", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method, keyNode, table);
}
inline bool System::Data::XSDSchema::GetBooleanAttribute(::System::Xml::Schema::XmlSchemaAnnotated* element, ::StringW attrName, bool defVal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                              { "GetBooleanAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element, attrName, defVal);
}
inline ::StringW System::Data::XSDSchema::GetStringAttribute(::System::Xml::Schema::XmlSchemaAnnotated* element, ::StringW attrName, ::StringW defVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                       { "GetStringAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, element, attrName, defVal);
}
inline ::System::Data::AcceptRejectRule System::Data::XSDSchema::TranslateAcceptRejectRule(::StringW strRule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "TranslateAcceptRejectRule", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::AcceptRejectRule>(nullptr, ___internal_method, strRule);
}
inline ::System::Data::Rule System::Data::XSDSchema::TranslateRule(::StringW strRule) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "TranslateRule", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Rule>(nullptr, ___internal_method, strRule);
}
inline void System::Data::XSDSchema::HandleKeyref(::System::Xml::Schema::XmlSchemaKeyref* keyref) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleKeyref", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaKeyref*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyref);
}
inline void System::Data::XSDSchema::HandleConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* keyNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyNode);
}
inline ::System::Data::DataTable* System::Data::XSDSchema::InstantiateSimpleTable(::System::Xml::Schema::XmlSchemaElement* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "InstantiateSimpleTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, node);
}
inline ::StringW System::Data::XSDSchema::GetInstanceName(::System::Xml::Schema::XmlSchemaAnnotated* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetInstanceName", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node);
}
inline ::System::Data::DataTable* System::Data::XSDSchema::InstantiateTable(::System::Xml::Schema::XmlSchemaElement* node, ::System::Xml::Schema::XmlSchemaComplexType* typeNode, bool isRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::XSDSchema*>(),
          { "InstantiateTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, node, typeNode, isRef);
}
inline ::System::Type* System::Data::XSDSchema::XsdtoClr(::StringW xsdTypeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "XsdtoClr", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, xsdTypeName);
}
inline ::System::Data::XSDSchema_NameType* System::Data::XSDSchema::FindNameType(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindNameType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XSDSchema_NameType*>(nullptr, ___internal_method, name);
}
inline ::System::Type* System::Data::XSDSchema::ParseDataType(::StringW dt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "ParseDataType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, dt);
}
inline bool System::Data::XSDSchema::IsXsdType(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "IsXsdType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaAnnotated* System::Data::XSDSchema::FindTypeNode(::System::Xml::Schema::XmlSchemaAnnotated* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "FindTypeNode", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnnotated*>(this, ___internal_method, node);
}
inline void System::Data::XSDSchema::HandleSimpleTypeSimpleContentColumn(::System::Xml::Schema::XmlSchemaSimpleType* typeNode, ::StringW strType, ::System::Data::DataTable* table, bool isBase,
                                                                         ::ArrayW<::System::Xml::XmlAttribute*> attrs, bool isNillable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                                                           { "HandleSimpleTypeSimpleContentColumn",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeNode, strType, table, isBase, attrs, isNillable);
}
inline void System::Data::XSDSchema::HandleSimpleContentColumn(::StringW strType, ::System::Data::DataTable* table, bool isBase, ::ArrayW<::System::Xml::XmlAttribute*> attrs, bool isNillable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleSimpleContentColumn",
                                                                                               {},
                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>(),
                                                                                                 ::i2c::type_of<::ArrayW<::System::Xml::XmlAttribute*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strType, table, isBase, attrs, isNillable);
}
inline void System::Data::XSDSchema::HandleAttributeColumn(::System::Xml::Schema::XmlSchemaAttribute* attrib, ::System::Data::DataTable* table, bool isBase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                          { "HandleAttributeColumn", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrib, table, isBase);
}
inline void System::Data::XSDSchema::HandleElementColumn(::System::Xml::Schema::XmlSchemaElement* elem, ::System::Data::DataTable* table, bool isBase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                          { "HandleElementColumn", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elem, table, isBase);
}
inline void System::Data::XSDSchema::HandleDataSet(::System::Xml::Schema::XmlSchemaElement* node, bool isNewDataSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleDataSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, isNewDataSet);
}
inline void System::Data::XSDSchema::AddTablesToList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList, ::System::Data::DataTable* dt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(),
                          { "AddTablesToList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableList, dt);
}
inline ::StringW System::Data::XSDSchema::GetPrefix(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::StringW System::Data::XSDSchema::GetNamespaceFromPrefix(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetNamespaceFromPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::StringW System::Data::XSDSchema::GetTableNamespace(::System::Xml::Schema::XmlSchemaIdentityConstraint* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetTableNamespace", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline ::StringW System::Data::XSDSchema::GetTableName(::System::Xml::Schema::XmlSchemaIdentityConstraint* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "GetTableName", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline bool System::Data::XSDSchema::IsTable(::System::Xml::Schema::XmlSchemaElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "IsTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::System::Data::DataTable* System::Data::XSDSchema::HandleTable(::System::Xml::Schema::XmlSchemaElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { "HandleTable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, node);
}
inline void System::Data::XSDSchema::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XSDSchema*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::XSDSchema* System::Data::XSDSchema::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XSDSchema*>());
}
// Ctor Parameters []
constexpr ::System::Data::XSDSchema::XSDSchema() {}
