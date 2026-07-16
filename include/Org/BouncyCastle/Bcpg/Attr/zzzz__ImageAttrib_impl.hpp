#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Attr/ImageAttrib.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format::ImageAttrib_Format(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format::ImageAttrib_Format() {}
constexpr ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format::Jpeg{ static_cast<uint8_t>(0x1u) };
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3691c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3691c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3691d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.ToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ToByteArray)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3691dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(),
                                                             { "ToByteArray", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3691f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3691f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.GetImageData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::GetImageData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3691f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), 9 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get_hdrLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get_hdrLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrLength;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_set_hdrLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdrLength = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_set__encoding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get_imageData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imageData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_get_imageData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imageData;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__cordl_internal_set_imageData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___imageData = value;
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::setStaticF_Zeroes(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Zeroes", ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::getStaticF_Zeroes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Zeroes", ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>();
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(bool forceLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format imageType, ::ArrayW<uint8_t> imageData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, imageType, imageData);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ToByteArray(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format imageType, ::ArrayW<uint8_t> imageData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(),
                                                           { "ToByteArray", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, imageType, imageData);
}
inline int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Encoding() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::GetImageData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::Attr::ImageAttrib::New_ctor(::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(data));
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::Attr::ImageAttrib::New_ctor(bool forceLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(forceLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::Attr::ImageAttrib::New_ctor(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format imageType, ::ArrayW<uint8_t> imageData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(imageType, imageData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ImageAttrib() {}
