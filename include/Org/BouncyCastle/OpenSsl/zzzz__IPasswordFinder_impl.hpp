#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/IPasswordFinder.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::IPasswordFinder.GetPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::Org::BouncyCastle::OpenSsl::IPasswordFinder::*)()>(&::Org::BouncyCastle::OpenSsl::IPasswordFinder::GetPassword)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(), { ::i2c::class_of<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(), 0 }));
    return ___internal_method;
  }
};
inline ::ArrayW<char16_t> Org::BouncyCastle::OpenSsl::IPasswordFinder::GetPassword() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
