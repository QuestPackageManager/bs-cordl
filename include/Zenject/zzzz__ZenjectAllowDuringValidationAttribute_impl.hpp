#pragma once
// IWYU pragma private; include "Zenject/ZenjectAllowDuringValidationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__ZenjectAllowDuringValidationAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectAllowDuringValidationAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectAllowDuringValidationAttribute::*)()>(
    &::Zenject::ZenjectAllowDuringValidationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af39bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectAllowDuringValidationAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::ZenjectAllowDuringValidationAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectAllowDuringValidationAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ZenjectAllowDuringValidationAttribute* Zenject::ZenjectAllowDuringValidationAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ZenjectAllowDuringValidationAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectAllowDuringValidationAttribute::ZenjectAllowDuringValidationAttribute() {}
