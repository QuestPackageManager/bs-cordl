#pragma once
#include "System/zzzz__Span_1_impl.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::_ctor(::System::Span_1<T> initialSpan) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSpan);
}
template <typename T> inline int32_t System::Collections::Generic::ValueListBuilder_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                                                                             "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ByRef<T> System::Collections::Generic::ValueListBuilder_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(this, ___internal_method, index);
}
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::Append(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(), "Append",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> System::Collections::Generic::ValueListBuilder_1<T>::AsSpan() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                                                                             "AsSpan", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::Grow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                                                                             "Grow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::ValueListBuilder_1<T>::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                                                                             "Pop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_span", ty: "::System::Span_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T,::Array<T>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Collections::Generic::ValueListBuilder_1<T>::ValueListBuilder_1(::System::Span_1<T> _span, ::ArrayW<T, ::Array<T>*> _arrayFromPool, int32_t _pos) noexcept {
  this->_span = _span;
  this->_arrayFromPool = _arrayFromPool;
  this->_pos = _pos;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::ValueListBuilder_1<T>::ValueListBuilder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
