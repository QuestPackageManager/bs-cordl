#pragma once
// IWYU pragma private; include "System\ComponentModel\Design\IComponentChangeService.hpp"
#include "System/ComponentModel/Design/zzzz__IComponentChangeService_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IComponentChangeService.OnComponentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::IComponentChangeService::*)(
    ::System::Object*, ::System::ComponentModel::MemberDescriptor*, ::System::Object*, ::System::Object*)>(&::System::ComponentModel::Design::IComponentChangeService::OnComponentChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IComponentChangeService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IComponentChangeService*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IComponentChangeService.OnComponentChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::IComponentChangeService::*)(::System::Object*, ::System::ComponentModel::MemberDescriptor*)>(
    &::System::ComponentModel::Design::IComponentChangeService::OnComponentChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IComponentChangeService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IComponentChangeService*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::ComponentModel::Design::IComponentChangeService::OnComponentChanged(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member, ::System::Object* oldValue,
                                                                                        ::System::Object* newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IComponentChangeService*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, member, oldValue, newValue);
}
inline void System::ComponentModel::Design::IComponentChangeService::OnComponentChanging(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IComponentChangeService*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, member);
}
