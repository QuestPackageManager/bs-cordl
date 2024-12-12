#pragma once
// IWYU pragma private; include "System/Buffers/TlsOverPerCoreLockedStacksArrayPool_1.hpp"
#include "System/Buffers/zzzz__ArrayPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure() {}
template <typename T>
constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::Low{ static_cast<int32_t>(0x0) };
template <typename T>
constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::Medium{ static_cast<int32_t>(0x1) };
template <typename T>
constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::High{ static_cast<int32_t>(0x2) };
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*, ::Array<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>*>&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::__cordl_internal_get__perCoreStacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perCoreStacks;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*, ::Array<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>*> const&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::__cordl_internal_get__perCoreStacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perCoreStacks;
}
template <typename T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::__cordl_internal_set__perCoreStacks(
    ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*, ::Array<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____perCoreStacks, value);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::TryPush(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>::get(), "TryPush",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::TryPop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>::get(),
                                               "TryPop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T>
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::Trim(uint32_t tickCount, int32_t id,
                                                                                                ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> pressure,
                                                                                                ::ArrayW<int32_t, ::Array<int32_t>*> bucketSizes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>::get(), "Trim", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
template <typename T>
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks() {}
template <typename T>
constexpr ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__arrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrays;
}
template <typename T>
constexpr ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__arrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrays;
}
template <typename T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_set__arrays(::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____arrays, value);
}
template <typename T> constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
template <typename T> constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
template <typename T> constexpr uint32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__firstStackItemMS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstStackItemMS;
}
template <typename T> constexpr uint32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__firstStackItemMS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstStackItemMS;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_set__firstStackItemMS(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstStackItemMS = value;
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::TryPush(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>::get(), "TryPush", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::TryPop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>::get(), "TryPop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::Trim(uint32_t tickCount, int32_t id,
                                                                                        ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> pressure, int32_t bucketSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>::get(), "Trim", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tickCount, id, pressure, bucketSize);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack() {}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__bucketArraySizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucketArraySizes;
}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__bucketArraySizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucketArraySizes;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_set__bucketArraySizes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____bucketArraySizes, value);
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*, ::Array<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>*>&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*, ::Array<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>*> const&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_set__buckets(
    ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*, ::Array<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____buckets, value);
}
template <typename T> constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__callbackCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackCreated;
}
template <typename T> constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__callbackCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackCreated;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_set__callbackCreated(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbackCreated = value;
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, "t_tlsBuckets",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>(
      std::forward<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>>(value));
}
template <typename T> inline ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_t_tlsBuckets() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, "t_tlsBuckets",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>();
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_s_trimBuffers(bool value) {
  ::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>(
      std::forward<bool>(value));
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_s_trimBuffers() {
  return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>();
}
template <typename T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_s_allTlsBuckets(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>*,
                                    "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>*>(value));
}
template <typename T>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>*
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_s_allTlsBuckets() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>*,
                                           "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>();
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::CreatePerCoreLockedStacks(int32_t bucketIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "CreatePerCoreLockedStacks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*, false>(this, ___internal_method, bucketIndex);
}
template <typename T> inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::get_Id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "get_Id",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Rent(int32_t minimumLength) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, minimumLength);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Return(::ArrayW<T, ::Array<T>*> array, bool clearArray) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, clearArray);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Trim() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Trim",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Gen2GcCallbackFunc(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Gen2GcCallbackFunc",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetMemoryPressure() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "GetMemoryPressure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>, false>(nullptr, ___internal_method);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetTrimBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "GetTrimBuffers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::TlsOverPerCoreLockedStacksArrayPool_1() {}
