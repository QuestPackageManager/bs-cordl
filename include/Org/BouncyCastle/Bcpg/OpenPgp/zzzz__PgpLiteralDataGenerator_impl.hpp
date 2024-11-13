#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpLiteralDataGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpLiteralDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fa668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)(bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24fa670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator.WriteHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::BcpgOutputStream*, char16_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int64_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::WriteHeader)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x24fa698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "WriteHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)(::System::IO::Stream*, char16_t, ::StringW, int64_t, ::System::DateTime)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Open)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x24fa7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)(::System::IO::Stream*, char16_t, ::StringW, ::System::DateTime, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Open)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x24fa99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)(::System::IO::Stream*, char16_t, ::System::IO::FileInfo*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Open)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24fab48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Close)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24fabcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Close",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::__cordl_internal_get_pkOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkOut;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::__cordl_internal_get_pkOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::__cordl_internal_set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pkOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::__cordl_internal_get_oldFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldFormat;
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::__cordl_internal_get_oldFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldFormat;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::__cordl_internal_set_oldFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldFormat = value;
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>());
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::New_ctor(bool oldFormat) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>(oldFormat));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::_ctor(bool oldFormat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldFormat);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::WriteHeader(::Org::BouncyCastle::Bcpg::BcpgOutputStream* outStr, char16_t format, ::ArrayW<uint8_t, ::Array<uint8_t>*> encName,
                                                                                   int64_t modificationTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "WriteHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr, format, encName, modificationTime);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Open(::System::IO::Stream* outStr, char16_t format, ::StringW name, int64_t length,
                                                                                             ::System::DateTime modificationTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, format, name, length, modificationTime);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Open(::System::IO::Stream* outStr, char16_t format, ::StringW name, ::System::DateTime modificationTime,
                                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, format, name, modificationTime, buffer);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Open(::System::IO::Stream* outStr, char16_t format, ::System::IO::FileInfo* file) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, format, file);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::Close() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*>::get(), "Close",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator::PgpLiteralDataGenerator() {}
