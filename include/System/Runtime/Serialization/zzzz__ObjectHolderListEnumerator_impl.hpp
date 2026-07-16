#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectHolderListEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderListEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderListEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolderListEnumerator::*)(::System::Runtime::Serialization::ObjectHolderList*, bool)>(
    &::System::Runtime::Serialization::ObjectHolderListEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b51bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::ObjectHolderList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderListEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(
    &::System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b50b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderListEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ObjectHolder* (::System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(
    &::System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b50b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_isFixupEnumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isFixupEnumerator;
}
constexpr bool const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_isFixupEnumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isFixupEnumerator;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_isFixupEnumerator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isFixupEnumerator = value;
}
constexpr ::System::Runtime::Serialization::ObjectHolderList*& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr ::System::Runtime::Serialization::ObjectHolderList* const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_list(::System::Runtime::Serialization::ObjectHolderList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_list = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_startingVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_startingVersion;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_startingVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_startingVersion;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_startingVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_startingVersion = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_currPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currPos;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_currPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currPos;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_currPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currPos = value;
}
inline void System::Runtime::Serialization::ObjectHolderListEnumerator::_ctor(::System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::ObjectHolderList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, isFixupEnumerator);
}
inline bool System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectHolder*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* System::Runtime::Serialization::ObjectHolderListEnumerator::New_ctor(::System::Runtime::Serialization::ObjectHolderList* list,
                                                                                                                                          bool isFixupEnumerator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(list, isFixupEnumerator));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectHolderListEnumerator::ObjectHolderListEnumerator() {}
