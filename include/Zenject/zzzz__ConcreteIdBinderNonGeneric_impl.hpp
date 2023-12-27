#pragma once
#include "Zenject/zzzz__ConcreteBinderNonGeneric_impl.hpp"
#include "Zenject/zzzz__ConcreteIdBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
//  Writing Method size for method: ::Zenject::ConcreteIdBinderNonGeneric._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::ConcreteIdBinderNonGeneric::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(&::Zenject::ConcreteIdBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ec739c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdBinderNonGeneric*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteIdBinderNonGeneric.WithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConcreteBinderNonGeneric* (::Zenject::ConcreteIdBinderNonGeneric::*)(::System::Object*)>(
    &::Zenject::ConcreteIdBinderNonGeneric::WithId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ec73d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdBinderNonGeneric*>::get(), "WithId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::ConcreteIdBinderNonGeneric::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                            ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ConcreteIdBinderNonGeneric*>(bindContainer, bindInfo, bindStatement));
}
inline void Zenject::ConcreteIdBinderNonGeneric::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdBinderNonGeneric*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::ConcreteIdBinderNonGeneric::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdBinderNonGeneric*>::get(), "WithId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderNonGeneric*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
constexpr ::Zenject::ConcreteIdBinderNonGeneric::ConcreteIdBinderNonGeneric() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
