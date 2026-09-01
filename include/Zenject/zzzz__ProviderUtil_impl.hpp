#pragma once
// IWYU pragma private; include "Zenject\ProviderUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderUtil_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::ProviderUtil.GetTypeToInstantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::System::Type*)>(&::Zenject::ProviderUtil::GetTypeToInstantiate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e891dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ProviderUtil*>(), { "GetTypeToInstantiate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Type* Zenject::ProviderUtil::GetTypeToInstantiate(::System::Type* contractType, ::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderUtil*>(), { "GetTypeToInstantiate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, contractType, concreteType);
}
// Ctor Parameters []
constexpr ::Zenject::ProviderUtil::ProviderUtil() {}
