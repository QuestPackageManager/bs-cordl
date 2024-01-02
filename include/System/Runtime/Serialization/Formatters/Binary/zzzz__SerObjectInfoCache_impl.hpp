#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::StringW, ::StringW, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24cb308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24cb344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_fullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_fullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_fullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_assemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_assemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_assemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_hasTypeForwardedFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_hasTypeForwardedFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_hasTypeForwardedFrom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTypeForwardedFrom = value;
}
constexpr ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberInfos;
}
constexpr ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> const&
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberInfos;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberInfos(::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(typeName, assemblyName, hasTypeForwardedFrom));
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName, assemblyName, hasTypeForwardedFrom);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(type));
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::SerObjectInfoCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
