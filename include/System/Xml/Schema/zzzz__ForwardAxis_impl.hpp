#pragma once
// IWYU pragma private; include "System\Xml\Schema\ForwardAxis.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ForwardAxis_def.hpp"
#include "System/Xml/Schema/zzzz__DoubleLinkAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ForwardAxis.get_RootNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (::System::Xml::Schema::ForwardAxis::*)()>(&::System::Xml::Schema::ForwardAxis::get_RootNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_RootNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ForwardAxis.get_TopNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (::System::Xml::Schema::ForwardAxis::*)()>(&::System::Xml::Schema::ForwardAxis::get_TopNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_TopNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ForwardAxis.get_IsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ForwardAxis::*)()>(&::System::Xml::Schema::ForwardAxis::get_IsAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_IsAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ForwardAxis.get_IsDss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ForwardAxis::*)()>(&::System::Xml::Schema::ForwardAxis::get_IsDss)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_IsDss", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ForwardAxis.get_IsSelfAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ForwardAxis::*)()>(&::System::Xml::Schema::ForwardAxis::get_IsSelfAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_IsSelfAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ForwardAxis._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ForwardAxis::*)(::System::Xml::Schema::DoubleLinkAxis*, bool)>(&::System::Xml::Schema::ForwardAxis::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6317a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DoubleLinkAxis*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::DoubleLinkAxis*& System::Xml::Schema::ForwardAxis::__cordl_internal_get__topNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNode;
}
constexpr ::System::Xml::Schema::DoubleLinkAxis* const& System::Xml::Schema::ForwardAxis::__cordl_internal_get__topNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNode;
}
constexpr void System::Xml::Schema::ForwardAxis::__cordl_internal_set__topNode(::System::Xml::Schema::DoubleLinkAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topNode = value;
}
constexpr ::System::Xml::Schema::DoubleLinkAxis*& System::Xml::Schema::ForwardAxis::__cordl_internal_get__rootNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootNode;
}
constexpr ::System::Xml::Schema::DoubleLinkAxis* const& System::Xml::Schema::ForwardAxis::__cordl_internal_get__rootNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootNode;
}
constexpr void System::Xml::Schema::ForwardAxis::__cordl_internal_set__rootNode(::System::Xml::Schema::DoubleLinkAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootNode = value;
}
constexpr bool& System::Xml::Schema::ForwardAxis::__cordl_internal_get__isAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAttribute;
}
constexpr bool const& System::Xml::Schema::ForwardAxis::__cordl_internal_get__isAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAttribute;
}
constexpr void System::Xml::Schema::ForwardAxis::__cordl_internal_set__isAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAttribute = value;
}
constexpr bool& System::Xml::Schema::ForwardAxis::__cordl_internal_get__isDss() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDss;
}
constexpr bool const& System::Xml::Schema::ForwardAxis::__cordl_internal_get__isDss() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDss;
}
constexpr void System::Xml::Schema::ForwardAxis::__cordl_internal_set__isDss(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDss = value;
}
constexpr bool& System::Xml::Schema::ForwardAxis::__cordl_internal_get__isSelfAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSelfAxis;
}
constexpr bool const& System::Xml::Schema::ForwardAxis::__cordl_internal_get__isSelfAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSelfAxis;
}
constexpr void System::Xml::Schema::ForwardAxis::__cordl_internal_set__isSelfAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSelfAxis = value;
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::ForwardAxis::get_RootNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_RootNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DoubleLinkAxis*>(this, ___internal_method);
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::ForwardAxis::get_TopNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_TopNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DoubleLinkAxis*>(this, ___internal_method);
}
inline bool System::Xml::Schema::ForwardAxis::get_IsAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_IsAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::ForwardAxis::get_IsDss() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_IsDss", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::ForwardAxis::get_IsSelfAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { "get_IsSelfAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::ForwardAxis::_ctor(::System::Xml::Schema::DoubleLinkAxis* axis, bool isdesorself) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ForwardAxis*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DoubleLinkAxis*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, isdesorself);
}
inline ::System::Xml::Schema::ForwardAxis* System::Xml::Schema::ForwardAxis::New_ctor(::System::Xml::Schema::DoubleLinkAxis* axis, bool isdesorself) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ForwardAxis*>(axis, isdesorself));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ForwardAxis::ForwardAxis() {}
