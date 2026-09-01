#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\WrapperProvider.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__WrapperProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::WrapperProvider.CreateWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::WrapperProvider::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Operators::WrapperProvider::CreateWrapper)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::WrapperProvider::CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, forWrapping, parameters);
}
