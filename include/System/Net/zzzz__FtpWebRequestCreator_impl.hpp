#pragma once
// IWYU pragma private; include "System\Net\FtpWebRequestCreator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__FtpWebRequestCreator_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::FtpWebRequestCreator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpWebRequestCreator::*)()>(&::System::Net::FtpWebRequestCreator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x640af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpWebRequestCreator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequestCreator.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (::System::Net::FtpWebRequestCreator::*)(::System::Uri*)>(&::System::Net::FtpWebRequestCreator::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x640af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpWebRequestCreator*>(), { "Create", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::FtpWebRequestCreator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpWebRequestCreator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::FtpWebRequestCreator::Create(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpWebRequestCreator*>(), { "Create", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(this, ___internal_method, uri);
}
inline ::System::Net::FtpWebRequestCreator* System::Net::FtpWebRequestCreator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FtpWebRequestCreator*>());
}
/// @brief Convert operator to "::System::Net::IWebRequestCreate"
constexpr System::Net::FtpWebRequestCreator::operator ::System::Net::IWebRequestCreate*() noexcept {
  return static_cast<::System::Net::IWebRequestCreate*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebRequestCreate"
constexpr ::System::Net::IWebRequestCreate* System::Net::FtpWebRequestCreator::i___System__Net__IWebRequestCreate() noexcept {
  return static_cast<::System::Net::IWebRequestCreate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::FtpWebRequestCreator::FtpWebRequestCreator() {}
