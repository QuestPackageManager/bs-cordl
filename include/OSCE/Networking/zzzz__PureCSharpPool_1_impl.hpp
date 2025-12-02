#pragma once
// IWYU pragma private; include "OSCE/Networking/PureCSharpPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Networking/zzzz__PureCSharpPool_1_def.hpp"
#include "OSCE/Networking/zzzz__PureCSharpPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr T& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_AllocatedElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllocatedElement;
}
template <typename T> constexpr T const& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_AllocatedElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllocatedElement;
}
template <typename T> constexpr void OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_set_AllocatedElement(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___AllocatedElement, value);
}
template <typename T> constexpr ::StringW& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_Stacktrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stacktrace;
}
template <typename T> constexpr ::StringW const& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_Stacktrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stacktrace;
}
template <typename T> constexpr void OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_set_Stacktrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Stacktrace, value);
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>* OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::PureCSharpPool_1_DebugTrace() {}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__pooledObjects(::ArrayW<T, ::Array<T>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<T, ::Array<T>*>, "_pooledObjects", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>(
      std::forward<::ArrayW<T, ::Array<T>*>>(value));
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> OSCE::Networking::PureCSharpPool_1<T>::getStaticF__pooledObjects() {
  return ::cordl_internals::getStaticField<::ArrayW<T, ::Array<T>*>, "_pooledObjects", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__balance(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_balance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::getStaticF__balance() {
  return ::cordl_internals::getStaticField<int32_t, "_balance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__pooledObjectsCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_pooledObjectsCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>(
      std::forward<int32_t>(value));
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::getStaticF__pooledObjectsCount() {
  return ::cordl_internals::getStaticField<int32_t, "_pooledObjectsCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__poolCapacity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_poolCapacity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::getStaticF__poolCapacity() {
  return ::cordl_internals::getStaticField<int32_t, "_poolCapacity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__traces(::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>*, "_traces",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>(
      std::forward<::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>*>(value));
}
template <typename T> inline ::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* OSCE::Networking::PureCSharpPool_1<T>::getStaticF__traces() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>*, "_traces",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* OSCE::Networking::PureCSharpPool_1<T>::get_Traces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "get_Traces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>*, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::get_Balance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "get_Balance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template <typename T> inline T OSCE::Networking::PureCSharpPool_1<T>::GetFromPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "GetFromPool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::Return(T obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "Return",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::ResetPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::PureCSharpPool_1<T>*>::get(), "ResetPool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::OSCE::Networking::PureCSharpPool_1<T>::PureCSharpPool_1() {}
