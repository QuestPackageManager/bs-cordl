#pragma once
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec73ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder.WithConcreteId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ArgConditionCopyNonLazyBinder* (::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(::System::Object*)>(
    &::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ec73f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>::get(), "WithConcreteId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* Zenject::ConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(bindInfo));
}
inline void Zenject::ConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId(::System::Object* id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>::get(), "WithConcreteId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::ConcreteIdArgConditionCopyNonLazyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
