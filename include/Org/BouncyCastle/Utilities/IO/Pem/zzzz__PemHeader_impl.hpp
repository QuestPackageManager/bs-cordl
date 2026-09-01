#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\Pem\PemHeader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemHeader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)()>(&::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362f8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)()>(&::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362f8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)()>(&::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x362f8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)(::System::Object*)>(&::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x362f940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)(::StringW)>(&::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x362f92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Utilities::IO::Pem::PemHeader::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& Org::BouncyCastle::Utilities::IO::Pem::PemHeader::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void Org::BouncyCastle::Utilities::IO::Pem::PemHeader::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& Org::BouncyCastle::Utilities::IO::Pem::PemHeader::__cordl_internal_get_val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___val;
}
constexpr ::StringW const& Org::BouncyCastle::Utilities::IO::Pem::PemHeader::__cordl_internal_get_val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___val;
}
constexpr void Org::BouncyCastle::Utilities::IO::Pem::PemHeader::__cordl_internal_set_val(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___val = value;
}
inline void Org::BouncyCastle::Utilities::IO::Pem::PemHeader::_ctor(::StringW name, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, val);
}
inline ::StringW Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::IO::Pem::PemHeader::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader* Org::BouncyCastle::Utilities::IO::Pem::PemHeader::New_ctor(::StringW name, ::StringW val) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*>(name, val));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader::PemHeader() {}
