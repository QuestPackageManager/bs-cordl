#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DerBoolean.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::DerBoolean::GetInstance)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x368deb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (*)(bool)>(&::Org::BouncyCastle::Asn1::DerBoolean::GetInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x368dfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "GetInstance", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::DerBoolean::GetInstance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x368e01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBoolean::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerBoolean::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x368e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBoolean::*)(bool)>(&::Org::BouncyCastle::Asn1::DerBoolean::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x368e1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.get_IsTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerBoolean::*)()>(&::Org::BouncyCastle::Asn1::DerBoolean::get_IsTrue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x368e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "get_IsTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerBoolean::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&::Org::BouncyCastle::Asn1::DerBoolean::Encode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x368e214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.Asn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerBoolean::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(&::Org::BouncyCastle::Asn1::DerBoolean::Asn1Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x368e29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerBoolean::*)()>(&::Org::BouncyCastle::Asn1::DerBoolean::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x368e340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::DerBoolean::*)()>(&::Org::BouncyCastle::Asn1::DerBoolean::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x368e370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerBoolean.FromOctetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerBoolean::FromOctetString)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x36847ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "FromOctetString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Asn1::DerBoolean::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr uint8_t const& Org::BouncyCastle::Asn1::DerBoolean::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Asn1::DerBoolean::__cordl_internal_set_value(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void Org::BouncyCastle::Asn1::DerBoolean::setStaticF_False(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerBoolean*, "False", ::Org::BouncyCastle::Asn1::DerBoolean*>(std::forward<::Org::BouncyCastle::Asn1::DerBoolean*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::getStaticF_False() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerBoolean*, "False", ::Org::BouncyCastle::Asn1::DerBoolean*>();
}
inline void Org::BouncyCastle::Asn1::DerBoolean::setStaticF_True(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerBoolean*, "True", ::Org::BouncyCastle::Asn1::DerBoolean*>(std::forward<::Org::BouncyCastle::Asn1::DerBoolean*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::getStaticF_True() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerBoolean*, "True", ::Org::BouncyCastle::Asn1::DerBoolean*>();
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::GetInstance(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "GetInstance", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*>(nullptr, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::DerBoolean::_ctor(::ArrayW<uint8_t> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void Org::BouncyCastle::Asn1::DerBoolean::_ctor(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Asn1::DerBoolean::get_IsTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "get_IsTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerBoolean::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline bool Org::BouncyCastle::Asn1::DerBoolean::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asn1Object);
}
inline int32_t Org::BouncyCastle::Asn1::DerBoolean::Asn1GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::DerBoolean::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::FromOctetString(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), { "FromOctetString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*>(nullptr, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::New_ctor(::ArrayW<uint8_t> val) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerBoolean*>(val));
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::DerBoolean::New_ctor(bool value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerBoolean*>(value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerBoolean::DerBoolean() {}
