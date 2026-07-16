#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Apache/Bzip2/BZip2Constants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__BZip2Constants_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::BZip2Constants._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::BZip2Constants::*)()>(&::Org::BouncyCastle::Apache::Bzip2::BZip2Constants::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36555bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::BZip2Constants*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Apache::Bzip2::BZip2Constants::setStaticF_rNums(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "rNums", ::Org::BouncyCastle::Apache::Bzip2::BZip2Constants*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Apache::Bzip2::BZip2Constants::getStaticF_rNums() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "rNums", ::Org::BouncyCastle::Apache::Bzip2::BZip2Constants*>();
}
inline void Org::BouncyCastle::Apache::Bzip2::BZip2Constants::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::BZip2Constants*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Apache::Bzip2::BZip2Constants* Org::BouncyCastle::Apache::Bzip2::BZip2Constants::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Apache::Bzip2::BZip2Constants*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Apache::Bzip2::BZip2Constants::BZip2Constants() {}
