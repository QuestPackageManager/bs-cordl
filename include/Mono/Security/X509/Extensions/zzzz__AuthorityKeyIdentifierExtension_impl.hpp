#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/AuthorityKeyIdentifierExtension.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__AuthorityKeyIdentifierExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)(
    ::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58eac48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58eac4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58ead64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.get_Identifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58eae54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), "get_Identifier",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58eaec8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__cordl_internal_get_aki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aki;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__cordl_internal_get_aki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aki;
}
constexpr void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__cordl_internal_set_aki(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aki)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::_ctor(::Mono::Security::X509::X509Extension* extension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), "get_Identifier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*
Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::New_ctor(::Mono::Security::X509::X509Extension* extension) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::AuthorityKeyIdentifierExtension() {}
