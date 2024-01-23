#pragma once
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
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_get_subcontainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_get_subcontainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subcontainerBindInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subcontainerBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::System::Type*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::_ByInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>*>::get(), "<ByInstaller>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>::__FactorySubContainerBinderBase_1____c__DisplayClass23_0() {}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::System::Type*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::_ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>*>::get(), "<ByNewGameObjectInstaller>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>::__FactorySubContainerBinderBase_1____c__DisplayClass25_0() {}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object>& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr ::UnityW<::UnityEngine::Object> const& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::System::Type*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::_ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>*>::get(), "<ByNewPrefabInstaller>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>::__FactorySubContainerBinderBase_1____c__DisplayClass27_0() {}
template <typename TContract>
constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::StringW& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr ::StringW const& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const&
Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
template <typename TContract>
constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::System::Type*& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
template <typename TContract> constexpr void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::IProvider* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::_ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>*>::get(), "<ByNewPrefabResourceInstaller>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract>
inline ::System::Object* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>::__FactorySubContainerBinderBase_1____c__DisplayClass29_0() {}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindContainer_k__BackingField;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindContainer_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BindContainer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__FactoryBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FactoryBindInfo_k__BackingField;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__FactoryBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FactoryBindInfo_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__FactoryBindInfo_k__BackingField(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FactoryBindInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::BindInfo*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__BindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BindInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::System::Object*& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__SubIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SubIdentifier_k__BackingField;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_get__SubIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SubIdentifier_k__BackingField;
}
template <typename TContract> constexpr void Zenject::FactorySubContainerBinderBase_1<TContract>::__cordl_internal_set__SubIdentifier_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SubIdentifier_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::FactorySubContainerBinderBase_1<TContract>* Zenject::FactorySubContainerBinderBase_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                            ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                                            ::System::Object* subIdentifier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactorySubContainerBinderBase_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, subIdentifier));
}
template <typename TContract>
inline void Zenject::FactorySubContainerBinderBase_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                       ::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, subIdentifier);
}
template <typename TContract> inline ::Zenject::DiContainer* Zenject::FactorySubContainerBinderBase_1<TContract>::get_BindContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "get_BindContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_BindContainer(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "set_BindContainer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::FactoryBindInfo* Zenject::FactorySubContainerBinderBase_1<TContract>::get_FactoryBindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "get_FactoryBindInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryBindInfo*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_FactoryBindInfo(::Zenject::FactoryBindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "set_FactoryBindInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* Zenject::FactorySubContainerBinderBase_1<TContract>::get_ProviderFunc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "get_ProviderFunc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "set_ProviderFunc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::BindInfo* Zenject::FactorySubContainerBinderBase_1<TContract>::get_BindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "get_BindInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_BindInfo(::Zenject::BindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "set_BindInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::System::Object* Zenject::FactorySubContainerBinderBase_1<TContract>::get_SubIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "get_SubIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::FactorySubContainerBinderBase_1<TContract>::set_SubIdentifier(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "set_SubIdentifier",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::System::Type* Zenject::FactorySubContainerBinderBase_1<TContract>::get_ContractType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "get_ContractType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TContract> template <typename TInstaller> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByInstaller() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByInstaller",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByInstaller(::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByInstaller",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerType);
}
template <typename TContract>
template <typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewGameObjectInstaller() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByNewGameObjectInstaller",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewGameObjectInstaller(::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByNewGameObjectInstaller",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerType);
}
template <typename TContract>
template <typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabInstaller(::UnityEngine::Object* prefab) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByNewPrefabInstaller",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabInstaller(::UnityEngine::Object* prefab,
                                                                                                                                                       ::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(),
                                                                             "ByNewPrefabInstaller", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab, installerType);
}
template <typename TContract>
template <typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabResourceInstaller(::StringW resourcePath) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByNewPrefabResourceInstaller",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath);
}
template <typename TContract>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FactorySubContainerBinderBase_1<TContract>::ByNewPrefabResourceInstaller(::StringW resourcePath,
                                                                                                                                                               ::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactorySubContainerBinderBase_1<TContract>*>::get(), "ByNewPrefabResourceInstaller", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath, installerType);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>::FactorySubContainerBinderBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
