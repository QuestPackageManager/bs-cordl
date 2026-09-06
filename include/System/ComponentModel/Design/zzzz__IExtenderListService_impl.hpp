#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IExtenderListService.hpp"
#include "System/ComponentModel/Design/zzzz__IExtenderListService_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IExtenderListService.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (::System::ComponentModel::Design::IExtenderListService::*)()>(
    &::System::ComponentModel::Design::IExtenderListService::GetExtenderProviders)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IExtenderListService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IExtenderListService*>(), 0 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> System::ComponentModel::Design::IExtenderListService::GetExtenderProviders() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IExtenderListService*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(this, ___internal_method);
}
