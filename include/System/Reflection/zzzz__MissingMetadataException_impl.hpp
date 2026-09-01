#pragma once
// IWYU pragma private; include "System\Reflection\MissingMetadataException.hpp"
#include "System/zzzz__TypeAccessException_impl.hpp"
#include "System/Reflection/zzzz__MissingMetadataException_def.hpp"
//  Writing Method size for method: ::System::Reflection::MissingMetadataException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MissingMetadataException::*)()>(&::System::Reflection::MissingMetadataException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MissingMetadataException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Reflection::MissingMetadataException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MissingMetadataException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MissingMetadataException* System::Reflection::MissingMetadataException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::MissingMetadataException*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::MissingMetadataException::MissingMetadataException() {}
