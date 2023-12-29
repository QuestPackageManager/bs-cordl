#pragma once
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder1Extensions_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder1Extensions_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TParam1, typename TContract> constexpr ::System::Guid& Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::__get_factoryId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryId;
}
template <typename TParam1, typename TContract> constexpr ::System::Guid const& Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::__get_factoryId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryId;
}
template <typename TParam1, typename TContract> constexpr void Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::__set_factoryId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factoryId = value;
}
template <typename TParam1, typename TContract>
inline ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>*>());
}
template <typename TParam1, typename TContract> inline void Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract>
inline ::Zenject::IProvider* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::_FromIFactory_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>*>::get(), "<FromIFactory>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TContract>
inline ::System::Object* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TContract>
constexpr ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>::__FactoryFromBinder1Extensions____c__DisplayClass0_0_2() {}
template <typename TParam1, typename TContract>
inline void Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::setStaticF___9(::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* value) {
  ::cordl_internals::setStaticField<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get>(
      std::forward<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>(value));
}
template <typename TParam1, typename TContract>
inline ::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get>();
}
template <typename TParam1, typename TContract>
inline void Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::setStaticF___9__1_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get>(
      std::forward<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(value));
}
template <typename TParam1, typename TContract>
inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get>();
}
template <typename TParam1, typename TContract>
inline ::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>* Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>());
}
template <typename TParam1, typename TContract> inline void Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract>
inline void Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::_FromPoolableMemoryPool_b__1_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get(), "<FromPoolableMemoryPool>b__1_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TParam1, typename TContract>
inline ::System::Object* Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TContract> constexpr ::Zenject::__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>::__FactoryFromBinder1Extensions____c__1_2() {}
template <typename TParam1, typename TContract>
inline void Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::setStaticF___9(::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* value) {
  ::cordl_internals::setStaticField<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get>(
      std::forward<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>(value));
}
template <typename TParam1, typename TContract>
inline ::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get>();
}
template <typename TParam1, typename TContract>
inline void Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::setStaticF___9__3_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get>(
      std::forward<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(value));
}
template <typename TParam1, typename TContract>
inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get>();
}
template <typename TParam1, typename TContract>
inline ::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>* Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>());
}
template <typename TParam1, typename TContract> inline void Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract>
inline void Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::_FromMonoPoolableMemoryPool_b__3_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get(), "<FromMonoPoolableMemoryPool>b__3_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TParam1, typename TContract>
inline ::System::Object* Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TContract> constexpr ::Zenject::__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>::__FactoryFromBinder1Extensions____c__3_2() {}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline void
Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::setStaticF___9(::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* value) {
  ::cordl_internals::setStaticField<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get>(
      std::forward<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>(value));
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get>();
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline void
Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::setStaticF___9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get>(
      std::forward<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(value));
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get>();
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>* Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>());
}
template <typename TParam1, typename TContract, typename TMemoryPool> inline void Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline void Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::_FromPoolableMemoryPool_b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "<FromPoolableMemoryPool>b__5_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::System::Object* Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TContract, typename TMemoryPool>
constexpr ::Zenject::__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>::__FactoryFromBinder1Extensions____c__5_3() {}
template <typename TParam1, typename TContract, typename TMemoryPool>
constexpr ::System::Guid& Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::__get_poolId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolId;
}
template <typename TParam1, typename TContract, typename TMemoryPool>
constexpr ::System::Guid const& Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::__get_poolId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolId;
}
template <typename TParam1, typename TContract, typename TMemoryPool>
constexpr void Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::__set_poolId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poolId = value;
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*
Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>());
}
template <typename TParam1, typename TContract, typename TMemoryPool> inline void Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::IProvider* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::_FromPoolableMemoryPool_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>::get(),
      "<FromPoolableMemoryPool>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::System::Object* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TContract, typename TMemoryPool>
constexpr ::Zenject::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>::__FactoryFromBinder1Extensions____c__DisplayClass6_0_3() {}
template <typename TParam1, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder1Extensions::FromIFactory(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                    ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_2<TParam1, TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromIFactory",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_2<TParam1, TContract>*>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder, factoryBindGenerator);
}
template <typename TParam1, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromPoolableMemoryPool",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder);
}
template <typename TParam1, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                              ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromPoolableMemoryPool",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template <typename TParam1, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder1Extensions::FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromMonoPoolableMemoryPool",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder);
}
template <typename TParam1, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder1Extensions::FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                                  ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromMonoPoolableMemoryPool",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromPoolableMemoryPool",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder);
}
template <typename TParam1, typename TContract, typename TMemoryPool>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder,
                                                              ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder1Extensions*>::get(), "FromPoolableMemoryPool",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryFromBinder_2<TParam1, TContract>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
// Ctor Parameters []
constexpr ::Zenject::FactoryFromBinder1Extensions::FactoryFromBinder1Extensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
