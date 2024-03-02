#pragma once
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
template <typename TBase, typename TKey> inline void Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::setStaticF___9(::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* value) {
  ::cordl_internals::setStaticField<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get>(
      std::forward<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>(value));
}
template <typename TBase, typename TKey> inline ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get>();
}
template <typename TBase, typename TKey>
inline void Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::setStaticF___9__12_0(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>*>(value));
}
template <typename TBase, typename TKey>
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, TKey>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get>();
}
template <typename TBase, typename TKey>
inline void Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::setStaticF___9__12_1(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>*, "<>9__12_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>*>(value));
}
template <typename TBase, typename TKey>
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*, ::System::Type*>*, "<>9__12_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get>();
}
template <typename TBase, typename TKey> inline ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>());
}
template <typename TBase, typename TKey> inline void Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline TKey Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::_Initialize_b__12_0(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get(), "<Initialize>b__12_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, x);
}
template <typename TBase, typename TKey> inline ::System::Type* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::_Initialize_b__12_1(::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get(), "<Initialize>b__12_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, x);
}
template <typename TBase, typename TKey> inline ::System::Object* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey> inline ::Zenject::InjectTypeInfo* Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TKey> constexpr ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>::__KeyedFactoryBase_2____c() {}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TBase, typename TKey> constexpr Zenject::KeyedFactoryBase_2<TBase, TKey>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TBase, typename TKey> constexpr ::Zenject::IValidatable* Zenject::KeyedFactoryBase_2<TBase, TKey>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template <typename TBase, typename TKey> constexpr ::Zenject::DiContainer*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TBase, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TBase, typename TKey> constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TBase, typename TKey>
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typePairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typePairs;
}
template <typename TBase, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>*> const&
Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typePairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typePairs;
}
template <typename TBase, typename TKey>
constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__typePairs(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey, ::System::Type*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typePairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TBase, typename TKey> constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
template <typename TBase, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*> const&
Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__typeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
template <typename TBase, typename TKey>
constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__typeMap(::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TBase, typename TKey> constexpr ::System::Type*& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__fallbackType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackType;
}
template <typename TBase, typename TKey> constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_get__fallbackType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackType;
}
template <typename TBase, typename TKey> constexpr void Zenject::KeyedFactoryBase_2<TBase, TKey>::__cordl_internal_set__fallbackType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fallbackType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TBase, typename TKey> inline ::Zenject::DiContainer* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(),
                                                                             "get_Container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_ProvidedTypes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Collections::Generic::ICollection_1<TKey>* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "get_Keys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>* Zenject::KeyedFactoryBase_2<TBase, TKey>::get_TypeMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "get_TypeMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, ::System::Type*>*, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline bool Zenject::KeyedFactoryBase_2<TBase, TKey>::HasKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "HasKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TBase, typename TKey> inline ::System::Type* Zenject::KeyedFactoryBase_2<TBase, TKey>::GetTypeForKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "GetTypeForKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, key);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::Validate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey>
template <typename TDerived>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::KeyedFactoryBase_2<TBase, TKey>::AddBindingInternal(::Zenject::DiContainer* container, TKey key) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "AddBindingInternal",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDerived>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDerived>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(nullptr, ___internal_method, container, key);
}
template <typename TBase, typename TKey> inline ::Zenject::KeyedFactoryBase_2<TBase, TKey>* Zenject::KeyedFactoryBase_2<TBase, TKey>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>());
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(),
                                                                             "__zenFieldSetter0", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(),
                                                                             "__zenFieldSetter1", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(),
                                                                             "__zenFieldSetter2", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TBase, typename TKey> inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactoryBase_2<TBase, TKey>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::KeyedFactoryBase_2<TBase, TKey>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TKey> constexpr ::Zenject::KeyedFactoryBase_2<TBase, TKey>::KeyedFactoryBase_2() {}
