#pragma once
// IWYU pragma private; include "UnityEngine\ArticulationJacobian.hpp"
#include "UnityEngine/zzzz__ArticulationJacobian_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationJacobian::*)(int32_t, int32_t)>(&::UnityEngine::ArticulationJacobian::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6b72558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationJacobian::*)(int32_t, int32_t)>(&::UnityEngine::ArticulationJacobian::get_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b72678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationJacobian::*)(int32_t, int32_t, float_t)>(&::UnityEngine::ArticulationJacobian::set_Item)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b72734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.get_rows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationJacobian::*)()>(&::UnityEngine::ArticulationJacobian::get_rows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_rows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.set_rows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationJacobian::*)(int32_t)>(&::UnityEngine::ArticulationJacobian::set_rows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "set_rows", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.get_columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ArticulationJacobian::*)()>(&::UnityEngine::ArticulationJacobian::get_columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_columns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.set_columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationJacobian::*)(int32_t)>(&::UnityEngine::ArticulationJacobian::set_columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "set_columns", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.get_elements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<float_t>* (::UnityEngine::ArticulationJacobian::*)()>(
    &::UnityEngine::ArticulationJacobian::get_elements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_elements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationJacobian.set_elements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationJacobian::*)(::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::ArticulationJacobian::set_elements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "set_elements", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ArticulationJacobian::_ctor(int32_t rows, int32_t cols) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rows, cols);
}
inline float_t UnityEngine::ArticulationJacobian::get_Item(int32_t row, int32_t col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, row, col);
}
inline void UnityEngine::ArticulationJacobian::set_Item(int32_t row, int32_t col, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, row, col, value);
}
inline int32_t UnityEngine::ArticulationJacobian::get_rows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_rows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::ArticulationJacobian::set_rows(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "set_rows", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::ArticulationJacobian::get_columns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_columns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::ArticulationJacobian::set_columns(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "set_columns", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<float_t>* UnityEngine::ArticulationJacobian::get_elements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "get_elements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<float_t>*>(*this, ___internal_method);
}
inline void UnityEngine::ArticulationJacobian::set_elements(::System::Collections::Generic::List_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationJacobian>(), { "set_elements", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "rowsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "matrixData", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationJacobian::ArticulationJacobian(int32_t rowsCount, int32_t colsCount, ::System::Collections::Generic::List_1<float_t>* matrixData) noexcept {
  this->rowsCount = rowsCount;
  this->colsCount = colsCount;
  this->matrixData = matrixData;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationJacobian::ArticulationJacobian() {}
