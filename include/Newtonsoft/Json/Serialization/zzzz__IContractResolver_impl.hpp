#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\IContractResolver.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IContractResolver.ResolveContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::IContractResolver::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::IContractResolver::ResolveContract)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IContractResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IContractResolver*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::IContractResolver::ResolveContract(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IContractResolver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*>(this, ___internal_method, type);
}
