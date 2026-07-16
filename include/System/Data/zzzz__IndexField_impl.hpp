#pragma once
// IWYU pragma private; include "System/Data/IndexField.hpp"
#include "System/Data/zzzz__IndexField_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::IndexField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::IndexField::*)(::System::Data::DataColumn*, bool)>(&::System::Data::IndexField::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6047838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::IndexField>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::IndexField.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::IndexField, ::System::Data::IndexField)>(&::System::Data::IndexField::op_Equality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6047844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::IndexField>(), { "op_Equality", {}, { ::i2c::type_of<::System::Data::IndexField>(), ::i2c::type_of<::System::Data::IndexField>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::IndexField.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::IndexField::*)(::System::Object*)>(&::System::Data::IndexField::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6047858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::IndexField>(), { ::i2c::class_of<::System::Data::IndexField>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::IndexField.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::IndexField::*)()>(&::System::Data::IndexField::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60478e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::IndexField>(), { ::i2c::class_of<::System::Data::IndexField>(), 2 }));
    return ___internal_method;
  }
};
inline void System::Data::IndexField::_ctor(::System::Data::DataColumn* column, bool isDescending) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::IndexField>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, column, isDescending);
}
inline bool System::Data::IndexField::op_Equality(::System::Data::IndexField if1, ::System::Data::IndexField if2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::IndexField>(), { "op_Equality", {}, { ::i2c::type_of<::System::Data::IndexField>(), ::i2c::type_of<::System::Data::IndexField>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, if1, if2);
}
inline bool System::Data::IndexField::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::IndexField>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Data::IndexField::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::IndexField>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Column", ty: "::System::Data::DataColumn*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDescending", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Data::IndexField::IndexField(::System::Data::DataColumn* Column, bool IsDescending) noexcept {
  this->Column = Column;
  this->IsDescending = IsDescending;
}
// Ctor Parameters []
constexpr ::System::Data::IndexField::IndexField() {}
