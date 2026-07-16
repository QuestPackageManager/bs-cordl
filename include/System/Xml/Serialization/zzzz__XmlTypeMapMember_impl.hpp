#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMember.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x630cdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630ce40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::StringW)>(&::System::Xml::Serialization::XmlTypeMapMember::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630ce48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::get_DefaultValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630ce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_DefaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlTypeMapMember::set_DefaultValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_DefaultValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Type*)>(&::System::Xml::Serialization::XmlTypeMapMember::IsReadOnly)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x630ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "IsReadOnly", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::StringW)>(&::System::Xml::Serialization::XmlTypeMapMember::GetValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x630d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                                                           { "GetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlTypeMapMember::GetValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x63062ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlTypeMapMember::SetValue)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x630d260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                                                           { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW, ::System::Object*)>(&::System::Xml::Serialization::XmlTypeMapMember::SetValue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x630d3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                             { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.InitMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Type*)>(&::System::Xml::Serialization::XmlTypeMapMember::InitMember)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x630cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "InitMember", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_TypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (::System::Xml::Serialization::XmlTypeMapMember::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMember::get_TypeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_TypeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_TypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Xml::Serialization::TypeData*)>(
    &::System::Xml::Serialization::XmlTypeMapMember::set_TypeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_TypeData", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(int32_t)>(&::System::Xml::Serialization::XmlTypeMapMember::set_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_Index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_GlobalIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::get_GlobalIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_GlobalIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_GlobalIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(int32_t)>(&::System::Xml::Serialization::XmlTypeMapMember::set_GlobalIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_GlobalIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_IsOptionalValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::get_IsOptionalValueType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63096ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_IsOptionalValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_IsOptionalValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(bool)>(&::System::Xml::Serialization::XmlTypeMapMember::set_IsOptionalValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630d508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_IsOptionalValueType", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.get_IsReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMember::*)()>(&::System::Xml::Serialization::XmlTypeMapMember::get_IsReturnValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x630d518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_IsReturnValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.set_IsReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(bool)>(&::System::Xml::Serialization::XmlTypeMapMember::set_IsReturnValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x630d524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_IsReturnValue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.CheckOptionalValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlTypeMapMember::CheckOptionalValueType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x630d544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "CheckOptionalValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.GetValueSpecified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlTypeMapMember::GetValueSpecified)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x63096b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "GetValueSpecified", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMember.SetValueSpecified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMember::*)(::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlTypeMapMember::SetValueSpecified)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x630d5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                                                           { "SetValueSpecified", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr int32_t& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__globalIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalIndex;
}
constexpr int32_t const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__globalIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalIndex;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__globalIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____globalIndex = value;
}
constexpr int32_t& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__specifiedGlobalIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specifiedGlobalIndex;
}
constexpr int32_t const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__specifiedGlobalIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specifiedGlobalIndex;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__specifiedGlobalIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specifiedGlobalIndex = value;
}
constexpr ::System::Xml::Serialization::TypeData*& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__typeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeData;
}
constexpr ::System::Xml::Serialization::TypeData* const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__typeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeData;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__typeData(::System::Xml::Serialization::TypeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeData = value;
}
constexpr ::System::Reflection::MemberInfo*& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__member() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____member;
}
constexpr ::System::Reflection::MemberInfo* const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__member() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____member;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__member(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____member = value;
}
constexpr ::System::Reflection::MemberInfo*& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__specifiedMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specifiedMember;
}
constexpr ::System::Reflection::MemberInfo* const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__specifiedMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specifiedMember;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__specifiedMember(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specifiedMember = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__shouldSerialize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldSerialize;
}
constexpr ::System::Reflection::MethodInfo* const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__shouldSerialize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldSerialize;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__shouldSerialize(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldSerialize = value;
}
constexpr ::System::Object*& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr ::System::Object* const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__defaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue = value;
}
constexpr int32_t& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr int32_t const& System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Xml::Serialization::XmlTypeMapMember::__cordl_internal_set__flags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
inline void System::Xml::Serialization::XmlTypeMapMember::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlTypeMapMember::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Xml::Serialization::XmlTypeMapMember::get_DefaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_DefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_DefaultValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_DefaultValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Serialization::XmlTypeMapMember::IsReadOnly(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "IsReadOnly", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlTypeMapMember::GetValue(::System::Object* ob, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, ob, name);
}
inline ::System::Object* System::Xml::Serialization::XmlTypeMapMember::GetValue(::System::Object* ob) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, ob);
}
inline void System::Xml::Serialization::XmlTypeMapMember::SetValue(::System::Object* ob, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                                                         { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ob, value);
}
inline void System::Xml::Serialization::XmlTypeMapMember::SetValue(::System::Object* ob, ::StringW name, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                           { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ob, name, value);
}
inline void System::Xml::Serialization::XmlTypeMapMember::InitMember(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "InitMember", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::XmlTypeMapMember::get_TypeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_TypeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_TypeData(::System::Xml::Serialization::TypeData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_TypeData", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Serialization::XmlTypeMapMember::get_Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_Index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_Index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Serialization::XmlTypeMapMember::get_GlobalIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_GlobalIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_GlobalIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_GlobalIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Serialization::XmlTypeMapMember::get_IsOptionalValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_IsOptionalValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_IsOptionalValueType(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_IsOptionalValueType", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Serialization::XmlTypeMapMember::get_IsReturnValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "get_IsReturnValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMember::set_IsReturnValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "set_IsReturnValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlTypeMapMember::CheckOptionalValueType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "CheckOptionalValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::Xml::Serialization::XmlTypeMapMember::GetValueSpecified(::System::Object* ob) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(), { "GetValueSpecified", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ob);
}
inline void System::Xml::Serialization::XmlTypeMapMember::SetValueSpecified(::System::Object* ob, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMember*>(),
                                                                                         { "SetValueSpecified", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ob, value);
}
inline ::System::Xml::Serialization::XmlTypeMapMember* System::Xml::Serialization::XmlTypeMapMember::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapMember*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMember::XmlTypeMapMember() {}
