#pragma once
// IWYU pragma private; include "System/Xml/Schema/DoubleLinkAxis.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_impl.hpp"
#include "System/Xml/Schema/zzzz__DoubleLinkAxis_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis.get_Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::Axis* (::System::Xml::Schema::DoubleLinkAxis::*)()>(&::System::Xml::Schema::DoubleLinkAxis::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6312120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(), { "get_Next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis.set_Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DoubleLinkAxis::*)(::MS::Internal::Xml::XPath::Axis*)>(&::System::Xml::Schema::DoubleLinkAxis::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6312128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(), { "set_Next", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::Axis*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DoubleLinkAxis::*)(::MS::Internal::Xml::XPath::Axis*, ::System::Xml::Schema::DoubleLinkAxis*)>(
    &::System::Xml::Schema::DoubleLinkAxis::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6312130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::Axis*>(), ::i2c::type_of<::System::Xml::Schema::DoubleLinkAxis*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis.ConvertTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (*)(::MS::Internal::Xml::XPath::Axis*)>(&::System::Xml::Schema::DoubleLinkAxis::ConvertTree)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6312188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(), { "ConvertTree", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::Axis*>() } })));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::Axis*& System::Xml::Schema::DoubleLinkAxis::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::MS::Internal::Xml::XPath::Axis* const& System::Xml::Schema::DoubleLinkAxis::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::Schema::DoubleLinkAxis::__cordl_internal_set_next(::MS::Internal::Xml::XPath::Axis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
inline ::MS::Internal::Xml::XPath::Axis* System::Xml::Schema::DoubleLinkAxis::get_Next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(), { "get_Next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::Axis*>(this, ___internal_method);
}
inline void System::Xml::Schema::DoubleLinkAxis::set_Next(::MS::Internal::Xml::XPath::Axis* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(), { "set_Next", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::Axis*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::DoubleLinkAxis::_ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::Axis*>(), ::i2c::type_of<::System::Xml::Schema::DoubleLinkAxis*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, inputaxis);
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::DoubleLinkAxis::ConvertTree(::MS::Internal::Xml::XPath::Axis* axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DoubleLinkAxis*>(), { "ConvertTree", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::Axis*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DoubleLinkAxis*>(nullptr, ___internal_method, axis);
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::DoubleLinkAxis::New_ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::DoubleLinkAxis*>(axis, inputaxis));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DoubleLinkAxis::DoubleLinkAxis() {}
