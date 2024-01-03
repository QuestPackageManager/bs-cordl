#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderWithParams_1_impl.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_3_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_3_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__set___4__this(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__get_subcontainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__get_subcontainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subcontainerBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__set_installerMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>*
Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>*>());
}
template <typename TParam1, typename TParam2, typename TContract> inline void Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::_ByMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(), "<ByMethod>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>::__FactorySubContainerBinder_3____c__DisplayClass1_0() {}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__set___4__this(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__set_installerMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>*
Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>*>());
}
template <typename TParam1, typename TParam2, typename TContract> inline void Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::_ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>*>::get(), "<ByNewGameObjectMethod>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass2_0<TParam1, TParam2, TContract>::__FactorySubContainerBinder_3____c__DisplayClass2_0() {}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__set___4__this(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::UnityEngine::Object*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__set_prefab(::UnityEngine::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__set_installerMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>*
Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>*>());
}
template <typename TParam1, typename TParam2, typename TContract> inline void Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::_ByNewPrefabMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>*>::get(), "<ByNewPrefabMethod>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass3_0<TParam1, TParam2, TContract>::__FactorySubContainerBinder_3____c__DisplayClass3_0() {}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__set___4__this(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract> constexpr ::StringW& Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::StringW const& Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const&
Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__set_installerMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>*
Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>*>());
}
template <typename TParam1, typename TParam2, typename TContract> inline void Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::_ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>*>::get(), "<ByNewPrefabResourceMethod>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::__FactorySubContainerBinder_3____c__DisplayClass4_0<TParam1, TParam2, TContract>::__FactorySubContainerBinder_3____c__DisplayClass4_0() {}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*
Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                            ::System::Object* subIdentifier) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*>(bindContainer, bindInfo, factoryBindInfo, subIdentifier));
}
template <typename TParam1, typename TParam2, typename TContract>
inline void Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                     ::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, subIdentifier);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::ByMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*>::get(), "ByMethod", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerMethod);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::ByNewGameObjectMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*>::get(), "ByNewGameObjectMethod", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerMethod);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*>::get(), "ByNewPrefabMethod", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab, installerMethod);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*>::get(), "ByNewPrefabResourceMethod", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath, installerMethod);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract> constexpr ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>::FactorySubContainerBinder_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
