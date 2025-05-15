#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SignatureDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)()>(
    &::System::Security::Cryptography::SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cacc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(
    &::System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cacc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_KeyAlgorithm",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_DigestAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(
    &::System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cacc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_DigestAlgorithm",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_FormatterAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(
    &::System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cacc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_FormatterAlgorithm",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_DeformatterAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(
    &::System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cacc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_DeformatterAlgorithm",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strKey;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strKey;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDigest;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDigest;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strDigest(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strFormatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strFormatter;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strFormatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strFormatter;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strFormatter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strFormatter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDeformatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDeformatter;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDeformatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDeformatter;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strDeformatter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strDeformatter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::SignatureDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_KeyAlgorithm",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_DigestAlgorithm",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_FormatterAlgorithm",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SignatureDescription*>::get(), "set_DeformatterAlgorithm",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::SignatureDescription* System::Security::Cryptography::SignatureDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::SignatureDescription*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SignatureDescription::SignatureDescription() {}
