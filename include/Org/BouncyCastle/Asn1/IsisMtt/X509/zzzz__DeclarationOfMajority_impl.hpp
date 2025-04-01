#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/DeclarationOfMajority.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::DeclarationOfMajority_Choice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::DeclarationOfMajority_Choice() {}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::NotYoungerThan{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::FullAgeAtCountry{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::DateOfBirth{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23fa35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(bool, ::StringW)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x23fa404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(
    ::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23fa61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x23fa698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(
    ::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23fa814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fa8cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice (
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fa8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_NotYoungerThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23fa8f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_FullAgeAtCountry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23fa930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_DateOfBirth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23fa968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject*& Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__cordl_internal_get_declaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declaration;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject* const& Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__cordl_internal_get_declaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declaration;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__cordl_internal_set_declaration(::Org::BouncyCastle::Asn1::Asn1TaggedObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___declaration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(int32_t notYoungerThan) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notYoungerThan);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(bool fullAge, ::StringW country) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullAge, country);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dateOfBirth);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(int32_t notYoungerThan) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(notYoungerThan));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(bool fullAge, ::StringW country) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(fullAge, country));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*
Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(dateOfBirth));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(o));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority() {}
