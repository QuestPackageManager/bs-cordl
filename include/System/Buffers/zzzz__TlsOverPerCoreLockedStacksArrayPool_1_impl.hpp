#pragma once
#include "System/Buffers/zzzz__ArrayPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure() {}
template <typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::Low{ static_cast<int32_t>(0x0) };
template <typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::Medium{ static_cast<int32_t>(
    0x1) };
template <typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::High{ static_cast<int32_t>(0x2) };
template <typename T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>&
System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__get__perCoreStacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____perCoreStacks;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> const&
System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__get__perCoreStacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____perCoreStacks;
}
template <typename T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__set__perCoreStacks(
    ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perCoreStacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>());
}
template <typename T> inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::TryPush(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(), "TryPush",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::TryPop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(),
                                               "TryPop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T>
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::Trim(uint32_t tickCount, int32_t id,
                                                                                                   ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure,
                                                                                                   ::ArrayW<int32_t, ::Array<int32_t>*> bucketSizes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(), "Trim", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() {}
template <typename T> constexpr ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__arrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arrays;
}
template <typename T>
constexpr ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__arrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arrays;
}
template <typename T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__set__arrays(::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____count;
}
template <typename T> constexpr int32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____count;
}
template <typename T> constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____count = value;
}
template <typename T> constexpr uint32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__firstStackItemMS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstStackItemMS;
}
template <typename T> constexpr uint32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__firstStackItemMS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstStackItemMS;
}
template <typename T> constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__set__firstStackItemMS(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____firstStackItemMS = value;
}
template <typename T> inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::TryPush(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(), "TryPush",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::TryPop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(), "TryPop",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T>
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::Trim(uint32_t tickCount, int32_t id,
                                                                                           ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, int32_t bucketSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(), "Trim", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tickCount, id, pressure, bucketSize);
}
template <typename T> inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>());
}
template <typename T> inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() {}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__bucketArraySizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bucketArraySizes;
}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__bucketArraySizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bucketArraySizes;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__set__bucketArraySizes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bucketArraySizes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buckets;
}
template <typename T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,
                   ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*> const&
System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buckets;
}
template <typename T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__set__buckets(
    ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buckets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__callbackCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____callbackCreated;
}
template <typename T> constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__callbackCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____callbackCreated;
}
template <typename T> constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__set__callbackCreated(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
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
template <typename T> inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>());
}
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::CreatePerCoreLockedStacks(int32_t bucketIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "CreatePerCoreLockedStacks",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*, false>(this, ___internal_method, bucketIndex);
}
template <typename T> inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::get_Id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "get_Id",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Rent(int32_t minimumLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Rent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
template <typename T> inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Return(::ArrayW<T, ::Array<T>*> array, bool clearArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Return", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, clearArray);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Trim() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Trim",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Gen2GcCallbackFunc(::System::Object* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Gen2GcCallbackFunc",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
template <typename T> inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetMemoryPressure() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "GetMemoryPressure",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>, false>(nullptr, ___internal_method);
}
template <typename T> inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetTrimBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "GetTrimBuffers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::TlsOverPerCoreLockedStacksArrayPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
