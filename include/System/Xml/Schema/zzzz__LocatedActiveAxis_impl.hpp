#pragma once
// IWYU pragma private; include "System/Xml/Schema/LocatedActiveAxis.hpp"
#include "System/Xml/Schema/zzzz__ActiveAxis_impl.hpp"
#include "System/Xml/Schema/zzzz__LocatedActiveAxis_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
#include "System/Xml/Schema/zzzz__KeySequence_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::LocatedActiveAxis.get_Column
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::LocatedActiveAxis::*)()>(&::System::Xml::Schema::LocatedActiveAxis::get_Column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LocatedActiveAxis*>(), { "get_Column", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LocatedActiveAxis._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::LocatedActiveAxis::*)(::System::Xml::Schema::Asttree*, ::System::Xml::Schema::KeySequence*, int32_t)>(
    &::System::Xml::Schema::LocatedActiveAxis::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x631654c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LocatedActiveAxis*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::Asttree*>(), ::i2c::type_of<::System::Xml::Schema::KeySequence*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LocatedActiveAxis.Reactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::LocatedActiveAxis::*)(::System::Xml::Schema::KeySequence*)>(
    &::System::Xml::Schema::LocatedActiveAxis::Reactivate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x631657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LocatedActiveAxis*>(), { "Reactivate", {}, { ::i2c::type_of<::System::Xml::Schema::KeySequence*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr int32_t const& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void System::Xml::Schema::LocatedActiveAxis::__cordl_internal_set_column(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
constexpr bool& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_isMatched() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatched;
}
constexpr bool const& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_isMatched() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatched;
}
constexpr void System::Xml::Schema::LocatedActiveAxis::__cordl_internal_set_isMatched(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMatched = value;
}
constexpr ::System::Xml::Schema::KeySequence*& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_Ks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ks;
}
constexpr ::System::Xml::Schema::KeySequence* const& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_Ks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ks;
}
constexpr void System::Xml::Schema::LocatedActiveAxis::__cordl_internal_set_Ks(::System::Xml::Schema::KeySequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Ks = value;
}
inline int32_t System::Xml::Schema::LocatedActiveAxis::get_Column() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LocatedActiveAxis*>(), { "get_Column", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::LocatedActiveAxis::_ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, int32_t column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LocatedActiveAxis*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::Asttree*>(), ::i2c::type_of<::System::Xml::Schema::KeySequence*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astfield, ks, column);
}
inline void System::Xml::Schema::LocatedActiveAxis::Reactivate(::System::Xml::Schema::KeySequence* ks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LocatedActiveAxis*>(), { "Reactivate", {}, { ::i2c::type_of<::System::Xml::Schema::KeySequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ks);
}
inline ::System::Xml::Schema::LocatedActiveAxis* System::Xml::Schema::LocatedActiveAxis::New_ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, int32_t column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::LocatedActiveAxis*>(astfield, ks, column));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::LocatedActiveAxis::LocatedActiveAxis() {}
