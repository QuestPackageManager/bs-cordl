#pragma once
// IWYU pragma private; include "Mono/Security/ASN1Convert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/zzzz__ASN1Convert_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::ASN1Convert.FromInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (*)(int32_t)>(&::Mono::Security::ASN1Convert::FromInt32)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3c36098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "FromInt32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.FromOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (*)(::StringW)>(&::Mono::Security::ASN1Convert::FromOid)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3c3621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "FromOid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.FromUnsignedBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::ASN1Convert::FromUnsignedBigInteger)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3c362f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "FromUnsignedBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.ToInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1Convert::ToInt32)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3c36408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "ToInt32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.ToOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1Convert::ToOid)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3c36518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "ToOid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.ToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x3c367a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "ToDateTime", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
inline ::Mono::Security::ASN1* Mono::Security::ASN1Convert::FromInt32(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "FromInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*, false>(nullptr, ___internal_method, value);
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1Convert::FromOid(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "FromOid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*, false>(nullptr, ___internal_method, oid);
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1Convert::FromUnsignedBigInteger(::ArrayW<uint8_t, ::Array<uint8_t>*> big) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "FromUnsignedBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*, false>(nullptr, ___internal_method, big);
}
inline int32_t Mono::Security::ASN1Convert::ToInt32(::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "ToInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, asn1);
}
inline ::StringW Mono::Security::ASN1Convert::ToOid(::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "ToOid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, asn1);
}
inline ::System::DateTime Mono::Security::ASN1Convert::ToDateTime(::Mono::Security::ASN1* time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::ASN1Convert*>::get(), "ToDateTime", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, time);
}
// Ctor Parameters []
constexpr ::Mono::Security::ASN1Convert::ASN1Convert() {}
