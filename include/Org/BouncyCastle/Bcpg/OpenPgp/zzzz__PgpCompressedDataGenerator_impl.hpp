#pragma once
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2OutputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpCompressedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpCompressedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::*)(
    ::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11169a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1116a58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*>::get(), 21));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*
Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::New_ctor(::System::IO::Stream* output) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*>(output));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::_ctor(::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream::__PgpCompressedDataGenerator__SafeCBZip2OutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::*)(
    ::System::IO::Stream*, int32_t, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1116998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1116ac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*>::get(), 21));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*
Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::New_ctor(::System::IO::Stream* output, int32_t level, bool nowrap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*>(output, level, nowrap));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::_ctor(::System::IO::Stream* output, int32_t level, bool nowrap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, level, nowrap);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream::__PgpCompressedDataGenerator__SafeZOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1116444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x111644c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1116570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1116820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.doOpen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::doOpen)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x11166b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "doOpen",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Close)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x11169ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "Close",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_compression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compression;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_compression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compression;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_compression(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compression = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_dOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dOut;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_dOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_dOut(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_pkOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkOut;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_pkOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pkOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(algorithm));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(algorithm, compression));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, compression);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open(::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "Open",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, buffer);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::doOpen() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "doOpen",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Close() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>::get(), "Close",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::PgpCompressedDataGenerator() {}
