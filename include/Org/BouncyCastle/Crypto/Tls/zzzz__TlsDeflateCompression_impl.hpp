#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDeflateCompression.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDeflateCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDeflateCompression_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Utilities::Zlib::ZStream*, bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2428460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2428634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>::get(), 23));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, z, compress);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*
Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::New_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(output, z, compress));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::TlsDeflateCompression_DeflateOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2428320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2428328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression.Compress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Compress)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24283d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression.Decompress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Decompress)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2428498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zIn;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zIn;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_set_zIn(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zOut;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zOut;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_set_zOut(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Compress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, output);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Decompress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>());
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::New_ctor(int32_t level) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(level));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
constexpr Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::operator ::Org::BouncyCastle::Crypto::Tls::TlsCompression*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::i___Org__BouncyCastle__Crypto__Tls__TlsCompression() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::TlsDeflateCompression() {}
