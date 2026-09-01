#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DerBitString.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::DerBitString::GetInstance)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x334b374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::DerBitString::GetInstance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x334d16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBitString::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Asn1::DerBitString::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x334d434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBitString::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerBitString::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334d588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBitString::*)(int32_t)>(&::Org::BouncyCastle::Asn1::DerBitString::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x334d590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBitString::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::DerBitString::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x334d6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.GetOctets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::DerBitString::*)()>(&::Org::BouncyCastle::Asn1::DerBitString::GetOctets)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x334d6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::DerBitString::*)()>(&::Org::BouncyCastle::Asn1::DerBitString::GetBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x334d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.get_PadBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerBitString::*)()>(&::Org::BouncyCastle::Asn1::DerBitString::get_PadBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334d844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.get_IntValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerBitString::*)()>(&::Org::BouncyCastle::Asn1::DerBitString::get_IntValue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x334d84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBitString::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::DerBitString::Encode)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x334d954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerBitString::*)()>(&::Org::BouncyCastle::Asn1::DerBitString::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x334da68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.Asn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerBitString::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerBitString::Asn1Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x334dad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::DerBitString::*)()>(&::Org::BouncyCastle::Asn1::DerBitString::GetString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x334dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBitString.FromAsn1Octets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerBitString::FromAsn1Octets)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x334d2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { "FromAsn1Octets", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::DerBitString::__cordl_internal_get_mData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::DerBitString::__cordl_internal_get_mData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mData;
}
constexpr void Org::BouncyCastle::Asn1::DerBitString::__cordl_internal_set_mData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mData = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::DerBitString::__cordl_internal_get_mPadBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPadBits;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::DerBitString::__cordl_internal_get_mPadBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPadBits;
}
constexpr void Org::BouncyCastle::Asn1::DerBitString::__cordl_internal_set_mPadBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPadBits = value;
}
inline void Org::BouncyCastle::Asn1::DerBitString::setStaticF_table(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "table", ::Org::BouncyCastle::Asn1::DerBitString*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Org::BouncyCastle::Asn1::DerBitString::getStaticF_table() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "table", ::Org::BouncyCastle::Asn1::DerBitString*>();
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::DerBitString::_ctor(::ArrayW<uint8_t> data, int32_t padBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, padBits);
}
inline void Org::BouncyCastle::Asn1::DerBitString::_ctor(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Org::BouncyCastle::Asn1::DerBitString::_ctor(int32_t namedBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namedBits);
}
inline void Org::BouncyCastle::Asn1::DerBitString::_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::DerBitString::GetOctets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::DerBitString::GetBytes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::DerBitString::get_PadBits() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::DerBitString::get_IntValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerBitString::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline int32_t Org::BouncyCastle::Asn1::DerBitString::Asn1GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::DerBitString::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asn1Object);
}
inline ::StringW Org::BouncyCastle::Asn1::DerBitString::GetString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::FromAsn1Octets(::ArrayW<uint8_t> octets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBitString*>(), { "FromAsn1Octets", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(nullptr, ___internal_method, octets);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::New_ctor(::ArrayW<uint8_t> data, int32_t padBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerBitString*>(data, padBits));
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::New_ctor(::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerBitString*>(data));
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::New_ctor(int32_t namedBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerBitString*>(namedBits));
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::DerBitString::New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerBitString*>(obj));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerBitString::DerBitString() {}
