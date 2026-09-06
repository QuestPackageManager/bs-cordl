#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/ITypeDescriptorFilterService.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeDescriptorFilterService.FilterAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Design::ITypeDescriptorFilterService::*)(
    ::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeDescriptorFilterService.FilterEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Design::ITypeDescriptorFilterService::*)(
    ::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeDescriptorFilterService.FilterProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Design::ITypeDescriptorFilterService::*)(
    ::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), 2 }));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* attributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component, attributes);
}
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* events) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component, events);
}
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* properties) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component, properties);
}
