#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X500\DirectoryString.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::DirectoryString.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X500::DirectoryString::GetInstance)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3557248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::DirectoryString.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X500::DirectoryString::GetInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35574e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::DirectoryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X500::DirectoryString::*)(::Org::BouncyCastle::Asn1::DerStringBase*)>(
    &::Org::BouncyCastle::Asn1::X500::DirectoryString::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35574dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerStringBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::DirectoryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X500::DirectoryString::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X500::DirectoryString::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3557558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::DirectoryString.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X500::DirectoryString::*)()>(&::Org::BouncyCastle::Asn1::X500::DirectoryString::GetString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35575c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::DirectoryString.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X500::DirectoryString::*)()>(
    &::Org::BouncyCastle::Asn1::X500::DirectoryString::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35575e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerStringBase*& Org::BouncyCastle::Asn1::X500::DirectoryString::__cordl_internal_get_str() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___str;
}
constexpr ::Org::BouncyCastle::Asn1::DerStringBase* const& Org::BouncyCastle::Asn1::X500::DirectoryString::__cordl_internal_get_str() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___str;
}
constexpr void Org::BouncyCastle::Asn1::X500::DirectoryString::__cordl_internal_set_str(::Org::BouncyCastle::Asn1::DerStringBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___str = value;
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X500::DirectoryString::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X500::DirectoryString::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::X500::DirectoryString::_ctor(::Org::BouncyCastle::Asn1::DerStringBase* str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerStringBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void Org::BouncyCastle::Asn1::X500::DirectoryString::_ctor(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline ::StringW Org::BouncyCastle::Asn1::X500::DirectoryString::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X500::DirectoryString::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X500::DirectoryString::New_ctor(::Org::BouncyCastle::Asn1::DerStringBase* str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(str));
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X500::DirectoryString::New_ctor(::StringW str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(str));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::X500::DirectoryString::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::X500::DirectoryString::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1String"
constexpr Org::BouncyCastle::Asn1::X500::DirectoryString::operator ::Org::BouncyCastle::Asn1::IAsn1String*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1String*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1String"
constexpr ::Org::BouncyCastle::Asn1::IAsn1String* Org::BouncyCastle::Asn1::X500::DirectoryString::i___Org__BouncyCastle__Asn1__IAsn1String() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1String*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString::DirectoryString() {}
