#pragma once
// IWYU pragma private; include "Unity/Hierarchy/ReadOnlyNativeVector_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
template <typename T> inline int32_t Unity::Hierarchy::ReadOnlyNativeVector_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::ReadOnlyNativeVector_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Hierarchy::ReadOnlyNativeVector_1<T>::_ctor(::System::IntPtr ptr, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::ReadOnlyNativeVector_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, size);
}
template <typename T> inline ::by_ref<T> Unity::Hierarchy::ReadOnlyNativeVector_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::ReadOnlyNativeVector_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
template <typename T> constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<T>::ReadOnlyNativeVector_1(::System::IntPtr m_Ptr, int32_t m_Count) noexcept {
  this->m_Ptr = m_Ptr;
  this->m_Count = m_Count;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<T>::ReadOnlyNativeVector_1() {}
