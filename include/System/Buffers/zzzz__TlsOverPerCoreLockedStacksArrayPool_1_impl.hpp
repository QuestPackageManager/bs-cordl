#pragma once
// IWYU pragma private; include "System\Buffers\TlsOverPerCoreLockedStacksArrayPool_1.hpp"
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
template <typename T> constexpr ::ArrayW<::ArrayW<T>>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__arrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrays;
}
template <typename T> constexpr ::ArrayW<::ArrayW<T>> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_get__arrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrays;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::__cordl_internal_set__arrays(::ArrayW<::ArrayW<T>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrays = value;
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
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::TryPush(::ArrayW<T> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>(), { "TryPush", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::TryPop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>(), { "TryPop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::Trim(uint32_t tickCount, int32_t id,
                                                                                        ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> pressure, int32_t bucketSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>(),
                                                           { "Trim",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickCount, id, pressure, bucketSize);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack() {}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*>&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::__cordl_internal_get__perCoreStacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perCoreStacks;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*> const&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::__cordl_internal_get__perCoreStacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perCoreStacks;
}
template <typename T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::__cordl_internal_set__perCoreStacks(
    ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_LockedStack<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perCoreStacks = value;
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::TryPush(::ArrayW<T> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>(), { "TryPush", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::TryPop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>(), { "TryPop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T>
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::Trim(uint32_t tickCount, int32_t id,
                                                                                                ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> pressure,
                                                                                                ::ArrayW<int32_t> bucketSizes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>(),
                                                           { "Trim",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
template <typename T>
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks() {}
template <typename T> constexpr ::ArrayW<int32_t>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__bucketArraySizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucketArraySizes;
}
template <typename T> constexpr ::ArrayW<int32_t> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__bucketArraySizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucketArraySizes;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_set__bucketArraySizes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bucketArraySizes = value;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*> const&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename T>
constexpr void
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__cordl_internal_set__buckets(::ArrayW<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buckets = value;
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
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<T>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<T>>, "t_tlsBuckets", ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(std::forward<::ArrayW<::ArrayW<T>>>(value));
}
template <typename T> inline ::ArrayW<::ArrayW<T>> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_t_tlsBuckets() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<T>>, "t_tlsBuckets", ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>();
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_s_trimBuffers(bool value) {
  ::cordl_internals::setStaticField<bool, "s_trimBuffers", ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(std::forward<bool>(value));
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_s_trimBuffers() {
  return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>();
}
template <typename T>
inline void
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::System::Object*>*, "s_allTlsBuckets",
                                    ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::System::Object*>*>(value));
}
template <typename T>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::System::Object*>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_s_allTlsBuckets() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::System::Object*>*, "s_allTlsBuckets",
                                           ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>();
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::CreatePerCoreLockedStacks(int32_t bucketIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { "CreatePerCoreLockedStacks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_PerCoreLockedStacks<T>*>(this, ___internal_method, bucketIndex);
}
template <typename T> inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Rent(int32_t minimumLength) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, minimumLength);
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Return(::ArrayW<T> array, bool clearArray) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, clearArray);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Trim() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { "Trim", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Gen2GcCallbackFunc(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { "Gen2GcCallbackFunc", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target);
}
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetMemoryPressure() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { "GetMemoryPressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>>(nullptr, ___internal_method);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetTrimBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>(), { "GetTrimBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::TlsOverPerCoreLockedStacksArrayPool_1() {}
