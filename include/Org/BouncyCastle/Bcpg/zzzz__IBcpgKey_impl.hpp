#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\IBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::IBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::IBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::IBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::IBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::IBcpgKey*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Bcpg::IBcpgKey::get_Format() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::IBcpgKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
