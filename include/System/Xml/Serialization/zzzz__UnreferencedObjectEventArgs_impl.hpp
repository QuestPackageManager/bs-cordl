#pragma once
// IWYU pragma private; include "System/Xml/Serialization/UnreferencedObjectEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::UnreferencedObjectEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::UnreferencedObjectEventArgs::*)(::System::Object*, ::StringW)>(
    &::System::Xml::Serialization::UnreferencedObjectEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62e622c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventArgs*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Serialization::UnreferencedObjectEventArgs::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr ::System::Object* const& System::Xml::Serialization::UnreferencedObjectEventArgs::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void System::Xml::Serialization::UnreferencedObjectEventArgs::__cordl_internal_set_o(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
constexpr ::StringW& System::Xml::Serialization::UnreferencedObjectEventArgs::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& System::Xml::Serialization::UnreferencedObjectEventArgs::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void System::Xml::Serialization::UnreferencedObjectEventArgs::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
inline void System::Xml::Serialization::UnreferencedObjectEventArgs::_ctor(::System::Object* o, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventArgs*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, id);
}
inline ::System::Xml::Serialization::UnreferencedObjectEventArgs* System::Xml::Serialization::UnreferencedObjectEventArgs::New_ctor(::System::Object* o, ::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::UnreferencedObjectEventArgs*>(o, id));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::UnreferencedObjectEventArgs::UnreferencedObjectEventArgs() {}
