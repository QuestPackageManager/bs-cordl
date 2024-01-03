#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__NullBindingFinalizer_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
//  Writing Method size for method: ::Zenject::NullBindingFinalizer.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::NullBindingFinalizer::*)()>(
    &::Zenject::NullBindingFinalizer::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee1f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NullBindingFinalizer*>::get(),
                                                                               "get_BindingInheritanceMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NullBindingFinalizer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NullBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::NullBindingFinalizer::FinalizeBinding)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ee1f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NullBindingFinalizer*>::get(), "FinalizeBinding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NullBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NullBindingFinalizer::*)()>(&::Zenject::NullBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee1f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NullBindingFinalizer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IBindingFinalizer"
constexpr Zenject::NullBindingFinalizer::operator ::Zenject::IBindingFinalizer*() noexcept {
  return static_cast<::Zenject::IBindingFinalizer*>(static_cast<void*>(this));
}
inline ::Zenject::BindingInheritanceMethods Zenject::NullBindingFinalizer::get_BindingInheritanceMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NullBindingFinalizer*>::get(),
                                                                             "get_BindingInheritanceMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods, false>(this, ___internal_method);
}
inline void Zenject::NullBindingFinalizer::FinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NullBindingFinalizer*>::get(), "FinalizeBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::Zenject::NullBindingFinalizer* Zenject::NullBindingFinalizer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::NullBindingFinalizer*>());
}
inline void Zenject::NullBindingFinalizer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NullBindingFinalizer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::NullBindingFinalizer::NullBindingFinalizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
