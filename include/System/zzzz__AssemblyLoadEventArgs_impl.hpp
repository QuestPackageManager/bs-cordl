#pragma once
// IWYU pragma private; include "System/AssemblyLoadEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__AssemblyLoadEventArgs_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::AssemblyLoadEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AssemblyLoadEventArgs::*)(::System::Reflection::Assembly*)>(&::System::AssemblyLoadEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bacb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AssemblyLoadEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::AssemblyLoadEventArgs::__cordl_internal_get__LoadedAssembly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoadedAssembly_k__BackingField;
}
constexpr ::System::Reflection::Assembly* const& System::AssemblyLoadEventArgs::__cordl_internal_get__LoadedAssembly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoadedAssembly_k__BackingField;
}
constexpr void System::AssemblyLoadEventArgs::__cordl_internal_set__LoadedAssembly_k__BackingField(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LoadedAssembly_k__BackingField = value;
}
inline void System::AssemblyLoadEventArgs::_ctor(::System::Reflection::Assembly* loadedAssembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AssemblyLoadEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadedAssembly);
}
inline ::System::AssemblyLoadEventArgs* System::AssemblyLoadEventArgs::New_ctor(::System::Reflection::Assembly* loadedAssembly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AssemblyLoadEventArgs*>(loadedAssembly));
}
// Ctor Parameters []
constexpr ::System::AssemblyLoadEventArgs::AssemblyLoadEventArgs() {}
