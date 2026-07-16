#pragma once
// IWYU pragma private; include "System/Xml/Schema/UpaException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/Xml/Schema/zzzz__UpaException_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::UpaException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::UpaException::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Schema::UpaException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6317a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::UpaException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::UpaException.get_Particle1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::UpaException::*)()>(&::System::Xml::Schema::UpaException::get_Particle1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::UpaException*>(), { "get_Particle1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::UpaException.get_Particle2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::UpaException::*)()>(&::System::Xml::Schema::UpaException::get_Particle2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::UpaException*>(), { "get_Particle2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Schema::UpaException::__cordl_internal_get_particle1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle1;
}
constexpr ::System::Object* const& System::Xml::Schema::UpaException::__cordl_internal_get_particle1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle1;
}
constexpr void System::Xml::Schema::UpaException::__cordl_internal_set_particle1(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particle1 = value;
}
constexpr ::System::Object*& System::Xml::Schema::UpaException::__cordl_internal_get_particle2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle2;
}
constexpr ::System::Object* const& System::Xml::Schema::UpaException::__cordl_internal_get_particle2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle2;
}
constexpr void System::Xml::Schema::UpaException::__cordl_internal_set_particle2(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particle2 = value;
}
inline void System::Xml::Schema::UpaException::_ctor(::System::Object* particle1, ::System::Object* particle2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::UpaException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle1, particle2);
}
inline ::System::Object* System::Xml::Schema::UpaException::get_Particle1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::UpaException*>(), { "get_Particle1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::UpaException::get_Particle2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::UpaException*>(), { "get_Particle2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Schema::UpaException* System::Xml::Schema::UpaException::New_ctor(::System::Object* particle1, ::System::Object* particle2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::UpaException*>(particle1, particle2));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::UpaException::UpaException() {}
