#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/BufferedCipherWrapper.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__BufferedCipherWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(
    ::Org::BouncyCastle::Crypto::IBufferedCipher*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23af19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23af228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), "GetMaxOutputSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23af2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), "GetUpdateOutputSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.get_Stream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23af380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), "get_Stream",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_bufferedCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferedCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_bufferedCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferedCipher;
}
constexpr void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_set_bufferedCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bufferedCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* const& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_set_stream(::Org::BouncyCastle::Crypto::IO::CipherStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferedCipher, source);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetMaxOutputSize(int32_t inputLen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), "GetMaxOutputSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetUpdateOutputSize(int32_t inputLen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), "GetUpdateOutputSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputLen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::get_Stream() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(), "get_Stream",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*
Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(bufferedCipher, source));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipher"
constexpr Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::operator ::Org::BouncyCastle::Crypto::ICipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipher"
constexpr ::Org::BouncyCastle::Crypto::ICipher* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::i___Org__BouncyCastle__Crypto__ICipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::BufferedCipherWrapper() {}
