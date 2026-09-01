#pragma once
// IWYU pragma private; include "Zenject\KeyedFactoryBase_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_def.hpp"
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2___c<TBase, TKey>::setStaticF___9(::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* value) {
  ::cordl_internals::setStaticField<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*, "<>9", ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(
      std::forward<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(value));
}
template <typename TBase, typename TKey> inline ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*, "<>9", ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>();
}
template <typename TBase, typename TKey>
inline void Zenject::KeyedFactoryBase_2___c<TBase, TKey>::setStaticF___9__12_0(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>*, "<>9__12_0", ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>*>(value));
}
template <typename TBase, typename TKey> inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>*, "<>9__12_0", ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>();
}
template <typename TBase, typename TKey>
inline void Zenject::KeyedFactoryBase_2___c<TBase, TKey>::setStaticF___9__12_1(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>*, "<>9__12_1", ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>*>(value));
}
template <typename TBase, typename TKey>
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>*, "<>9__12_1", ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>();
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2___c<TBase, TKey>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline TKey Zenject::KeyedFactoryBase_2___c<TBase, TKey>::_Initialize_b__12_0(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(),
                                                           { "<Initialize>b__12_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, x);
}
template <typename TBase, typename TKey> inline ::System::Type* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::_Initialize_b__12_1(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(),
                                                           { "<Initialize>b__12_1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, x);
}
template <typename TBase, typename TKey> inline ::System::Object* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey> inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TBase, typename TKey> inline ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>* Zenject::KeyedFactoryBase_2___c<TBase, TKey>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::KeyedFactoryBase_2___c<TBase, TKey>*>());
}
// Ctor Parameters []
template <typename TBase, typename TKey> constexpr ::Zenject::KeyedFactoryBase_2___c<TBase, TKey>::KeyedFactoryBase_2___c() {}
template <typename TBase, typename TKey> constexpr ::Zenject::DiContainer*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TBase, typename TKey> constexpr ::Zenject::DiContainer* const& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TBase, typename TKey> constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
template <typename TBase, typename TKey>
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typePairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typePairs;
}
template <typename TBase, typename TKey>
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* const& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typePairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typePairs;
}
template <typename TBase, typename TKey>
constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__typePairs(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typePairs = value;
}
template <typename TBase, typename TKey> constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
template <typename TBase, typename TKey>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* const& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
template <typename TBase, typename TKey>
constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__typeMap(::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeMap = value;
}
template <typename TBase, typename TKey> constexpr ::System::Type*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__fallbackType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackType;
}
template <typename TBase, typename TKey> constexpr ::System::Type* const& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__fallbackType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackType;
}
template <typename TBase, typename TKey> constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__fallbackType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackType = value;
}
template <typename TBase, typename TKey> inline ::Zenject::DiContainer* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_ProvidedTypes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Collections::Generic::ICollection_1<TKey>* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_TypeMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "get_TypeMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline bool Zenject::KeyedFactoryBase_2<TBase, TKey>::HasKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "HasKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TBase, typename TKey> inline ::System::Type* Zenject::KeyedFactoryBase_2<TBase, TKey>::GetTypeForKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "GetTypeForKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, key);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::Validate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TKey>
template <typename TDerived>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::KeyedFactoryBase_2<TBase, TKey>::AddBindingInternal(::Zenject::DiContainer* container, TKey key) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(),
                                                           { "AddBindingInternal", { ::i2c::class_of<TDerived>() }, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TKey>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDerived>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(nullptr, ___internal_method, container, key);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(),
                                                                                         { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(),
                                                                                         { "__zenFieldSetter1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(),
                                                                                         { "__zenFieldSetter2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(),
                                                           { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TBase, typename TKey> inline ::Zenject::KeyedFactoryBase_2<TBase, TKey>* Zenject::KeyedFactoryBase_2<TBase, TKey>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>());
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TBase, typename TKey> constexpr Zenject::KeyedFactoryBase_2<TBase, TKey>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TBase, typename TKey> constexpr ::Zenject::IValidatable* Zenject::KeyedFactoryBase_2<TBase, TKey>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TBase, typename TKey> constexpr ::Zenject::KeyedFactoryBase_2<TBase, TKey>::KeyedFactoryBase_2() {}
