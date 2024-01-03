#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::__ThreadLocal_1__LinkedSlot<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>::__ThreadLocal_1__LinkedSlotVolatile(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>::__ThreadLocal_1__LinkedSlotVolatile() {}
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> const& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
template <typename T> constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_Next(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Previous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Previous;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> const& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Previous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Previous;
}
template <typename T> constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_Previous(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Previous)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>&
System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_SlotArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const&
System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_SlotArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T>
constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_SlotArray(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SlotArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr T const& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_Value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* System::Threading::__ThreadLocal_1__LinkedSlot<T>::New_ctor(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>(slotArray));
}
template <typename T>
inline void System::Threading::__ThreadLocal_1__LinkedSlot<T>::_ctor(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotArray);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>::__ThreadLocal_1__LinkedSlot() {}
template <typename T> constexpr int32_t& System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_nextIdToTry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nextIdToTry;
}
template <typename T> constexpr int32_t const& System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_nextIdToTry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nextIdToTry;
}
template <typename T> constexpr void System::Threading::__ThreadLocal_1__IdManager<T>::__set_m_nextIdToTry(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nextIdToTry = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<bool>*& System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_freeIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_freeIds;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_freeIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_freeIds;
}
template <typename T> constexpr void System::Threading::__ThreadLocal_1__IdManager<T>::__set_m_freeIds(::System::Collections::Generic::List_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_freeIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline int32_t System::Threading::__ThreadLocal_1__IdManager<T>::GetId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__IdManager<T>*>::get(),
                                                                             "GetId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void System::Threading::__ThreadLocal_1__IdManager<T>::ReturnId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__IdManager<T>*>::get(), "ReturnId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
template <typename T> inline ::System::Threading::__ThreadLocal_1__IdManager<T>* System::Threading::__ThreadLocal_1__IdManager<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__ThreadLocal_1__IdManager<T>*>());
}
template <typename T> inline void System::Threading::__ThreadLocal_1__IdManager<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__IdManager<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__IdManager<T>::__ThreadLocal_1__IdManager() {}
template <typename T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>&
System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_SlotArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const&
System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_SlotArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SlotArray;
}
template <typename T>
constexpr void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__set_SlotArray(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SlotArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_m_trackAllValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr bool const& System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_m_trackAllValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__set_m_trackAllValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_trackAllValues = value;
}
template <typename T>
inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* System::Threading::__ThreadLocal_1__FinalizationHelper<T>::New_ctor(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray, bool trackAllValues) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>(slotArray, trackAllValues));
}
template <typename T>
inline void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::_ctor(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray, bool trackAllValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotArray, trackAllValues);
}
template <typename T> inline void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__ThreadLocal_1__FinalizationHelper() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Threading::ThreadLocal_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Threading::ThreadLocal_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Func_1<T>*& System::Threading::ThreadLocal_1<T>::__get_m_valueFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFactory;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& System::Threading::ThreadLocal_1<T>::__get_m_valueFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFactory;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__set_m_valueFactory(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_valueFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Threading::ThreadLocal_1<T>::__get_m_idComplement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_idComplement;
}
template <typename T> constexpr int32_t const& System::Threading::ThreadLocal_1<T>::__get_m_idComplement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_idComplement;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__set_m_idComplement(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_idComplement = value;
}
template <typename T> constexpr bool& System::Threading::ThreadLocal_1<T>::__get_m_initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_initialized;
}
template <typename T> constexpr bool const& System::Threading::ThreadLocal_1<T>::__get_m_initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_initialized;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__set_m_initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_initialized = value;
}
template <typename T> constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*& System::Threading::ThreadLocal_1<T>::__get_m_linkedSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_linkedSlot;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> const& System::Threading::ThreadLocal_1<T>::__get_m_linkedSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_linkedSlot;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__set_m_linkedSlot(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_linkedSlot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& System::Threading::ThreadLocal_1<T>::__get_m_trackAllValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr bool const& System::Threading::ThreadLocal_1<T>::__get_m_trackAllValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_trackAllValues;
}
template <typename T> constexpr void System::Threading::ThreadLocal_1<T>::__set_m_trackAllValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_trackAllValues = value;
}
template <typename T>
inline void System::Threading::ThreadLocal_1<T>::setStaticF_ts_slotArray(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, "ts_slotArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>(
      std::forward<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>(value));
}
template <typename T>
inline ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>
System::Threading::ThreadLocal_1<T>::getStaticF_ts_slotArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, "ts_slotArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>();
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::setStaticF_ts_finalizationHelper(::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* value) {
  ::cordl_internals::setStaticField<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*, "ts_finalizationHelper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>(
      std::forward<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>(value));
}
template <typename T> inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* System::Threading::ThreadLocal_1<T>::getStaticF_ts_finalizationHelper() {
  return ::cordl_internals::getStaticField<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*, "ts_finalizationHelper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>();
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::setStaticF_s_idManager(::System::Threading::__ThreadLocal_1__IdManager<T>* value) {
  ::cordl_internals::setStaticField<::System::Threading::__ThreadLocal_1__IdManager<T>*, "s_idManager",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>(
      std::forward<::System::Threading::__ThreadLocal_1__IdManager<T>*>(value));
}
template <typename T> inline ::System::Threading::__ThreadLocal_1__IdManager<T>* System::Threading::ThreadLocal_1<T>::getStaticF_s_idManager() {
  return ::cordl_internals::getStaticField<::System::Threading::__ThreadLocal_1__IdManager<T>*, "s_idManager",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>();
}
template <typename T> inline ::System::Threading::ThreadLocal_1<T>* System::Threading::ThreadLocal_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ThreadLocal_1<T>*>());
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Initialize(::System::Func_1<T>* valueFactory, bool trackAllValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "Initialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueFactory, trackAllValues);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline ::StringW System::Threading::ThreadLocal_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline T System::Threading::ThreadLocal_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void System::Threading::ThreadLocal_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "set_Value", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T System::Threading::ThreadLocal_1<T>::GetValueSlow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "GetValueSlow",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline void System::Threading::ThreadLocal_1<T>::SetValueSlow(
    T value, ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "SetValueSlow", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, slotArray);
}
template <typename T>
inline void System::Threading::ThreadLocal_1<T>::CreateLinkedSlot(
    ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray, int32_t id, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "CreateLinkedSlot", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slotArray, id, value);
}
template <typename T> inline bool System::Threading::ThreadLocal_1<T>::get_IsValueCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                                                                             "get_IsValueCreated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T>
inline void System::Threading::ThreadLocal_1<T>::GrowTable(
    ByRef<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>> table, int32_t minLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "GrowTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ByRef<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, minLength);
}
template <typename T> inline int32_t System::Threading::ThreadLocal_1<T>::GetNewTableSize(int32_t minSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(), "GetNewTableSize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, minSize);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadLocal_1<T>::ThreadLocal_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
