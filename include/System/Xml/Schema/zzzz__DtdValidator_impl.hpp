#pragma once
// IWYU pragma private; include "System/Xml/Schema/DtdValidator.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::DtdValidator_NamespaceManager::*)(::StringW)>(
    &::System::Xml::Schema::DtdValidator_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c8ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator_NamespaceManager*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::DtdValidator_NamespaceManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator_NamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator_NamespaceManager::*)()>(&::System::Xml::Schema::DtdValidator_NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61c8aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator_NamespaceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW System::Xml::Schema::DtdValidator_NamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DtdValidator_NamespaceManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline void System::Xml::Schema::DtdValidator_NamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator_NamespaceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::DtdValidator_NamespaceManager* System::Xml::Schema::DtdValidator_NamespaceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::DtdValidator_NamespaceManager*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DtdValidator_NamespaceManager::DtdValidator_NamespaceManager() {}
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::IValidationEventHandling*, bool)>(
    &::System::Xml::Schema::DtdValidator::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61c657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::IValidationEventHandling*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61c6620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::Validate)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x61c683c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.MeetsStandAloneConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::MeetsStandAloneConstraint)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61c6b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "MeetsStandAloneConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidatePIComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidatePIComment)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x61c6c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidatePIComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61c6a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateChildElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateChildElement)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61c6ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateChildElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateStartElement)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x61c7254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateEndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateEndStartElement)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x61c7c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateEndStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ProcessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ProcessElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x61c713c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ProcessElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61c7dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateEndElement)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x61c6e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61c7fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ProcessTokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlTokenizedType, ::StringW)>(
    &::System::Xml::Schema::DtdValidator::ProcessTokenizedType)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x61c8004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                                                             { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::StringW, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::DtdValidator::CheckValue)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x61c76ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "CheckValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.AddID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::StringW, ::System::Object*)>(&::System::Xml::Schema::DtdValidator::AddID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61c8210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "AddID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.FindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::DtdValidator::*)(::StringW)>(&::System::Xml::Schema::DtdValidator::FindId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61c82a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.GenEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::DtdValidator::GenEntity)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x61c6cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "GenEntity", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.GetEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaEntity* (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*, bool)>(
    &::System::Xml::Schema::DtdValidator::GetEntity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61c82c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                                                                                           { "GetEntity", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CheckForwardRefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::CheckForwardRefs)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61c7eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "CheckForwardRefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::DtdValidator::Push)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x61c6758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::Pop)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61c7e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.SetDefaultTypedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*)>(&::System::Xml::Schema::DtdValidator::SetDefaultTypedValue)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x61c8370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                                                { "SetDefaultTypedValue", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::System::Xml::IDtdParserAdapter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CheckDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::IValidationEventHandling*, ::StringW)>(
    &::System::Xml::Schema::DtdValidator::CheckDefaultValue)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x61c8678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "CheckDefaultValue",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(),
                                                                                         ::i2c::type_of<::System::Xml::IValidationEventHandling*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::HWStack*& System::Xml::Schema::DtdValidator::__cordl_internal_get_validationStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_validationStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_validationStack(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationStack = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::DtdValidator::__cordl_internal_get_attPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_attPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_attPresence(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attPresence = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::DtdValidator::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::DtdValidator::__cordl_internal_get_IDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_IDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_IDs(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IDs = value;
}
constexpr ::System::Xml::Schema::IdRefNode*& System::Xml::Schema::DtdValidator::__cordl_internal_get_idRefListHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr ::System::Xml::Schema::IdRefNode* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_idRefListHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idRefListHead = value;
}
constexpr bool& System::Xml::Schema::DtdValidator::__cordl_internal_get_processIdentityConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processIdentityConstraints;
}
constexpr bool const& System::Xml::Schema::DtdValidator::__cordl_internal_get_processIdentityConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processIdentityConstraints;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_processIdentityConstraints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processIdentityConstraints = value;
}
inline void System::Xml::Schema::DtdValidator::setStaticF_namespaceManager(::System::Xml::Schema::DtdValidator_NamespaceManager* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::DtdValidator_NamespaceManager*, "namespaceManager", ::System::Xml::Schema::DtdValidator*>(
      std::forward<::System::Xml::Schema::DtdValidator_NamespaceManager*>(value));
}
inline ::System::Xml::Schema::DtdValidator_NamespaceManager* System::Xml::Schema::DtdValidator::getStaticF_namespaceManager() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::DtdValidator_NamespaceManager*, "namespaceManager", ::System::Xml::Schema::DtdValidator*>();
}
inline void System::Xml::Schema::DtdValidator::_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::IValidationEventHandling*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, eventHandling, processIdentityConstraints);
}
inline void System::Xml::Schema::DtdValidator::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::Validate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::DtdValidator::MeetsStandAloneConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "MeetsStandAloneConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidatePIComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidatePIComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateChildElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateChildElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateEndStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateEndStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ProcessElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ProcessElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::CompleteValidation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "ValidateEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::DtdValidator::get_PreserveWhitespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                                                           { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ttype, name);
}
inline void System::Xml::Schema::DtdValidator::CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "CheckValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, attdef);
}
inline void System::Xml::Schema::DtdValidator::AddID(::StringW name, ::System::Object* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "AddID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, node);
}
inline ::System::Object* System::Xml::Schema::DtdValidator::FindId(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline bool System::Xml::Schema::DtdValidator::GenEntity(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "GenEntity", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline ::System::Xml::Schema::SchemaEntity* System::Xml::Schema::DtdValidator::GetEntity(::System::Xml::XmlQualifiedName* qname, bool fParameterEntity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "GetEntity", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaEntity*>(this, ___internal_method, qname, fParameterEntity);
}
inline void System::Xml::Schema::DtdValidator::CheckForwardRefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "CheckForwardRefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::Push(::System::Xml::XmlQualifiedName* elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName);
}
inline bool System::Xml::Schema::DtdValidator::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(),
                                              { "SetDefaultTypedValue", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::System::Xml::IDtdParserAdapter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attdef, readerAdapter);
}
inline void System::Xml::Schema::DtdValidator::CheckDefaultValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo,
                                                                 ::System::Xml::IValidationEventHandling* eventHandling, ::StringW baseUriStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DtdValidator*>(), { "CheckDefaultValue",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(),
                                                                                       ::i2c::type_of<::System::Xml::IValidationEventHandling*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attdef, sinfo, eventHandling, baseUriStr);
}
inline ::System::Xml::Schema::DtdValidator* System::Xml::Schema::DtdValidator::New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling,
                                                                                        bool processIdentityConstraints) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::DtdValidator*>(reader, eventHandling, processIdentityConstraints));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DtdValidator::DtdValidator() {}
