#pragma once
// IWYU pragma private; include "System/ComponentModel/ITypeDescriptorContext.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::ITypeDescriptorContext::*)()>(
    &::System::ComponentModel::ITypeDescriptorContext::get_Container)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), { ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::IContainer* System::ComponentModel::ITypeDescriptorContext::get_Container() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr System::ComponentModel::ITypeDescriptorContext::operator ::System::IServiceProvider*() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::ITypeDescriptorContext::i___System__IServiceProvider() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
