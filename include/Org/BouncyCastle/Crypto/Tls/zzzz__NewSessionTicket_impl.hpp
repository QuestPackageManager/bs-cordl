#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\NewSessionTicket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::*)(int64_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346befc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket.get_TicketLifetimeHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::get_TicketLifetimeHint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket.get_Ticket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::*)()>(&::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::get_Ticket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346bf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::Encode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x346bf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::Parse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x346bf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::NewSessionTicket::__cordl_internal_get_mTicketLifetimeHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTicketLifetimeHint;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::NewSessionTicket::__cordl_internal_get_mTicketLifetimeHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTicketLifetimeHint;
}
constexpr void Org::BouncyCastle::Crypto::Tls::NewSessionTicket::__cordl_internal_set_mTicketLifetimeHint(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTicketLifetimeHint = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::NewSessionTicket::__cordl_internal_get_mTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTicket;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::NewSessionTicket::__cordl_internal_get_mTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::NewSessionTicket::__cordl_internal_set_mTicket(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTicket = value;
}
inline void Org::BouncyCastle::Crypto::Tls::NewSessionTicket::_ctor(int64_t ticketLifetimeHint, ::ArrayW<uint8_t> ticket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticketLifetimeHint, ticket);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::NewSessionTicket::get_TicketLifetimeHint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::NewSessionTicket::get_Ticket() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::NewSessionTicket::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* Org::BouncyCastle::Crypto::Tls::NewSessionTicket::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* Org::BouncyCastle::Crypto::Tls::NewSessionTicket::New_ctor(int64_t ticketLifetimeHint, ::ArrayW<uint8_t> ticket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>(ticketLifetimeHint, ticket));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket::NewSessionTicket() {}
