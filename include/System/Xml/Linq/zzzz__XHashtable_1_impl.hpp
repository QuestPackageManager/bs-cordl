#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TValue>
inline ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>(object, method));
}
template <typename TValue> inline void System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TValue> inline ::StringW System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::Invoke(TValue value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>::__XHashtable_1__ExtractKeyDelegate() {}
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValue> constexpr ::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__XHashtable_1__XHashtableState__Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept {
  this->Value = Value;
  this->HashCode = HashCode;
  this->Next = Next;
}
// Ctor Parameters []
template <typename TValue> constexpr ::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>::__XHashtable_1__XHashtableState__Entry() {}
template <typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TValue> constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buckets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>&
System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TValue>
constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> const&
System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename TValue>
constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_set__entries(
    ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__numEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEntries;
}
template <typename TValue> constexpr int32_t const& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__numEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEntries;
}
template <typename TValue> constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_set__numEntries(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numEntries = value;
}
template <typename TValue> constexpr ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*& System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__extractKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extractKey;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*> const&
System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_get__extractKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extractKey;
}
template <typename TValue>
constexpr void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__cordl_internal_set__extractKey(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____extractKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*
System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>(extractKey, capacity));
}
template <typename TValue>
inline void System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extractKey, capacity);
}
template <typename TValue> inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::Resize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline bool System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, index, count, value);
}
template <typename TValue> inline bool System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::TryAdd(TValue value, ByRef<TValue> newValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(), "TryAdd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, newValue);
}
template <typename TValue> inline bool System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ByRef<int32_t> entryIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(), "FindEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hashCode, key, index, count, entryIndex);
}
template <typename TValue> inline int32_t System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::ComputeHashCode(::StringW key, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*>::get(), "ComputeHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, key, index, count);
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>::__XHashtable_1__XHashtableState() {}
template <typename TValue> constexpr ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*& System::Xml::Linq::XHashtable_1<TValue>::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*> const& System::Xml::Linq::XHashtable_1<TValue>::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TValue> constexpr void System::Xml::Linq::XHashtable_1<TValue>::__cordl_internal_set__state(::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
inline ::System::Xml::Linq::XHashtable_1<TValue>* System::Xml::Linq::XHashtable_1<TValue>::New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::XHashtable_1<TValue>*>(extractKey, capacity));
}
template <typename TValue> inline void System::Xml::Linq::XHashtable_1<TValue>::_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XHashtable_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extractKey, capacity);
}
template <typename TValue> inline bool System::Xml::Linq::XHashtable_1<TValue>::TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XHashtable_1<TValue>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, index, count, value);
}
template <typename TValue> inline TValue System::Xml::Linq::XHashtable_1<TValue>::Add(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XHashtable_1<TValue>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename TValue> constexpr ::System::Xml::Linq::XHashtable_1<TValue>::XHashtable_1() {}
