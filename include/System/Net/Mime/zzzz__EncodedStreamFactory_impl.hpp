#pragma once
// IWYU pragma private; include "System/Net/Mime/EncodedStreamFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mime/zzzz__EncodedStreamFactory_def.hpp"
//  Writing Method size for method: ::System::Net::Mime::EncodedStreamFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mime::EncodedStreamFactory::*)()>(&::System::Net::Mime::EncodedStreamFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6368994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::EncodedStreamFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::Mime::EncodedStreamFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::EncodedStreamFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Mime::EncodedStreamFactory* System::Net::Mime::EncodedStreamFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Mime::EncodedStreamFactory*>());
}
// Ctor Parameters []
constexpr ::System::Net::Mime::EncodedStreamFactory::EncodedStreamFactory() {}
