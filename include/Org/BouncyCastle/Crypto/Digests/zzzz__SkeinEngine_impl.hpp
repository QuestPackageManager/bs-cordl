#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/SkeinEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ThreefishEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SkeinParameters_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3386328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration.get_Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::get_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33868fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>(), { "get_Bytes", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::__cordl_internal_set_bytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bytes = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::_ctor(int64_t outputSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputSizeBits);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::get_Bytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>(), { "get_Bytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration* Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::New_ctor(int64_t outputSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>(outputSizeBits));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::SkeinEngine_Configuration() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33862cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3386904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x338690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_set_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_set_value(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::_ctor(int32_t type, ::ArrayW<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter* Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::New_ctor(int32_t type, ::ArrayW<uint8_t> value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(type, value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::SkeinEngine_Parameter() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3386914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x33869ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(),
                                                                                           { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3386970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3386a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(uint32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Type)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3386abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "set_Type", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.get_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_First)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3386af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "get_First", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.set_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_First)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3386a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "set_First", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.get_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Final)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3386b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "get_Final", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.set_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Final)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3386b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "set_Final", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.AdvancePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::AdvancePosition)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3386bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "AdvancePosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.GetWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint64_t> (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::GetWords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3386d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "GetWords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::ToString)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3386d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_tweak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_tweak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_set_tweak(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tweak = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_extendedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedPosition;
}
constexpr bool const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_extendedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedPosition;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_set_extendedPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extendedPosition = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* tweak) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(),
                                                                                         { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweak);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Type(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "set_Type", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_First(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "set_First", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Final() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "get_Final", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Final(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "set_Final", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::AdvancePosition(int32_t advance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "AdvancePosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, advance);
}
inline ::ArrayW<uint64_t> Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::GetWords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), { "GetWords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint64_t>>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::SkeinEngine_UbiTweak() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x33855ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x33857d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(),
                                                                                           { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33865b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(), { "Reset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3386468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(),
                                         { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::ProcessBlock)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3386f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(), { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::DoFinal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x33865f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_tweak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_tweak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_tweak(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tweak = value;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_currentBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBlock = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOffset;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOffset;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_currentOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentOffset = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_message(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine, int32_t blockSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine, blockSize);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* ubi) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(),
                                                                                         { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ubi);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(), { "Reset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Update(::ArrayW<uint8_t> value, int32_t offset, int32_t len, ::ArrayW<uint64_t> output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(),
                                              { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, offset, len, output);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::ProcessBlock(::ArrayW<uint64_t> output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(), { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::DoFinal(::ArrayW<uint64_t> output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine,
                                                                                                                            int32_t blockSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(engine, blockSize));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::SkeinEngine_UBI() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.InitialState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::ArrayW<uint64_t>)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitialState)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x33854b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                             { "InitialState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.VariantIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::VariantIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33855e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { "VariantIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x33847c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33849c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CopyIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CopyIn)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33856bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { "CopyIn", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> (*)(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>, ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Clone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3385888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { "Clone",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>>(),
                                                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Copy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3385938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3384ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.get_OutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_OutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3385994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "get_OutputSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.get_BlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_BlockSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3384dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "get_BlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3384e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.InitParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitParams)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x338599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "InitParams", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CreateInitialState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CreateInitialState)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3386014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "CreateInitialState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3384f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x33862d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { "UbiComplete", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiInit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33862b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "UbiInit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiFinal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3386598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "UbiFinal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CheckInitialised
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CheckInitialised)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3386664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "CheckInitialised", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3384f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3384fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                             { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::DoFinal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3385014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                           { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Output
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(uint64_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Output)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x33866bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                { "Output", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_threefish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threefish;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_threefish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threefish;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_threefish(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threefish = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_outputSizeBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputSizeBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_outputSizeBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputSizeBytes;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_outputSizeBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputSizeBytes = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_chain(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chain = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_initialState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialState;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_initialState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialState;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_initialState(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialState = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_key(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_preMessageParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMessageParameters;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_preMessageParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMessageParameters;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_preMessageParameters(::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preMessageParameters = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_postMessageParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postMessageParameters;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_postMessageParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postMessageParameters;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_postMessageParameters(::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postMessageParameters = value;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_ubi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ubi;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_ubi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ubi;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_ubi(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ubi = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_singleByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleByte;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_singleByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleByte;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_singleByte(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleByte = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::setStaticF_INITIAL_STATES(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "INITIAL_STATES", ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Digests::SkeinEngine::getStaticF_INITIAL_STATES() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "INITIAL_STATES", ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>();
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitialState(int32_t blockSize, int32_t outputSize, ::ArrayW<uint64_t> state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                           { "InitialState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blockSize, outputSize, state);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::VariantIdentifier(int32_t blockSizeBytes, int32_t outputSizeBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "VariantIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, blockSizeBytes, outputSizeBytes);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor(int32_t blockSizeBits, int32_t outputSizeBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockSizeBits, outputSizeBits);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CopyIn(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                         { "CopyIn", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine);
}
inline ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>
Org::BouncyCastle::Crypto::Digests::SkeinEngine::Clone(::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> data,
                                                       ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*> existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                         { "Clone",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>>(),
                                                                                             ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>>(nullptr, ___internal_method, data, existing);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinEngine::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_OutputSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "get_OutputSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "get_BlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitParams(::System::Collections::IDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "InitParams", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CreateInitialState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "CreateInitialState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiComplete(int32_t type, ::ArrayW<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                                                         { "UbiComplete", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiInit(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "UbiInit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiFinal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "UbiFinal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CheckInitialised() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "CheckInitialised", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update(uint8_t inByte) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inByte);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                                           { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Output(uint64_t outputSequence, ::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t outputBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(),
                                              { "Output", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputSequence, outBytes, outOff, outputBytes);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* Org::BouncyCastle::Crypto::Digests::SkeinEngine::New_ctor(int32_t blockSizeBits, int32_t outputSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(blockSizeBits, outputSizeBits));
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* Org::BouncyCastle::Crypto::Digests::SkeinEngine::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(engine));
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr Org::BouncyCastle::Crypto::Digests::SkeinEngine::operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinEngine::i___Org__BouncyCastle__Utilities__IMemoable() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine::SkeinEngine() {}
