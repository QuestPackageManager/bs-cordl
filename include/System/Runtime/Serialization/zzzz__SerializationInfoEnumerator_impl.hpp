#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SerializationInfoEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfoEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfoEnumerator::*)(
    ::ArrayW<::StringW>, ::ArrayW<::System::Object*>, ::ArrayW<::System::Type*>, int32_t)>(&::System::Runtime::Serialization::SerializationInfoEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b4bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b487ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4bd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationEntry (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b48200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b4bdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::get_Name)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b4bde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b4be6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfoEnumerator.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::SerializationInfoEnumerator::*)()>(
    &::System::Runtime::Serialization::SerializationInfoEnumerator::get_ObjectType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b4bef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____members;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____members;
}
constexpr void System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_set__members(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____members = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_set__data(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____types;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____types;
}
constexpr void System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_set__types(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____types = value;
}
constexpr int32_t& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__numItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numItems;
}
constexpr int32_t const& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__numItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numItems;
}
constexpr void System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_set__numItems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numItems = value;
}
constexpr int32_t& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__currItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currItem;
}
constexpr int32_t const& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__currItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currItem;
}
constexpr void System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_set__currItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currItem = value;
}
constexpr bool& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr bool const& System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void System::Runtime::Serialization::SerializationInfoEnumerator::__cordl_internal_set__current(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
inline void System::Runtime::Serialization::SerializationInfoEnumerator::_ctor(::ArrayW<::StringW> members, ::ArrayW<::System::Object*> info, ::ArrayW<::System::Type*> types, int32_t numItems) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, members, info, types, numItems);
}
inline bool System::Runtime::Serialization::SerializationInfoEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::SerializationInfoEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationEntry System::Runtime::Serialization::SerializationInfoEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEntry>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationInfoEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::SerializationInfoEnumerator::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::SerializationInfoEnumerator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::SerializationInfoEnumerator::get_ObjectType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfoEnumerator*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationInfoEnumerator*
System::Runtime::Serialization::SerializationInfoEnumerator::New_ctor(::ArrayW<::StringW> members, ::ArrayW<::System::Object*> info, ::ArrayW<::System::Type*> types, int32_t numItems) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationInfoEnumerator*>(members, info, types, numItems));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Runtime::Serialization::SerializationInfoEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Runtime::Serialization::SerializationInfoEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationInfoEnumerator::SerializationInfoEnumerator() {}
