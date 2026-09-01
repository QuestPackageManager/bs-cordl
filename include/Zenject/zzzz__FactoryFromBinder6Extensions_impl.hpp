#pragma once
// IWYU pragma private; include "Zenject\FactoryFromBinder6Extensions.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder6Extensions_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder6Extensions_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_7_def.hpp"
#include "Zenject/zzzz__IFactory_7_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::setStaticF___9(
    ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, "<>9",
                                    ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(
      std::forward<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, "<>9",
                                           ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::setStaticF___9__1_0(
    ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__1_0",
                                    ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(
      std::forward<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*
Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__1_0",
                                           ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_FromPoolableMemoryPool_b__1_0(
    ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "<FromPoolableMemoryPool>b__1_0", {}, { ::i2c::type_of<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::System::Object* Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::Zenject::FactoryFromBinder6Extensions___c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FactoryFromBinder6Extensions___c__1_7() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::setStaticF___9(
    ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, "<>9",
                                    ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(
      std::forward<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, "<>9",
                                           ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::setStaticF___9__3_0(
    ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__3_0",
                                    ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(
      std::forward<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*
Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__3_0",
                                           ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_FromMonoPoolableMemoryPool_b__3_0(
    ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "<FromMonoPoolableMemoryPool>b__3_0", {}, { ::i2c::type_of<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::System::Object* Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::Zenject::FactoryFromBinder6Extensions___c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FactoryFromBinder6Extensions___c__3_7() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::setStaticF___9(
    ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*, "<>9",
                                    ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(
      std::forward<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*
Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*, "<>9",
                                           ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::setStaticF___9__5_0(
    ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__5_0",
                                    ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(
      std::forward<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*
Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*, "<>9__5_0",
                                           ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::_FromPoolableMemoryPool_b__5_0(
    ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                              { "<FromPoolableMemoryPool>b__5_0", {}, { ::i2c::type_of<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::System::Object* Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                              { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                              { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*
Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr ::Zenject::FactoryFromBinder6Extensions___c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::FactoryFromBinder6Extensions___c__5_8() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::System::Guid& Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__cordl_internal_get_factoryId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::System::Guid const& Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__cordl_internal_get_factoryId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr void Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__cordl_internal_set_factoryId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factoryId = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::IProvider*
Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_FromIFactory_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                              { "<FromIFactory>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::System::Object* Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                              { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                              { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::Zenject::FactoryFromBinder6Extensions___c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FactoryFromBinder6Extensions___c__DisplayClass0_0_7() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr ::System::Guid& Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__cordl_internal_get_poolId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr ::System::Guid const&
Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__cordl_internal_get_poolId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr void
Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__cordl_internal_set_poolId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poolId = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                       { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::IProvider* Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::_FromPoolableMemoryPool_b__0(
    ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                       { "<FromPoolableMemoryPool>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::System::Object*
Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                       { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::InjectTypeInfo*
Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(),
                                       { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*
Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr ::Zenject::FactoryFromBinder6Extensions___c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract,
                                                                         TMemoryPool>::FactoryFromBinder6Extensions___c__DisplayClass6_0_8() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder6Extensions::FromIFactory(
    ::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder,
    ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                       { "FromIFactory",
                         { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(),
                           ::i2c::class_of<TContract>() },
                         { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                           ::i2c::type_of<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder, factoryBindGenerator);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder6Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                                                           { "FromPoolableMemoryPool",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() },
                                                             { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder6Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder,
                                                              ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                                                           { "FromPoolableMemoryPool",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() },
                                                             { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder6Extensions::FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                                                           { "FromMonoPoolableMemoryPool",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() },
                                                             { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder6Extensions::FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder,
                                                                  ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                                                           { "FromMonoPoolableMemoryPool",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() },
                                                             { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder6Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                                                           { "FromPoolableMemoryPool",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TMemoryPool>() },
                                                             { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                          ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TMemoryPool>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::ArgConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder6Extensions::FromPoolableMemoryPool(::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder,
                                                              ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder6Extensions*>(),
                                                           { "FromPoolableMemoryPool",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TMemoryPool>() },
                                                             { ::i2c::type_of<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                          ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TMemoryPool>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
// Ctor Parameters []
constexpr ::Zenject::FactoryFromBinder6Extensions::FactoryFromBinder6Extensions() {}
