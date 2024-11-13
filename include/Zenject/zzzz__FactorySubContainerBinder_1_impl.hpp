#pragma once
// IWYU pragma private; include "Zenject/FactorySubContainerBinder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_impl.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_1_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_get_subcontainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_get_subcontainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___subcontainerBindInfo, value);
}
template <typename TContract> constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___installerMethod, value);
}
template <typename TContract> inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>* Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::_ByMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>*>::get(), "<ByMethod>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>::__FactorySubContainerBinder_1____c__DisplayClass1_0() {}
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___gameObjectInfo, value);
}
template <typename TContract> constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___installerMethod, value);
}
template <typename TContract> inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>* Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::_ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>*>::get(), "<ByNewGameObjectMethod>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>::__FactorySubContainerBinder_1____c__DisplayClass2_0() {}
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object>& Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object> const& Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___prefab, value);
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___gameObjectInfo, value);
}
template <typename TContract> constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___installerMethod, value);
}
template <typename TContract> inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>* Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::_ByNewPrefabMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>*>::get(), "<ByNewPrefabMethod>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>::__FactorySubContainerBinder_1____c__DisplayClass3_0() {}
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr ::StringW& Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr ::StringW const& Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___resourcePath, value);
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___gameObjectInfo, value);
}
template <typename TContract> constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___installerMethod, value);
}
template <typename TContract> inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>* Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::_ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>*>::get(), "<ByNewPrefabResourceMethod>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>::__FactorySubContainerBinder_1____c__DisplayClass4_0() {}
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object>& Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object> const& Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___prefab, value);
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___gameObjectInfo, value);
}
template <typename TContract> inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>* Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::_ByNewContextPrefab_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>*>::get(), "<ByNewContextPrefab>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>::__FactorySubContainerBinder_1____c__DisplayClass6_0() {}
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr ::StringW& Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr ::StringW const& Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___resourcePath, value);
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___gameObjectInfo, value);
}
template <typename TContract> inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>* Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::_ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>*>::get(), "<ByNewContextPrefabResource>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>::__FactorySubContainerBinder_1____c__DisplayClass8_0() {}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactorySubContainerBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                    ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactorySubContainerBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, subIdentifier));
}
template <typename TContract>
inline void Zenject::FactorySubContainerBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                   ::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, subIdentifier);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinder_1<TContract>::ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerMethod);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_1<TContract>::ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewGameObjectMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerMethod);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_1<TContract>::ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewPrefabMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab, installerMethod);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FactorySubContainerBinder_1<TContract>::ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewPrefabResourceMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath, installerMethod);
}
template <typename TContract> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinder_1<TContract>::ByNewPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinder_1<TContract>::ByNewContextPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewContextPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinder_1<TContract>::ByNewPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewPrefabResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinder_1<TContract>::ByNewContextPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinder_1<TContract>*>::get(), "ByNewContextPrefabResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinder_1<TContract>::FactorySubContainerBinder_1() {}
