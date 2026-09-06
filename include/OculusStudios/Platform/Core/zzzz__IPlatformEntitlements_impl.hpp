#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformEntitlements.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IProductDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Product_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformEntitlements.GetAllProductsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>* (
    ::OculusStudios::Platform::Core::IPlatformEntitlements::*)()>(&::OculusStudios::Platform::Core::IPlatformEntitlements::GetAllProductsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformEntitlements*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformEntitlements*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformEntitlements.RegisterNewProducts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformEntitlements::*)(
    ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*)>(&::OculusStudios::Platform::Core::IPlatformEntitlements::RegisterNewProducts)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformEntitlements*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformEntitlements*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>*
OculusStudios::Platform::Core::IPlatformEntitlements::GetAllProductsAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformEntitlements*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline void
OculusStudios::Platform::Core::IPlatformEntitlements::RegisterNewProducts(::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformEntitlements*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, productDefinitions);
}
