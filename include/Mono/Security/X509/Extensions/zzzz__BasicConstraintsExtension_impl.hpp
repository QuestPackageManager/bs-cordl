#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/BasicConstraintsExtension.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__BasicConstraintsExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)(::Mono::Security::X509::X509Extension*)>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c402f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3c41e74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3c41fa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.get_CertificateAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c420d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                 "get_CertificateAuthority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3c420d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 3));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_cA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cA;
}
constexpr bool const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_cA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cA;
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_set_cA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cA = value;
}
constexpr int32_t& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_pathLenConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathLenConstraint;
}
constexpr int32_t const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_pathLenConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathLenConstraint;
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_set_pathLenConstraint(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pathLenConstraint = value;
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor(::Mono::Security::X509::X509Extension* extension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                               "get_CertificateAuthority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::Extensions::BasicConstraintsExtension* Mono::Security::X509::Extensions::BasicConstraintsExtension::New_ctor(::Mono::Security::X509::X509Extension* extension) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::BasicConstraintsExtension::BasicConstraintsExtension() {}
