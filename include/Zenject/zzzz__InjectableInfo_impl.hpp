#pragma once
// IWYU pragma private; include "Zenject/InjectableInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
//  Writing Method size for method: ::Zenject::InjectableInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::InjectableInfo::*)(bool, ::System::Object*, ::StringW, ::System::Type*, ::System::Object*, ::Zenject::InjectSources)>(&::Zenject::InjectableInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c71a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectableInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::InjectableInfo::__cordl_internal_get_Optional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Optional;
}
constexpr bool const& Zenject::InjectableInfo::__cordl_internal_get_Optional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Optional;
}
constexpr void Zenject::InjectableInfo::__cordl_internal_set_Optional(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Optional = value;
}
constexpr ::System::Object*& Zenject::InjectableInfo::__cordl_internal_get_Identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Identifier;
}
constexpr ::System::Object* const& Zenject::InjectableInfo::__cordl_internal_get_Identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Identifier;
}
constexpr void Zenject::InjectableInfo::__cordl_internal_set_Identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectSources& Zenject::InjectableInfo::__cordl_internal_get_SourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SourceType;
}
constexpr ::Zenject::InjectSources const& Zenject::InjectableInfo::__cordl_internal_get_SourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SourceType;
}
constexpr void Zenject::InjectableInfo::__cordl_internal_set_SourceType(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SourceType = value;
}
constexpr ::StringW& Zenject::InjectableInfo::__cordl_internal_get_MemberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberName;
}
constexpr ::StringW const& Zenject::InjectableInfo::__cordl_internal_get_MemberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberName;
}
constexpr void Zenject::InjectableInfo::__cordl_internal_set_MemberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::InjectableInfo::__cordl_internal_get_MemberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberType;
}
constexpr ::System::Type* const& Zenject::InjectableInfo::__cordl_internal_get_MemberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberType;
}
constexpr void Zenject::InjectableInfo::__cordl_internal_set_MemberType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Zenject::InjectableInfo::__cordl_internal_get_DefaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValue;
}
constexpr ::System::Object* const& Zenject::InjectableInfo::__cordl_internal_get_DefaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValue;
}
constexpr void Zenject::InjectableInfo::__cordl_internal_set_DefaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::InjectableInfo::_ctor(bool optional, ::System::Object* identifier, ::StringW memberName, ::System::Type* memberType, ::System::Object* defaultValue,
                                           ::Zenject::InjectSources sourceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectableInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optional, identifier, memberName, memberType, defaultValue, sourceType);
}
inline ::Zenject::InjectableInfo* Zenject::InjectableInfo::New_ctor(bool optional, ::System::Object* identifier, ::StringW memberName, ::System::Type* memberType, ::System::Object* defaultValue,
                                                                    ::Zenject::InjectSources sourceType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectableInfo*>(optional, identifier, memberName, memberType, defaultValue, sourceType));
}
// Ctor Parameters []
constexpr ::Zenject::InjectableInfo::InjectableInfo() {}
