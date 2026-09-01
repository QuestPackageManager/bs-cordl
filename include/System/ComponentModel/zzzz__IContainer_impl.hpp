#pragma once
// IWYU pragma private; include "System\ComponentModel\IContainer.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IContainer.get_Components
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ComponentCollection* (::System::ComponentModel::IContainer::*)()>(
    &::System::ComponentModel::IContainer::get_Components)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::IContainer*>(), { ::i2c::class_of<::System::ComponentModel::IContainer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IContainer.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IContainer::*)(::System::ComponentModel::IComponent*)>(&::System::ComponentModel::IContainer::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::IContainer*>(), { ::i2c::class_of<::System::ComponentModel::IContainer*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::ComponentCollection* System::ComponentModel::IContainer::get_Components() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::IContainer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ComponentCollection*>(this, ___internal_method);
}
inline void System::ComponentModel::IContainer::Remove(::System::ComponentModel::IComponent* component) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::IContainer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::ComponentModel::IContainer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::IContainer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
