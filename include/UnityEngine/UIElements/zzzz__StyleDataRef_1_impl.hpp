#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleDataRef_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleDataRef_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_get_m_RefCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_get_m_RefCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefCount;
}
template <typename T> constexpr void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_set_m_RefCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RefCount = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
template <typename T> constexpr void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_set_m_Id(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Id = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::setStaticF_m_NextId(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "m_NextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get>(
      std::forward<uint32_t>(value));
}
template <typename T> inline uint32_t UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::getStaticF_m_NextId() {
  return ::cordl_internals::getStaticField<uint32_t, "m_NextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get>();
}
template <typename T> inline int32_t UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::get_refCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get(),
                                                                             "get_refCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::Acquire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get(),
                                                                             "Acquire", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::Copy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*>::get(),
                                                                             "Copy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>::__StyleDataRef_1__RefCounted() {}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::StyleDataRef_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>* UnityEngine::UIElements::StyleDataRef_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__StyleDataRef_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline ::UnityEngine::UIElements::StyleDataRef_1<T> UnityEngine::UIElements::StyleDataRef_1<T>::Acquire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "Acquire",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleDataRef_1<T>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1<T>::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1<T>::CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleDataRef_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline ByRef<T> UnityEngine::UIElements::StyleDataRef_1<T>::Read() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "Read",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(this, ___internal_method);
}
template <typename T> inline ByRef<T> UnityEngine::UIElements::StyleDataRef_1<T>::Write() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "Write",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::StyleDataRef_1<T> UnityEngine::UIElements::StyleDataRef_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleDataRef_1<T>, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleDataRef_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::op_Equality(::UnityEngine::UIElements::StyleDataRef_1<T> lhs, ::UnityEngine::UIElements::StyleDataRef_1<T> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleDataRef_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::Equals(::UnityEngine::UIElements::StyleDataRef_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleDataRef_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleDataRef_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::UnityEngine::UIElements::StyleDataRef_1<T>::StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* m_Ref) noexcept {
  this->m_Ref = m_Ref;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StyleDataRef_1<T>::StyleDataRef_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
