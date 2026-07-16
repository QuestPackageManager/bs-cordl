#pragma once
// IWYU pragma private; include "System/Reflection/LocalVariableInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__LocalVariableInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::LocalVariableInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::LocalVariableInfo::*)()>(&::System::Reflection::LocalVariableInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8895c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::LocalVariableInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::LocalVariableInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::LocalVariableInfo::*)()>(&::System::Reflection::LocalVariableInfo::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b88960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::LocalVariableInfo*>(), { ::i2c::class_of<::System::Reflection::LocalVariableInfo*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Reflection::LocalVariableInfo::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Reflection::LocalVariableInfo::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Reflection::LocalVariableInfo::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr bool& System::Reflection::LocalVariableInfo::__cordl_internal_get_is_pinned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_pinned;
}
constexpr bool const& System::Reflection::LocalVariableInfo::__cordl_internal_get_is_pinned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_pinned;
}
constexpr void System::Reflection::LocalVariableInfo::__cordl_internal_set_is_pinned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_pinned = value;
}
constexpr uint16_t& System::Reflection::LocalVariableInfo::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr uint16_t const& System::Reflection::LocalVariableInfo::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void System::Reflection::LocalVariableInfo::__cordl_internal_set_position(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline void System::Reflection::LocalVariableInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::LocalVariableInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Reflection::LocalVariableInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::LocalVariableInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::LocalVariableInfo* System::Reflection::LocalVariableInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::LocalVariableInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::LocalVariableInfo::LocalVariableInfo() {}
