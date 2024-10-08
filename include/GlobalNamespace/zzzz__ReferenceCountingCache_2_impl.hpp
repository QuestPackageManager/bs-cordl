#pragma once
// IWYU pragma private; include "GlobalNamespace/ReferenceCountingCache_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::operator ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*() noexcept {
  return static_cast<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::i___GlobalNamespace__IReferenceCountingCache_2_TKey_TValue_() noexcept {
  return static_cast<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const&
GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_set__items(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, int32_t>*& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__referencesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referencesCount;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, int32_t>*> const&
GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_get__referencesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referencesCount;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__cordl_internal_set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____referencesCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::get_values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(),
                                                                             "get_values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::Insert(TKey key, TValue item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::AddReference(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "AddReference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::RemoveReference(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "RemoveReference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::GetReferenceCount(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "GetReferenceCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::TryGet(TKey key, ByRef<TValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "TryGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, result);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "LogError",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
template <typename TKey, typename TValue> inline ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::ReferenceCountingCache_2() {}
