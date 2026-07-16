#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ServerNameList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerNameList_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerNameList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerNameList::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::ServerNameList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x346ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerNameList.get_ServerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Crypto::Tls::ServerNameList::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ServerNameList::get_ServerNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346cd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerNameList.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerNameList::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::ServerNameList::Encode)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x346cd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerNameList.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ServerNameList* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::ServerNameList::Parse)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x346d250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerNameList.CheckNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::ServerNameList::CheckNameType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x346d1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(),
                                                                                           { "CheckNameType", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::ServerNameList::__cordl_internal_get_mServerNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerNameList;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::ServerNameList::__cordl_internal_get_mServerNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerNameList;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerNameList::__cordl_internal_set_mServerNameList(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mServerNameList = value;
}
inline void Org::BouncyCastle::Crypto::Tls::ServerNameList::_ctor(::System::Collections::IList* serverNameList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverNameList);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::ServerNameList::get_ServerNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::ServerNameList::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* Org::BouncyCastle::Crypto::Tls::ServerNameList::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::ServerNameList::CheckNameType(::ArrayW<uint8_t> nameTypesSeen, uint8_t nameType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(),
                                                                                         { "CheckNameType", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, nameTypesSeen, nameType);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* Org::BouncyCastle::Crypto::Tls::ServerNameList::New_ctor(::System::Collections::IList* serverNameList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(serverNameList));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ServerNameList::ServerNameList() {}
