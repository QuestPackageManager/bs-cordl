#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\Store\IX509Store.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::IX509Store.GetMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::Store::IX509Store::*)(::Org::BouncyCastle::X509::Store::IX509Selector*)>(
    &::Org::BouncyCastle::X509::Store::IX509Store::GetMatches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::IX509Store::GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, selector);
}
