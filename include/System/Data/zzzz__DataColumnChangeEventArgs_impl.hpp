#pragma once
// IWYU pragma private; include "System/Data/DataColumnChangeEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataColumnChangeEventArgs_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataRow*)>(&::System::Data::DataColumnChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x601adec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Object*)>(
    &::System::Data::DataColumnChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x601ae50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs.get_ProposedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumnChangeEventArgs::*)()>(&::System::Data::DataColumnChangeEventArgs::get_ProposedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601aec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(), { "get_ProposedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs.set_ProposedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Object*)>(&::System::Data::DataColumnChangeEventArgs::set_ProposedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(), { "set_ProposedValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs.InitializeColumnChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataColumn*, ::System::Object*)>(
    &::System::Data::DataColumnChangeEventArgs::InitializeColumnChangeEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601aed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(),
                                                             { "InitializeColumnChangeEvent", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataColumn*& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::DataColumnChangeEventArgs::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____column = value;
}
constexpr ::System::Data::DataRow*& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__Row_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr ::System::Data::DataRow* const& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__Row_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr void System::Data::DataColumnChangeEventArgs::__cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Row_k__BackingField = value;
}
constexpr ::System::Object*& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__ProposedValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProposedValue_k__BackingField;
}
constexpr ::System::Object* const& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__ProposedValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProposedValue_k__BackingField;
}
constexpr void System::Data::DataColumnChangeEventArgs::__cordl_internal_set__ProposedValue_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProposedValue_k__BackingField = value;
}
inline void System::Data::DataColumnChangeEventArgs::_ctor(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataColumnChangeEventArgs::_ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, column, value);
}
inline ::System::Object* System::Data::DataColumnChangeEventArgs::get_ProposedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(), { "get_ProposedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::DataColumnChangeEventArgs::set_ProposedValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(), { "set_ProposedValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumnChangeEventArgs::InitializeColumnChangeEvent(::System::Data::DataColumn* column, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnChangeEventArgs*>(),
                                                           { "InitializeColumnChangeEvent", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, value);
}
inline ::System::Data::DataColumnChangeEventArgs* System::Data::DataColumnChangeEventArgs::New_ctor(::System::Data::DataRow* row) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumnChangeEventArgs*>(row));
}
inline ::System::Data::DataColumnChangeEventArgs* System::Data::DataColumnChangeEventArgs::New_ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumnChangeEventArgs*>(row, column, value));
}
// Ctor Parameters []
constexpr ::System::Data::DataColumnChangeEventArgs::DataColumnChangeEventArgs() {}
