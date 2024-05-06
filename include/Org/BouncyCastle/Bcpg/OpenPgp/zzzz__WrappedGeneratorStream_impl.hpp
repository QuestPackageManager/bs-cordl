#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__WrappedGeneratorStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1331544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::Close)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1331570;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*& Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__cordl_internal_get_gen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*> const& Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__cordl_internal_get_gen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gen;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__cordl_internal_set_gen(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream* Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen,
                                                                                                                                      ::System::IO::Stream* str) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(gen, str));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen, ::System::IO::Stream* str) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gen, str);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::WrappedGeneratorStream() {}
