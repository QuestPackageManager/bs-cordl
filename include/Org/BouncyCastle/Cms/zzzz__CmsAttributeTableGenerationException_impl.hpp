#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAttributeTableGenerationException.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsException_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::*)()>(
    &::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a2604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a2608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a260c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::_ctor(::StringW name, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, e);
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException* Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>());
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException* Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(name));
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException* Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::New_ctor(::StringW name, ::System::Exception* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException*>(name, e));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerationException::CmsAttributeTableGenerationException() {}
