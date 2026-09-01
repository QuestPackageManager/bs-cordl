#pragma once
// IWYU pragma private; include "System\Threading\SparselyPopulatedArrayAddInfo_1.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template <typename T> inline void System::Threading::SparselyPopulatedArrayAddInfo_1<T>::_ctor(::System::Threading::SparselyPopulatedArrayFragment_1<T>* source, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, index);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayAddInfo_1<T>::get_Source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>(), { "get_Source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(*this, ___internal_method);
}
template <typename T> inline int32_t System::Threading::SparselyPopulatedArrayAddInfo_1<T>::get_Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>(), { "get_Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Threading::SparselyPopulatedArrayAddInfo_1<T>::SparselyPopulatedArrayAddInfo_1(::System::Threading::SparselyPopulatedArrayFragment_1<T>* _source, int32_t _index) noexcept {
  this->_source = _source;
  this->_index = _index;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayAddInfo_1<T>::SparselyPopulatedArrayAddInfo_1() {}
