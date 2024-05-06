#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Claims/zzzz__Claim_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Claims::Claim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::Claim::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Security::Claims::ClaimsIdentity*)>(&::System::Security::Claims::Claim::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27f7724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::Claim::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Security::Claims::ClaimsIdentity*, ::StringW, ::StringW)>(&::System::Security::Claims::Claim::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x27fc478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Security::Claims::Claim::*)(::System::Security::Claims::Claim*, ::System::Security::Claims::ClaimsIdentity*)>(&::System::Security::Claims::Claim::_ctor)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x27fc808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::Claim*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.OnDeserializedMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::Claim::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Security::Claims::Claim::OnDeserializedMethod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27fcb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "OnDeserializedMethod", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::System::Security::Claims::Claim::*)()>(
    &::System::Security::Claims::Claim::get_Properties)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x27fc6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Properties",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Subject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Claims::ClaimsIdentity* (::System::Security::Claims::Claim::*)()>(
    &::System::Security::Claims::Claim::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fcb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Subject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.set_Subject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::Claim::*)(::System::Security::Claims::ClaimsIdentity*)>(
    &::System::Security::Claims::Claim::set_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fcb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "set_Subject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fcb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fcb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Claims::Claim* (::System::Security::Claims::Claim::*)(::System::Security::Claims::ClaimsIdentity*)>(&::System::Security::Claims::Claim::Clone)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27fcb9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27fcc0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_issuer;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_issuer;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_issuer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_originalIssuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalIssuer;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_originalIssuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalIssuer;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_originalIssuer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_originalIssuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueType;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueType;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_valueType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_valueType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Claims::Claim::__cordl_internal_get_m_userSerializationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_userSerializationData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Claims::Claim::__cordl_internal_get_m_userSerializationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_userSerializationData;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_userSerializationData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_userSerializationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& System::Security::Claims::Claim::__cordl_internal_get_m_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_properties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& System::Security::Claims::Claim::__cordl_internal_get_m_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_properties;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_properties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Security::Claims::Claim::__cordl_internal_get_m_propertyLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_propertyLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Security::Claims::Claim::__cordl_internal_get_m_propertyLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_propertyLock;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_propertyLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_propertyLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Claims::ClaimsIdentity*& System::Security::Claims::Claim::__cordl_internal_get_m_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_subject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Claims::ClaimsIdentity*> const& System::Security::Claims::Claim::__cordl_internal_get_m_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_subject;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_subject(::System::Security::Claims::ClaimsIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_subject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                                                    ::System::Security::Claims::ClaimsIdentity* subject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Claims::Claim*>(type, value, valueType, issuer, originalIssuer, subject));
}
inline void System::Security::Claims::Claim::_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                   ::System::Security::Claims::ClaimsIdentity* subject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value, valueType, issuer, originalIssuer, subject);
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                                                    ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Claims::Claim*>(type, value, valueType, issuer, originalIssuer, subject, propertyKey, propertyValue));
}
inline void System::Security::Claims::Claim::_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                   ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value, valueType, issuer, originalIssuer, subject, propertyKey, propertyValue);
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::New_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Claims::Claim*>(other, subject));
}
inline void System::Security::Claims::Claim::_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::Claim*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other, subject);
}
inline void System::Security::Claims::Claim::OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "OnDeserializedMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Security::Claims::Claim::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Properties",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::System::Security::Claims::ClaimsIdentity* System::Security::Claims::Claim::get_Subject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Subject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::ClaimsIdentity*, false>(this, ___internal_method);
}
inline void System::Security::Claims::Claim::set_Subject(::System::Security::Claims::ClaimsIdentity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "set_Subject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Security::Claims::Claim::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Security::Claims::Claim::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::Clone(::System::Security::Claims::ClaimsIdentity* identity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::Claim*, false>(this, ___internal_method, identity);
}
inline ::StringW System::Security::Claims::Claim::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::Claim*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Claims::Claim::Claim() {}
