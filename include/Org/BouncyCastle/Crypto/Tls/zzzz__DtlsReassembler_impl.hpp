#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DtlsReassembler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReassembler_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReassembler_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range.get_Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "get_Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range.set_Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::set_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "set_Start", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range.get_End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "get_End", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range.set_End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::set_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "set_End", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::__cordl_internal_get_mStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStart;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::__cordl_internal_get_mStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStart;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::__cordl_internal_set_mStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mStart = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::__cordl_internal_get_mEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEnd;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::__cordl_internal_get_mEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEnd;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::__cordl_internal_set_mEnd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEnd = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::_ctor(int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::get_Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "get_Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::set_Start(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "set_Start", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::get_End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "get_End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::set_End(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(), { "set_End", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range* Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::New_ctor(int32_t start, int32_t end) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range*>(start, end));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler_Range::DtlsReassembler_Range() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::*)(uint8_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3448108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler.get_MsgType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::get_MsgType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { "get_MsgType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler.GetBodyIfComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::GetBodyIfComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3448260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { "GetBodyIfComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler.ContributeFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::*)(uint8_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::ContributeFragment)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x344831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(),
                                                                                           { "ContributeFragment",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::Reset)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x344880c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_get_mMsgType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMsgType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_get_mMsgType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMsgType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_set_mMsgType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMsgType = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_get_mBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBody;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_get_mBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBody;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_set_mBody(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBody = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_get_mMissing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMissing;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_get_mMissing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMissing;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReassembler::__cordl_internal_set_mMissing(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMissing = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReassembler::_ctor(uint8_t msg_type, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg_type, length);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::DtlsReassembler::get_MsgType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { "get_MsgType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsReassembler::GetBodyIfComplete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { "GetBodyIfComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReassembler::ContributeFragment(uint8_t msg_type, int32_t length, ::ArrayW<uint8_t> buf, int32_t off, int32_t fragment_offset,
                                                                                int32_t fragment_length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(),
                                                                                         { "ContributeFragment",
                                                                                           {},
                                                                                           { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg_type, length, buf, off, fragment_offset, fragment_length);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReassembler::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler* Org::BouncyCastle::Crypto::Tls::DtlsReassembler::New_ctor(uint8_t msg_type, int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*>(msg_type, length));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler::DtlsReassembler() {}
