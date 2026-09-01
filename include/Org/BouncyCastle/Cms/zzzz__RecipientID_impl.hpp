#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\RecipientID.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientID.get_KeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::RecipientID::*)()>(&::Org::BouncyCastle::Cms::RecipientID::get_KeyIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36d32d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { "get_KeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientID.set_KeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::RecipientID::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::RecipientID::set_KeyIdentifier)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36cd7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { "set_KeyIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientID.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::RecipientID::*)()>(&::Org::BouncyCastle::Cms::RecipientID::GetHashCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36d3330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::RecipientID::*)(::System::Object*)>(&::Org::BouncyCastle::Cms::RecipientID::Equals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x36d33e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::RecipientID::*)()>(&::Org::BouncyCastle::Cms::RecipientID::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36cd1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::RecipientID::__cordl_internal_get_keyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyIdentifier;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::RecipientID::__cordl_internal_get_keyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyIdentifier;
}
constexpr void Org::BouncyCastle::Cms::RecipientID::__cordl_internal_set_keyIdentifier(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyIdentifier = value;
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::RecipientID::get_KeyIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { "get_KeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::RecipientID::set_KeyIdentifier(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { "set_KeyIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Cms::RecipientID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::RecipientID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::Cms::RecipientID::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientID*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::RecipientID* Org::BouncyCastle::Cms::RecipientID::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::RecipientID*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::RecipientID::RecipientID() {}
