#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\Store\IX509Selector.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::IX509Selector.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::IX509Selector::*)(::System::Object*)>(&::Org::BouncyCastle::X509::Store::IX509Selector::Match)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::IX509Selector*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::Store::IX509Selector*>(), 0 }));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::X509::Store::IX509Selector::Match(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::IX509Selector*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::IX509Selector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::Store::IX509Selector::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
