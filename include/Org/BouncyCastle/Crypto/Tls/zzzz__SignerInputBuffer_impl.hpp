#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SignerInputBuffer.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignerInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignerInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::*)(::Org::BouncyCastle::Crypto::ISigner*)>(
    &::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241ad40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::WriteByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x241ad70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::Write)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x241ae1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(), 38));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::__cordl_internal_set_s(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::_ctor(::Org::BouncyCastle::Crypto::ISigner* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream* Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::New_ctor(::Org::BouncyCastle::Crypto::ISigner* s) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*>(s));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream::SignerInputBuffer_SigStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer.UpdateSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::*)(::Org::BouncyCastle::Crypto::ISigner*)>(
    &::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::UpdateSigner)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x241acd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer*>::get(), "UpdateSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241ad68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::UpdateSigner(::Org::BouncyCastle::Crypto::ISigner* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer*>::get(), "UpdateSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer* Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::SignerInputBuffer() {}
