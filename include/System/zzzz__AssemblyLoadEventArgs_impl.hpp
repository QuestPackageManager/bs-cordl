#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__AssemblyLoadEventArgs_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::AssemblyLoadEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AssemblyLoadEventArgs::*)(::System::Reflection::Assembly*)>(
    &::System::AssemblyLoadEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2521160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AssemblyLoadEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::AssemblyLoadEventArgs::__cordl_internal_get__LoadedAssembly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoadedAssembly_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& System::AssemblyLoadEventArgs::__cordl_internal_get__LoadedAssembly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoadedAssembly_k__BackingField;
}
constexpr void System::AssemblyLoadEventArgs::__cordl_internal_set__LoadedAssembly_k__BackingField(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LoadedAssembly_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::AssemblyLoadEventArgs* System::AssemblyLoadEventArgs::New_ctor(::System::Reflection::Assembly* loadedAssembly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::AssemblyLoadEventArgs*>(loadedAssembly));
}
inline void System::AssemblyLoadEventArgs::_ctor(::System::Reflection::Assembly* loadedAssembly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AssemblyLoadEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedAssembly);
}
// Ctor Parameters []
constexpr ::System::AssemblyLoadEventArgs::AssemblyLoadEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
