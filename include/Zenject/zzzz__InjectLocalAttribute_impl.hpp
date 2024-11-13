#pragma once
// IWYU pragma private; include "Zenject/InjectLocalAttribute.hpp"
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
#include "Zenject/zzzz__InjectLocalAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectLocalAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectLocalAttribute::*)()>(&::Zenject::InjectLocalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a8b7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectLocalAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Zenject::InjectLocalAttribute* Zenject::InjectLocalAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectLocalAttribute*>());
}
inline void Zenject::InjectLocalAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectLocalAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::InjectLocalAttribute::InjectLocalAttribute() {}
