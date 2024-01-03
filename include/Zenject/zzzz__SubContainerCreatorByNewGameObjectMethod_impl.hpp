#pragma once
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectMethod_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectMethod::*)(
    ::Zenject::DiContainer*, ::Zenject::GameObjectCreationParameters*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerCreatorByNewGameObjectMethod::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f0befc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectMethod.AddInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectMethod::*)(
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectContext*)>(&::Zenject::SubContainerCreatorByNewGameObjectMethod::AddInstallers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f0bf38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerCreatorByNewGameObjectMethod::__get__installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::SubContainerCreatorByNewGameObjectMethod::__get__installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerMethod;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectMethod::__set__installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerCreatorByNewGameObjectMethod* Zenject::SubContainerCreatorByNewGameObjectMethod::New_ctor(::Zenject::DiContainer* container,
                                                                                                                        ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                                        ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(container, gameObjectBindInfo, installerMethod));
}
inline void Zenject::SubContainerCreatorByNewGameObjectMethod::_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                     ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, gameObjectBindInfo, installerMethod);
}
inline void Zenject::SubContainerCreatorByNewGameObjectMethod::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args, context);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewGameObjectMethod::SubContainerCreatorByNewGameObjectMethod() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
