#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaDeclBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::SchemaDeclBase_Use::SchemaDeclBase_Use(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaDeclBase_Use::SchemaDeclBase_Use() {}
constexpr ::System::Xml::Schema::SchemaDeclBase_Use System::Xml::Schema::SchemaDeclBase_Use::Default{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::SchemaDeclBase_Use System::Xml::Schema::SchemaDeclBase_Use::Required{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::SchemaDeclBase_Use System::Xml::Schema::SchemaDeclBase_Use::Implied{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::SchemaDeclBase_Use System::Xml::Schema::SchemaDeclBase_Use::Fixed{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::Schema::SchemaDeclBase_Use System::Xml::Schema::SchemaDeclBase_Use::RequiredFixed{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::XmlQualifiedName*, ::StringW)>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61fe6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61fe764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaDeclBase::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Name", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Prefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61fe7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&::System::Xml::Schema::SchemaDeclBase::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_IsDeclaredInExternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_IsDeclaredInExternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_IsDeclaredInExternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(bool)>(&::System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_IsDeclaredInExternal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Presence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaDeclBase_Use (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Presence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Presence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::SchemaDeclBase_Use)>(
    &::System::Xml::Schema::SchemaDeclBase::set_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Presence", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaDeclBase_Use>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_MaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_MaxLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_MaxLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_MaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(int64_t)>(&::System::Xml::Schema::SchemaDeclBase::set_MaxLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_MaxLength", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_MinLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_MinLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_MinLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_MinLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(int64_t)>(&::System::Xml::Schema::SchemaDeclBase::set_MinLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_MinLength", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_SchemaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::SchemaDeclBase::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_SchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Datatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Datatype", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Datatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::SchemaDeclBase::set_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Datatype", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&::System::Xml::Schema::SchemaDeclBase::AddValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x61fe860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::System::Xml::Schema::SchemaDeclBase::set_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Values", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61fe974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_DefaultValueRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_DefaultValueRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&::System::Xml::Schema::SchemaDeclBase::set_DefaultValueRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_DefaultValueRaw", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_DefaultValueTyped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Object*)>(&::System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_DefaultValueTyped", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.CheckEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaDeclBase::*)(::System::Object*)>(&::System::Xml::Schema::SchemaDeclBase::CheckEnumeration)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61fe9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "CheckEnumeration", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaDeclBase::*)(::System::Object*)>(&::System::Xml::Schema::SchemaDeclBase::CheckValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61fea74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "CheckValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
constexpr bool& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_isDeclaredInExternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDeclaredInExternal;
}
constexpr bool const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_isDeclaredInExternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDeclaredInExternal;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_isDeclaredInExternal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDeclaredInExternal = value;
}
constexpr ::System::Xml::Schema::SchemaDeclBase_Use& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presence;
}
constexpr ::System::Xml::Schema::SchemaDeclBase_Use const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presence;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_presence(::System::Xml::Schema::SchemaDeclBase_Use value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___presence = value;
}
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_schemaType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype*& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_datatype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datatype;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_datatype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datatype;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___datatype = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_defaultValueRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValueRaw;
}
constexpr ::StringW const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_defaultValueRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValueRaw;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_defaultValueRaw(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValueRaw = value;
}
constexpr ::System::Object*& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_defaultValueTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValueTyped;
}
constexpr ::System::Object* const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_defaultValueTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValueTyped;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_defaultValueTyped(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValueTyped = value;
}
constexpr int64_t& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLength;
}
constexpr int64_t const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLength;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_maxLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxLength = value;
}
constexpr int64_t& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_minLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLength;
}
constexpr int64_t const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_minLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLength;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_minLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minLength = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Xml::Schema::SchemaDeclBase::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__cordl_internal_set_values(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
inline void System::Xml::Schema::SchemaDeclBase::_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, prefix);
}
inline void System::Xml::Schema::SchemaDeclBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaDeclBase::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Name(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Name", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::SchemaDeclBase::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Prefix(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_IsDeclaredInExternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_IsDeclaredInExternal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaDeclBase_Use System::Xml::Schema::SchemaDeclBase::get_Presence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Presence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaDeclBase_Use>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Presence(::System::Xml::Schema::SchemaDeclBase_Use value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Presence", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaDeclBase_Use>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::SchemaDeclBase::get_MaxLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_MaxLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_MaxLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_MaxLength", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::SchemaDeclBase::get_MinLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_MinLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_MinLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_MinLength", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::SchemaDeclBase::get_SchemaType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_SchemaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_SchemaType(::System::Xml::Schema::XmlSchemaType* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_SchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::SchemaDeclBase::get_Datatype() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Datatype", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Datatype", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaDeclBase::AddValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Xml::Schema::SchemaDeclBase::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Values(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_Values", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_DefaultValueRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_DefaultValueRaw(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_DefaultValueRaw", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "get_DefaultValueTyped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "set_DefaultValueTyped", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaDeclBase::CheckEnumeration(::System::Object* pVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "CheckEnumeration", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pVal);
}
inline bool System::Xml::Schema::SchemaDeclBase::CheckValue(::System::Object* pVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaDeclBase*>(), { "CheckValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pVal);
}
inline ::System::Xml::Schema::SchemaDeclBase* System::Xml::Schema::SchemaDeclBase::New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaDeclBase*>(name, prefix));
}
inline ::System::Xml::Schema::SchemaDeclBase* System::Xml::Schema::SchemaDeclBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaDeclBase*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaDeclBase::SchemaDeclBase() {}
