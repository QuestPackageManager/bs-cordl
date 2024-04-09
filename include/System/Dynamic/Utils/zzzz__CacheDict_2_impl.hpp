#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
template <typename TKey, typename TValue> constexpr int32_t& System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_get__hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hash;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_get__hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hash;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_set__hash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hash = value;
}
template <typename TKey, typename TValue> constexpr TKey& System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr TKey const& System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_set__key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr TValue& System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr TValue const& System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__cordl_internal_set__value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>* System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::New_ctor(int32_t hash, TKey key, TValue value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>(hash, key, value));
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::_ctor(int32_t hash, TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, key, value);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__CacheDict_2__Entry() {}
template <typename TKey, typename TValue> constexpr int32_t& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mask = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*>&
System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> const&
System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__cordl_internal_set__entries(
    ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>* System::Dynamic::Utils::CacheDict_2<TKey, TValue>::New_ctor(int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(size));
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
template <typename TKey, typename TValue> inline int32_t System::Dynamic::Utils::CacheDict_2<TKey, TValue>::AlignSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), "AlignSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
template <typename TKey, typename TValue> inline bool System::Dynamic::Utils::CacheDict_2<TKey, TValue>::TryGetValue(TKey key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>::CacheDict_2() {}
