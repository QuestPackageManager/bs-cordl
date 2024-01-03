#pragma once
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::System::Memory_1<T>>"
template <typename T> constexpr System::Memory_1<T>::operator ::System::IEquatable_1<::System::Memory_1<T>>*() {
  return static_cast<::System::IEquatable_1<::System::Memory_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void System::Memory_1<T>::_ctor(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline void System::Memory_1<T>::_ctor(::ArrayW<T, ::Array<T>*> array, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, start, length);
}
template <typename T> inline void System::Memory_1<T>::_ctor(::System::Object* obj, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, start, length);
}
template <typename T> inline ::System::Memory_1<T> System::Memory_1<T>::op_Implicit___System__Memory_1_T_(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>, false>(nullptr, ___internal_method, array);
}
template <typename T> inline ::System::ReadOnlyMemory_1<T> System::Memory_1<T>::op_Implicit___System__ReadOnlyMemory_1_T_(::System::Memory_1<T> memory) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>, false>(nullptr, ___internal_method, memory);
}
template <typename T> inline int32_t System::Memory_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Memory_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::System::Memory_1<T> System::Memory_1<T>::Slice(int32_t start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "Slice", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>, false>(this, ___internal_method, start);
}
template <typename T> inline ::System::Memory_1<T> System::Memory_1<T>::Slice(int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "Slice", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>, false>(this, ___internal_method, start, length);
}
template <typename T> inline ::System::Span_1<T> System::Memory_1<T>::get_Span() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "get_Span", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::MemoryHandle System::Memory_1<T>::Pin() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "Pin", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryHandle, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Memory_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline bool System::Memory_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline bool System::Memory_1<T>::Equals(::System::Memory_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t System::Memory_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Memory_1<T>::CombineHashCodes(int32_t left, int32_t right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "CombineHashCodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, left, right);
}
template <typename T> inline int32_t System::Memory_1<T>::CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Memory_1<T>>::get(), "CombineHashCodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2, h3);
}
// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Memory_1<T>::Memory_1(::System::Object* _object, int32_t _index, int32_t _length) noexcept {
  this->_object = _object;
  this->_index = _index;
  this->_length = _length;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Memory_1<T>::Memory_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
