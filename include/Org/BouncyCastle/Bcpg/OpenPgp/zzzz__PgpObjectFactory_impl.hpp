#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpObjectFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObjectFactory_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3584254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3584274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory.NextPgpObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::NextPgpObject)> {
  constexpr static std::size_t size = 0xaac;
  constexpr static std::size_t addrs = 0x35842f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "NextPgpObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory.NextObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::NextObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3584e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "NextObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory.AllPgpObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::AllPgpObjects)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3584e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "AllPgpObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory.FilterPgpObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::*)(::System::Type*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::FilterPgpObjects)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3584f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "FilterPgpObjects", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::__cordl_internal_get_bcpgIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgIn;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::__cordl_internal_get_bcpgIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgIn;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::__cordl_internal_set_bcpgIn(::Org::BouncyCastle::Bcpg::BcpgInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bcpgIn = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::_ctor(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject* Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::NextPgpObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "NextPgpObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::NextObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "NextObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::AllPgpObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "AllPgpObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::FilterPgpObjects(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(), { "FilterPgpObjects", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory* Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(inputStream));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory* Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::New_ctor(::ArrayW<uint8_t> bytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*>(bytes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory::PgpObjectFactory() {}
