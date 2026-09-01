#pragma once
// IWYU pragma private; include "System\Data\XMLSchema.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XMLSchema_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/zzzz__XmlAttributeCollection_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::XMLSchema.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(&::System::Data::XMLSchema::GetConverter)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6058a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { "GetConverter", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLSchema.SetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Xml::XmlAttributeCollection*)>(&::System::Data::XMLSchema::SetProperties)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x60551e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(),
                                                             { "SetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlAttributeCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLSchema.FEqualIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlNode*, ::StringW, ::StringW)>(&::System::Data::XMLSchema::FEqualIdentity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6052fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(),
                                                             { "FEqualIdentity", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLSchema.GetBooleanAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlElement*, ::StringW, ::StringW, bool)>(&::System::Data::XMLSchema::GetBooleanAttribute)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6058a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(),
                            { "GetBooleanAttribute", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLSchema.GenUniqueColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Data::DataTable*)>(&::System::Data::XMLSchema::GenUniqueColumnName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6054d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { "GenUniqueColumnName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLSchema._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLSchema::*)()>(&::System::Data::XMLSchema::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6052dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::TypeConverter* System::Data::XMLSchema::GetConverter(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { "GetConverter", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(nullptr, ___internal_method, type);
}
inline void System::Data::XMLSchema::SetProperties(::System::Object* instance, ::System::Xml::XmlAttributeCollection* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { "SetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlAttributeCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, attrs);
}
inline bool System::Data::XMLSchema::FEqualIdentity(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(),
                                                           { "FEqualIdentity", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node, name, ns);
}
inline bool System::Data::XMLSchema::GetBooleanAttribute(::System::Xml::XmlElement* element, ::StringW attrName, ::StringW attrNS, bool defVal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(),
                          { "GetBooleanAttribute", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, attrName, attrNS, defVal);
}
inline ::StringW System::Data::XMLSchema::GenUniqueColumnName(::StringW proposedName, ::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { "GenUniqueColumnName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, proposedName, table);
}
inline void System::Data::XMLSchema::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLSchema*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::XMLSchema* System::Data::XMLSchema::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XMLSchema*>());
}
// Ctor Parameters []
constexpr ::System::Data::XMLSchema::XMLSchema() {}
