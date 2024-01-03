#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabMethod_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabMethod_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2>
constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*& Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2>
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*> const&
Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2>
constexpr void Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__set___4__this(::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2>
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
template <typename TParam1, typename TParam2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const&
Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
template <typename TParam1, typename TParam2>
constexpr void Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2>
inline ::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>*
Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>*>());
}
template <typename TParam1, typename TParam2> inline void Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2>
inline void Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::_AddInstallers_b__0(::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>*>::get(), "<AddInstallers>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subContainer);
}
template <typename TParam1, typename TParam2>
inline ::System::Object* Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2> inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2>
constexpr ::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0() {}
template <typename TParam1, typename TParam2>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::__get__installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerMethod;
}
template <typename TParam1, typename TParam2>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const&
Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::__get__installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerMethod;
}
template <typename TParam1, typename TParam2>
constexpr void Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::__set__installerMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2>
inline ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*
Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                            ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                            ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*>(container, prefabProvider, gameObjectBindInfo, installerMethod));
}
template <typename TParam1, typename TParam2>
inline void Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                                     ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                     ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, prefabProvider, gameObjectBindInfo, installerMethod);
}
template <typename TParam1, typename TParam2>
inline void Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                             ::Zenject::GameObjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args, context);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2> constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::SubContainerCreatorByNewPrefabMethod_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
