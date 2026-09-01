#pragma once
// IWYU pragma private; include "System\Threading\ThreadLocal_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::ThreadLocal_1_LinkedSlot<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>::ThreadLocal_1_LinkedSlotVolatile(::System::Threading::ThreadLocal_1_LinkedSlot<T>* Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>::ThreadLocal_1_LinkedSlotVolatile() {}
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>*& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>* const& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_set_Next(::System::Threading::ThreadLocal_1_LinkedSlot<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Next = value;
}
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>*& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_Previous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Previous;
}
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>* const& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_Previous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Previous;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_set_Previous(::System::Threading::ThreadLocal_1_LinkedSlot<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Previous = value;
}
template <typename T> constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_SlotArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T> constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> const& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_SlotArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_set_SlotArray(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SlotArray = value;
}
template <typename T> constexpr T& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr T const& System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_LinkedSlot<T>::__cordl_internal_set_Value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
template <typename T> inline void System::Threading::ThreadLocal_1_LinkedSlot<T>::_ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> slotArray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1_LinkedSlot<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotArray);
}
template <typename T>
inline ::System::Threading::ThreadLocal_1_LinkedSlot<T>* System::Threading::ThreadLocal_1_LinkedSlot<T>::New_ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> slotArray) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadLocal_1_LinkedSlot<T>*>(slotArray));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>::ThreadLocal_1_LinkedSlot() {}
template <typename T> constexpr int32_t& System::Threading::ThreadLocal_1_IdManager<T>::__cordl_internal_get_m_nextIdToTry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nextIdToTry;
}
template <typename T> constexpr int32_t const& System::Threading::ThreadLocal_1_IdManager<T>::__cordl_internal_get_m_nextIdToTry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nextIdToTry;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_IdManager<T>::__cordl_internal_set_m_nextIdToTry(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nextIdToTry = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<bool>*& System::Threading::ThreadLocal_1_IdManager<T>::__cordl_internal_get_m_freeIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_freeIds;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<bool>* const& System::Threading::ThreadLocal_1_IdManager<T>::__cordl_internal_get_m_freeIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_freeIds;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_IdManager<T>::__cordl_internal_set_m_freeIds(::System::Collections::Generic::List_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_freeIds = value;
}
template <typename T> inline int32_t System::Threading::ThreadLocal_1_IdManager<T>::GetId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1_IdManager<T>*>(), { "GetId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1_IdManager<T>::ReturnId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1_IdManager<T>*>(), { "ReturnId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
template <typename T> inline void System::Threading::ThreadLocal_1_IdManager<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1_IdManager<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::ThreadLocal_1_IdManager<T>* System::Threading::ThreadLocal_1_IdManager<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadLocal_1_IdManager<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadLocal_1_IdManager<T>::ThreadLocal_1_IdManager() {}
template <typename T> constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>& System::Threading::ThreadLocal_1_FinalizationHelper<T>::__cordl_internal_get_SlotArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T>
constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> const& System::Threading::ThreadLocal_1_FinalizationHelper<T>::__cordl_internal_get_SlotArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_FinalizationHelper<T>::__cordl_internal_set_SlotArray(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SlotArray = value;
}
template <typename T> constexpr bool& System::Threading::ThreadLocal_1_FinalizationHelper<T>::__cordl_internal_get_m_trackAllValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr bool const& System::Threading::ThreadLocal_1_FinalizationHelper<T>::__cordl_internal_get_m_trackAllValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1_FinalizationHelper<T>::__cordl_internal_set_m_trackAllValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_trackAllValues = value;
}
template <typename T> inline void System::Threading::ThreadLocal_1_FinalizationHelper<T>::_ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> slotArray, bool trackAllValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1_FinalizationHelper<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotArray, trackAllValues);
}
template <typename T> inline void System::Threading::ThreadLocal_1_FinalizationHelper<T>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ThreadLocal_1_FinalizationHelper<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::ThreadLocal_1_FinalizationHelper<T>*
System::Threading::ThreadLocal_1_FinalizationHelper<T>::New_ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> slotArray, bool trackAllValues) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadLocal_1_FinalizationHelper<T>*>(slotArray, trackAllValues));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadLocal_1_FinalizationHelper<T>::ThreadLocal_1_FinalizationHelper() {}
template <typename T> constexpr ::System::Func_1<T>*& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_valueFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFactory;
}
template <typename T> constexpr ::System::Func_1<T>* const& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_valueFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFactory;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__cordl_internal_set_m_valueFactory(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_valueFactory = value;
}
template <typename T> constexpr int32_t& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_idComplement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_idComplement;
}
template <typename T> constexpr int32_t const& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_idComplement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_idComplement;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__cordl_internal_set_m_idComplement(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_idComplement = value;
}
template <typename T> constexpr bool& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_initialized;
}
template <typename T> constexpr bool const& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_initialized;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__cordl_internal_set_m_initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_initialized = value;
}
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>*& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_linkedSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_linkedSlot;
}
template <typename T> constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>* const& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_linkedSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_linkedSlot;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__cordl_internal_set_m_linkedSlot(::System::Threading::ThreadLocal_1_LinkedSlot<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_linkedSlot = value;
}
template <typename T> constexpr bool& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_trackAllValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr bool const& System::Threading::ThreadLocal_1<T>::__cordl_internal_get_m_trackAllValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__cordl_internal_set_m_trackAllValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_trackAllValues = value;
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::setStaticF_ts_slotArray(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>, "ts_slotArray", ::System::Threading::ThreadLocal_1<T>*>(
      std::forward<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>>(value));
}
template <typename T> inline ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> System::Threading::ThreadLocal_1<T>::getStaticF_ts_slotArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>, "ts_slotArray", ::System::Threading::ThreadLocal_1<T>*>();
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::setStaticF_ts_finalizationHelper(::System::Threading::ThreadLocal_1_FinalizationHelper<T>* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1_FinalizationHelper<T>*, "ts_finalizationHelper", ::System::Threading::ThreadLocal_1<T>*>(
      std::forward<::System::Threading::ThreadLocal_1_FinalizationHelper<T>*>(value));
}
template <typename T> inline ::System::Threading::ThreadLocal_1_FinalizationHelper<T>* System::Threading::ThreadLocal_1<T>::getStaticF_ts_finalizationHelper() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1_FinalizationHelper<T>*, "ts_finalizationHelper", ::System::Threading::ThreadLocal_1<T>*>();
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::setStaticF_s_idManager(::System::Threading::ThreadLocal_1_IdManager<T>* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1_IdManager<T>*, "s_idManager", ::System::Threading::ThreadLocal_1<T>*>(
      std::forward<::System::Threading::ThreadLocal_1_IdManager<T>*>(value));
}
template <typename T> inline ::System::Threading::ThreadLocal_1_IdManager<T>* System::Threading::ThreadLocal_1<T>::getStaticF_s_idManager() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1_IdManager<T>*, "s_idManager", ::System::Threading::ThreadLocal_1<T>*>();
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::_ctor(::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueFactory);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Initialize(::System::Func_1<T>* valueFactory, bool trackAllValues) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "Initialize", {}, { ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueFactory, trackAllValues);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename T> inline ::StringW System::Threading::ThreadLocal_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline T System::Threading::ThreadLocal_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::set_Value(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "set_Value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T System::Threading::ThreadLocal_1<T>::GetValueSlow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "GetValueSlow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::SetValueSlow(T value, ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> slotArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(),
                                                           { "SetValueSlow", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, slotArray);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::CreateLinkedSlot(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>> slotArray, int32_t id, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(),
                          { "CreateLinkedSlot", {}, { ::i2c::type_of<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotArray, id, value);
}
template <typename T> inline bool System::Threading::ThreadLocal_1<T>::get_IsValueCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "get_IsValueCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::GrowTable(::by_ref<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>> table, int32_t minLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(),
                                              { "GrowTable", {}, { ::i2c::type_of<::by_ref<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, minLength);
}
template <typename T> inline int32_t System::Threading::ThreadLocal_1<T>::GetNewTableSize(int32_t minSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadLocal_1<T>*>(), { "GetNewTableSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, minSize);
}
template <typename T> inline ::System::Threading::ThreadLocal_1<T>* System::Threading::ThreadLocal_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadLocal_1<T>*>());
}
template <typename T> inline ::System::Threading::ThreadLocal_1<T>* System::Threading::ThreadLocal_1<T>::New_ctor(::System::Func_1<T>* valueFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadLocal_1<T>*>(valueFactory));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Threading::ThreadLocal_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Threading::ThreadLocal_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadLocal_1<T>::ThreadLocal_1() {}
