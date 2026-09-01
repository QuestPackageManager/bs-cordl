#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\SerStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b60918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)(::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::Push)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5f3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "Push", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::Pop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b5f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack.IncreaseCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::IncreaseCapacity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b6abe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "IncreaseCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::Peek)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b62d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "Peek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack.PeekPeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::PeekPeek)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b69ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "PeekPeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerStack.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::SerStack::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerStack::IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_set_objects(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objects = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_get_stackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackId;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_get_stackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_set_stackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stackId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_get_top() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_get_top() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerStack::__cordl_internal_set_top(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___top = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::SerStack::_ctor(::StringW stackId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stackId);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerStack::Push(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "Push", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::SerStack::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerStack::IncreaseCapacity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "IncreaseCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::SerStack::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::SerStack::PeekPeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "PeekPeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::SerStack::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* System::Runtime::Serialization::Formatters::Binary::SerStack::New_ctor(::StringW stackId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::SerStack*>(stackId));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack::SerStack() {}
