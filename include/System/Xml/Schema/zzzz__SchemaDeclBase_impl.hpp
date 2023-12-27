#pragma once
#include "System/Xml/Schema/zzzz__SchemaDeclBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use::__SchemaDeclBase__Use(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use::__SchemaDeclBase__Use() {}
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::__SchemaDeclBase__Use::Default{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::__SchemaDeclBase__Use::Required{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::__SchemaDeclBase__Use::Implied{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::__SchemaDeclBase__Use::Fixed{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::__SchemaDeclBase__Use::RequiredFixed{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::XmlQualifiedName*, ::StringW)>(
    &::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28c435c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28c43e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Name",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Prefix)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c44a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Prefix",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_IsDeclaredInExternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c498c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                               "get_IsDeclaredInExternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_IsDeclaredInExternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(bool)>(
    &::System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c4994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_IsDeclaredInExternal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Presence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::__SchemaDeclBase__Use (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Presence",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Presence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::__SchemaDeclBase__Use)>(
    &::System::Xml::Schema::SchemaDeclBase::set_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_Presence", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaDeclBase__Use>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_SchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::SchemaDeclBase::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_SchemaType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Datatype
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Datatype",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Datatype
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::SchemaDeclBase::set_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_Datatype", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.AddValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&::System::Xml::Schema::SchemaDeclBase::AddValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x28c49c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "AddValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Values",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c4ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                               "get_DefaultValueRaw", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::SchemaDeclBase::*)()>(
    &::System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                               "get_DefaultValueTyped", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Object*)>(
    &::System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_DefaultValueTyped",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaDeclBase::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Schema::SchemaDeclBase::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaDeclBase::__get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::Schema::SchemaDeclBase::__get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prefix;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::SchemaDeclBase::__get_isDeclaredInExternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isDeclaredInExternal;
}
constexpr bool const& System::Xml::Schema::SchemaDeclBase::__get_isDeclaredInExternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isDeclaredInExternal;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_isDeclaredInExternal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isDeclaredInExternal = value;
}
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use& System::Xml::Schema::SchemaDeclBase::__get_presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___presence;
}
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use const& System::Xml::Schema::SchemaDeclBase::__get_presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___presence;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_presence(::System::Xml::Schema::__SchemaDeclBase__Use value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___presence = value;
}
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::Schema::SchemaDeclBase::__get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___schemaType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& System::Xml::Schema::SchemaDeclBase::__get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_schemaType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype*& System::Xml::Schema::SchemaDeclBase::__get_datatype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___datatype;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDatatype*> const& System::Xml::Schema::SchemaDeclBase::__get_datatype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___datatype;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___datatype)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaDeclBase::__get_defaultValueRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultValueRaw;
}
constexpr ::StringW const& System::Xml::Schema::SchemaDeclBase::__get_defaultValueRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultValueRaw;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_defaultValueRaw(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultValueRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::SchemaDeclBase::__get_defaultValueTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultValueTyped;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::SchemaDeclBase::__get_defaultValueTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultValueTyped;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_defaultValueTyped(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultValueTyped)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Xml::Schema::SchemaDeclBase::__get_maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxLength;
}
constexpr int64_t const& System::Xml::Schema::SchemaDeclBase::__get_maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxLength;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_maxLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxLength = value;
}
constexpr int64_t& System::Xml::Schema::SchemaDeclBase::__get_minLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minLength;
}
constexpr int64_t const& System::Xml::Schema::SchemaDeclBase::__get_minLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minLength;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_minLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___minLength = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Xml::Schema::SchemaDeclBase::__get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___values;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& System::Xml::Schema::SchemaDeclBase::__get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___values;
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_values(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::SchemaDeclBase* System::Xml::Schema::SchemaDeclBase::New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaDeclBase*>(name, prefix));
}
inline void System::Xml::Schema::SchemaDeclBase::_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, prefix);
}
inline ::System::Xml::Schema::SchemaDeclBase* System::Xml::Schema::SchemaDeclBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaDeclBase*>());
}
inline void System::Xml::Schema::SchemaDeclBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaDeclBase::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaDeclBase::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Prefix",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                             "get_IsDeclaredInExternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_IsDeclaredInExternal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::SchemaDeclBase::get_Presence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Presence",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::__SchemaDeclBase__Use, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Presence(::System::Xml::Schema::__SchemaDeclBase__Use value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_Presence", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaDeclBase__Use>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaDeclBase::set_SchemaType(::System::Xml::Schema::XmlSchemaType* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_SchemaType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::SchemaDeclBase::get_Datatype() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Datatype",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_Datatype", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaDeclBase::AddValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "AddValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Xml::Schema::SchemaDeclBase::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "get_Values",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                             "get_DefaultValueRaw", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                             "get_DefaultValueTyped", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(), "set_DefaultValueTyped",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaDeclBase::SchemaDeclBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
