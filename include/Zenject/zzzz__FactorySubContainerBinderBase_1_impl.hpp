#pragma once
// IWYU pragma private; include "Zenject\FactorySubContainerBinderBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TContract>
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_get_subcontainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TContract>
constexpr ::Zenject::SubContainerCreatorBindInfo* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_get_subcontainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subcontainerBindInfo = value;
}
template <typename TContract> constexpr ::System::Type*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr ::System::Type* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::_ByInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>*>(),
                                                                                         { "<ByInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TContract> inline ::System::Object* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass23_0<TContract>::FactorySubContainerBinderBase_1___c__DisplayClass23_0() {}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
template <typename TContract> constexpr ::System::Type*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr ::System::Type* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::IProvider* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::_ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>*>(),
                                                                                         { "<ByNewGameObjectInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TContract> inline ::System::Object* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass25_0<TContract>::FactorySubContainerBinderBase_1___c__DisplayClass25_0() {}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object>& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object> const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefab = value;
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
template <typename TContract> constexpr ::System::Type*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr ::System::Type* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::_ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>*>(),
                                                                                         { "<ByNewPrefabInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TContract> inline ::System::Object* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass27_0<TContract>::FactorySubContainerBinderBase_1___c__DisplayClass27_0() {}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TContract> constexpr ::StringW& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr ::StringW const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
template <typename TContract> constexpr ::System::Type*& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr ::System::Type* const& Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::IProvider* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::_ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>*>(),
                                                                                         { "<ByNewPrefabResourceInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TContract> inline ::System::Object* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>* Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinderBase_1___c__DisplayClass29_0<TContract>::FactorySubContainerBinderBase_1___c__DisplayClass29_0() {}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindContainer_k__BackingField;
}
template <typename TContract> constexpr ::Zenject::DiContainer* const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindContainer_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindContainer_k__BackingField = value;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__FactoryBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FactoryBindInfo_k__BackingField;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo* const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__FactoryBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FactoryBindInfo_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__FactoryBindInfo_k__BackingField(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FactoryBindInfo_k__BackingField = value;
}
template <typename TContract> constexpr ::Zenject::BindInfo*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
template <typename TContract> constexpr ::Zenject::BindInfo* const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindInfo_k__BackingField = value;
}
template <typename TContract> constexpr ::System::Object*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__SubIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SubIdentifier_k__BackingField;
}
template <typename TContract> constexpr ::System::Object* const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__SubIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SubIdentifier_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__SubIdentifier_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SubIdentifier_k__BackingField = value;
}
template <typename TContract>
inline void Zenject::FactorySubContainerBinderBase_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                       ::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(),
          { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, subIdentifier);
}
template <typename TContract> inline ::Zenject::DiContainer* Zenject::FactorySubContainerBinderBase_1<TContract>::get_BindContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "get_BindContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_BindContainer(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "set_BindContainer", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::FactoryBindInfo* Zenject::FactorySubContainerBinderBase_1<TContract>::get_FactoryBindInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "get_FactoryBindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryBindInfo*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_FactoryBindInfo(::Zenject::FactoryBindInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "set_FactoryBindInfo", {}, { ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* Zenject::FactorySubContainerBinderBase_1<TContract>::get_ProviderFunc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "get_ProviderFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(),
                                                           { "set_ProviderFunc", {}, { ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::BindInfo* Zenject::FactorySubContainerBinderBase_1<TContract>::get_BindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "get_BindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_BindInfo(::Zenject::BindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::System::Object* Zenject::FactorySubContainerBinderBase_1<TContract>::get_SubIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "get_SubIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_SubIdentifier(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "set_SubIdentifier", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::System::Type* Zenject::FactorySubContainerBinderBase_1<TContract>::get_ContractType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "get_ContractType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TContract> template <typename TInstaller> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByInstaller() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "ByInstaller", { ::i2c::class_of<TInstaller>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByInstaller(::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "ByInstaller", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, installerType);
}
template <typename TContract>
template <typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewGameObjectInstaller() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "ByNewGameObjectInstaller", { ::i2c::class_of<TInstaller>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewGameObjectInstaller(::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(), { "ByNewGameObjectInstaller", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, installerType);
}
template <typename TContract>
template <typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabInstaller(::UnityEngine::Object* prefab) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(),
                                                           { "ByNewPrefabInstaller", { ::i2c::class_of<TInstaller>() }, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabInstaller(::UnityEngine::Object* prefab,
                                                                                                                                                       ::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(),
                                                           { "ByNewPrefabInstaller", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab, installerType);
}
template <typename TContract>
template <typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabResourceInstaller(::StringW resourcePath) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(),
                                                                                              { "ByNewPrefabResourceInstaller", { ::i2c::class_of<TInstaller>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabResourceInstaller(::StringW resourcePath,
                                                                                                                                                               ::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(),
                                                                                         { "ByNewPrefabResourceInstaller", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, installerType);
}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinderBase_1<TContract>* Zenject::FactorySubContainerBinderBase_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                            ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                                            ::System::Object* subIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, subIdentifier));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>::FactorySubContainerBinderBase_1() {}
