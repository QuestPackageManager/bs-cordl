#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMACSHA384.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA384_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACSHA384::*)()>(&::System::Security::Cryptography::HMACSHA384::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f9248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACSHA384::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::HMACSHA384::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27f926c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384.get_BlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::HMACSHA384::*)()>(
    &::System::Security::Cryptography::HMACSHA384::get_BlockSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f935c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(),
                                                                               "get_BlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::HMACSHA384::__cordl_internal_get_m_useLegacyBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useLegacyBlockSize;
}
constexpr bool const& System::Security::Cryptography::HMACSHA384::__cordl_internal_get_m_useLegacyBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useLegacyBlockSize;
}
constexpr void System::Security::Cryptography::HMACSHA384::__cordl_internal_set_m_useLegacyBlockSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_useLegacyBlockSize = value;
}
inline ::System::Security::Cryptography::HMACSHA384* System::Security::Cryptography::HMACSHA384::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::HMACSHA384*>());
}
inline void System::Security::Cryptography::HMACSHA384::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HMACSHA384* System::Security::Cryptography::HMACSHA384::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::HMACSHA384*>(key));
}
inline void System::Security::Cryptography::HMACSHA384::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline int32_t System::Security::Cryptography::HMACSHA384::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(),
                                                                             "get_BlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMACSHA384::HMACSHA384() {}
