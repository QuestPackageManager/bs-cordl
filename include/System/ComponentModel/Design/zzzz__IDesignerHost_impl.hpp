#pragma once
// IWYU pragma private; include "System\ComponentModel\Design\IDesignerHost.hpp"
#include "System/ComponentModel/Design/zzzz__IDesignerHost_def.hpp"
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IDesignerHost.get_RootComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::Design::IDesignerHost::*)()>(
    &::System::ComponentModel::Design::IDesignerHost::get_RootComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IDesignerHost*>(), { ::i2c::class_of<::System::ComponentModel::Design::IDesignerHost*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IDesignerHost.GetDesigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::Design::IDesigner* (::System::ComponentModel::Design::IDesignerHost::*)(::System::ComponentModel::IComponent*)>(
    &::System::ComponentModel::Design::IDesignerHost::GetDesigner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IDesignerHost*>(), { ::i2c::class_of<::System::ComponentModel::Design::IDesignerHost*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::IComponent* System::ComponentModel::Design::IDesignerHost::get_RootComponent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IDesignerHost*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::IDesigner* System::ComponentModel::Design::IDesignerHost::GetDesigner(::System::ComponentModel::IComponent* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IDesignerHost*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::Design::IDesigner*>(this, ___internal_method, component);
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr System::ComponentModel::Design::IDesignerHost::operator ::System::IServiceProvider*() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::Design::IDesignerHost::i___System__IServiceProvider() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
