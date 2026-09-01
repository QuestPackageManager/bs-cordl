#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Date\DateTimeObject.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Date::DateTimeObject::*)(::System::DateTime)>(
    &::Org::BouncyCastle::Utilities::Date::DateTimeObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeObject.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Utilities::Date::DateTimeObject::*)()>(
    &::Org::BouncyCastle::Utilities::Date::DateTimeObject::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362b578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeObject.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Utilities::Date::DateTimeObject::*)()>(&::Org::BouncyCastle::Utilities::Date::DateTimeObject::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x362b580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& Org::BouncyCastle::Utilities::Date::DateTimeObject::__cordl_internal_get_dt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dt;
}
constexpr ::System::DateTime const& Org::BouncyCastle::Utilities::Date::DateTimeObject::__cordl_internal_get_dt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dt;
}
constexpr void Org::BouncyCastle::Utilities::Date::DateTimeObject::__cordl_internal_set_dt(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dt = value;
}
inline void Org::BouncyCastle::Utilities::Date::DateTimeObject::_ctor(::System::DateTime dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::System::DateTime Org::BouncyCastle::Utilities::Date::DateTimeObject::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Utilities::Date::DateTimeObject::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::Utilities::Date::DateTimeObject::New_ctor(::System::DateTime dt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(dt));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject::DateTimeObject() {}
