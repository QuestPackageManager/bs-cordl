#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\FixupHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::FixupHolder::*)(int64_t, ::System::Object*, int32_t)>(
    &::System::Runtime::Serialization::FixupHolder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b533b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr int64_t const& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr void System::Runtime::Serialization::FixupHolder::__cordl_internal_set_m_id(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_id = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupInfo;
}
constexpr ::System::Object* const& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupInfo;
}
constexpr void System::Runtime::Serialization::FixupHolder::__cordl_internal_set_m_fixupInfo(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fixupInfo = value;
}
constexpr int32_t& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupType;
}
constexpr int32_t const& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupType;
}
constexpr void System::Runtime::Serialization::FixupHolder::__cordl_internal_set_m_fixupType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fixupType = value;
}
inline void System::Runtime::Serialization::FixupHolder::_ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, fixupInfo, fixupType);
}
inline ::System::Runtime::Serialization::FixupHolder* System::Runtime::Serialization::FixupHolder::New_ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::FixupHolder*>(id, fixupInfo, fixupType));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FixupHolder::FixupHolder() {}
