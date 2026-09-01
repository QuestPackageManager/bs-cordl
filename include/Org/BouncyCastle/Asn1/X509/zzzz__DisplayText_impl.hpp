#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\DisplayText.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DisplayText_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DisplayText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::DisplayText::*)(int32_t, ::StringW)>(&::Org::BouncyCastle::Asn1::X509::DisplayText::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x365aa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DisplayText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::DisplayText::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::DisplayText::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x365abe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DisplayText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::DisplayText::*)(::Org::BouncyCastle::Asn1::IAsn1String*)>(
    &::Org::BouncyCastle::Asn1::X509::DisplayText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365ac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::IAsn1String*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DisplayText.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DisplayText* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::DisplayText::GetInstance)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x365ac8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DisplayText.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::DisplayText::*)()>(
    &::Org::BouncyCastle::Asn1::X509::DisplayText::ToAsn1Object)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x365adf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DisplayText.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::DisplayText::*)()>(&::Org::BouncyCastle::Asn1::X509::DisplayText::GetString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x365ae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::X509::DisplayText::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::X509::DisplayText::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void Org::BouncyCastle::Asn1::X509::DisplayText::__cordl_internal_set_contentType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
constexpr ::Org::BouncyCastle::Asn1::IAsn1String*& Org::BouncyCastle::Asn1::X509::DisplayText::__cordl_internal_get_contents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contents;
}
constexpr ::Org::BouncyCastle::Asn1::IAsn1String* const& Org::BouncyCastle::Asn1::X509::DisplayText::__cordl_internal_get_contents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contents;
}
constexpr void Org::BouncyCastle::Asn1::X509::DisplayText::__cordl_internal_set_contents(::Org::BouncyCastle::Asn1::IAsn1String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contents = value;
}
inline void Org::BouncyCastle::Asn1::X509::DisplayText::_ctor(int32_t type, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, text);
}
inline void Org::BouncyCastle::Asn1::X509::DisplayText::_ctor(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Org::BouncyCastle::Asn1::X509::DisplayText::_ctor(::Org::BouncyCastle::Asn1::IAsn1String* contents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::IAsn1String*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contents);
}
inline ::Org::BouncyCastle::Asn1::X509::DisplayText* Org::BouncyCastle::Asn1::X509::DisplayText::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DisplayText*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::DisplayText::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::DisplayText::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::DisplayText* Org::BouncyCastle::Asn1::X509::DisplayText::New_ctor(int32_t type, ::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::DisplayText*>(type, text));
}
inline ::Org::BouncyCastle::Asn1::X509::DisplayText* Org::BouncyCastle::Asn1::X509::DisplayText::New_ctor(::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::DisplayText*>(text));
}
inline ::Org::BouncyCastle::Asn1::X509::DisplayText* Org::BouncyCastle::Asn1::X509::DisplayText::New_ctor(::Org::BouncyCastle::Asn1::IAsn1String* contents) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::DisplayText*>(contents));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::X509::DisplayText::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::X509::DisplayText::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText::DisplayText() {}
