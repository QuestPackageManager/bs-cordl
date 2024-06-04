#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Stores.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Stores._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27958e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_TrustedRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(
    &::Mono::Security::X509::X509Stores::get_TrustedRoot)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27959b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores*>::get(), "get_TrustedRoot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(
    &::Mono::Security::X509::X509Stores::Open)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2795a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Stores::__cordl_internal_get__storePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr ::StringW const& Mono::Security::X509::X509Stores::__cordl_internal_get__storePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__storePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____storePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Security::X509::X509Stores::__cordl_internal_get__newFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr bool const& Mono::Security::X509::X509Stores::__cordl_internal_get__newFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__newFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newFormat = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__trusted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trusted;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Store*> const& Mono::Security::X509::X509Stores::__cordl_internal_get__trusted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trusted;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__trusted(::Mono::Security::X509::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trusted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509Stores::New_ctor(::StringW path, bool newFormat) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::X509Stores*>(path, newFormat));
}
inline void Mono::Security::X509::X509Stores::_ctor(::StringW path, bool newFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, newFormat);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_TrustedRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores*>::get(), "get_TrustedRoot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::Open(::StringW storeName, bool create) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*, false>(this, ___internal_method, storeName, create);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Stores::X509Stores() {}
