#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixupEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixup_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(
    ::System::Array*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24ce520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(
    ::System::Object*, ::StringW, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24ce978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup.Fixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x24cd978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(), "Fixup", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_valueFixupEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___valueFixupEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_valueFixupEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___valueFixupEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_valueFixupEnum(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___valueFixupEnum = value;
}
constexpr ::System::Array*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_arrayObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___arrayObj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_arrayObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___arrayObj;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_arrayObj(::System::Array* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arrayObj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_indexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___indexMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_indexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___indexMap;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_indexMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indexMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___header;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___header;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_header(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___header)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_memberObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_objectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const&
System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_objectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::setStaticF_valueInfo(::System::Reflection::MemberInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MemberInfo*, "valueInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get>(
      std::forward<::System::Reflection::MemberInfo*>(value));
}
inline ::System::Reflection::MemberInfo* System::Runtime::Serialization::Formatters::Binary::ValueFixup::getStaticF_valueInfo() {
  return ::cordl_internals::getStaticField<::System::Reflection::MemberInfo*, "valueInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get>();
}
inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::System::Array* arrayObj,
                                                                                                                                                  ::ArrayW<int32_t, ::Array<int32_t>*> indexMap) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(arrayObj, indexMap));
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::System::Array* arrayObj, ::ArrayW<int32_t, ::Array<int32_t>*> indexMap) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arrayObj, indexMap);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup*
System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::System::Object* memberObject, ::StringW memberName,
                                                                         ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(memberObject, memberName, objectInfo));
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::System::Object* memberObject, ::StringW memberName,
                                                                                  ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberObject, memberName, objectInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record,
                                                                                  ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(), "Fixup", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, parent);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixup::ValueFixup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
