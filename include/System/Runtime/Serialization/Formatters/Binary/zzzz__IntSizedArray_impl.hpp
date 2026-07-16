#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/IntSizedArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__IntSizedArray_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b61ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*)>(&::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b68c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b68d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::get_Item)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b61d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::set_Item)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b61dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray.IncreaseCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::IncreaseCapacity)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5b68dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { "IncreaseCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::IntSizedArray::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::IntSizedArray::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::IntSizedArray::__cordl_internal_set_objects(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objects = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::IntSizedArray::__cordl_internal_get_negObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___negObjects;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::IntSizedArray::__cordl_internal_get_negObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___negObjects;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::IntSizedArray::__cordl_internal_set_negObjects(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___negObjects = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::IntSizedArray::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::IntSizedArray::_ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizedArray);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::IntSizedArray::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::IntSizedArray::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void System::Runtime::Serialization::Formatters::Binary::IntSizedArray::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::IntSizedArray::IncreaseCapacity(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(), { "IncreaseCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* System::Runtime::Serialization::Formatters::Binary::IntSizedArray::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>());
}
inline ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*
System::Runtime::Serialization::Formatters::Binary::IntSizedArray::New_ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*>(sizedArray));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Runtime::Serialization::Formatters::Binary::IntSizedArray::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Runtime::Serialization::Formatters::Binary::IntSizedArray::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::IntSizedArray() {}
