#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IExtensibleDataObject.hpp"
#include "System/Runtime/Serialization/zzzz__IExtensibleDataObject_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IExtensibleDataObject.get_ExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ExtensionDataObject* (::System::Runtime::Serialization::IExtensibleDataObject::*)()>(
    &::System::Runtime::Serialization::IExtensibleDataObject::get_ExtensionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IExtensibleDataObject*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IExtensibleDataObject*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IExtensibleDataObject.set_ExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::IExtensibleDataObject::*)(::System::Runtime::Serialization::ExtensionDataObject*)>(
    &::System::Runtime::Serialization::IExtensibleDataObject::set_ExtensionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IExtensibleDataObject*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IExtensibleDataObject*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::ExtensionDataObject* System::Runtime::Serialization::IExtensibleDataObject::get_ExtensionData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IExtensibleDataObject*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ExtensionDataObject*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::IExtensibleDataObject::set_ExtensionData(::System::Runtime::Serialization::ExtensionDataObject* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IExtensibleDataObject*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
