#pragma once
// IWYU pragma private; include "System/Xml/Schema/AxisElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__AxisElement_def.hpp"
#include "System/Xml/Schema/zzzz__DoubleLinkAxis_def.hpp"
#include "System/Xml/Schema/zzzz__ForwardAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.get_CurNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (::System::Xml::Schema::AxisElement::*)()>(&::System::Xml::Schema::AxisElement::get_CurNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6311324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(), { "get_CurNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisElement::*)(::System::Xml::Schema::DoubleLinkAxis*, int32_t)>(&::System::Xml::Schema::AxisElement::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631132c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DoubleLinkAxis*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.SetDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisElement::*)(int32_t)>(&::System::Xml::Schema::AxisElement::SetDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(), { "SetDepth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.MoveToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisElement::*)(int32_t, ::System::Xml::Schema::ForwardAxis*)>(&::System::Xml::Schema::AxisElement::MoveToParent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6311344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(), { "MoveToParent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::ForwardAxis*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.MoveToChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AxisElement::*)(::StringW, ::StringW, int32_t, ::System::Xml::Schema::ForwardAxis*)>(
    &::System::Xml::Schema::AxisElement::MoveToChild)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6311458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(),
                            { "MoveToChild", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::ForwardAxis*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::DoubleLinkAxis*& System::Xml::Schema::AxisElement::__cordl_internal_get_curNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr ::System::Xml::Schema::DoubleLinkAxis* const& System::Xml::Schema::AxisElement::__cordl_internal_get_curNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_curNode(::System::Xml::Schema::DoubleLinkAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curNode = value;
}
constexpr int32_t& System::Xml::Schema::AxisElement::__cordl_internal_get_rootDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootDepth;
}
constexpr int32_t const& System::Xml::Schema::AxisElement::__cordl_internal_get_rootDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootDepth;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_rootDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootDepth = value;
}
constexpr int32_t& System::Xml::Schema::AxisElement::__cordl_internal_get_curDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDepth;
}
constexpr int32_t const& System::Xml::Schema::AxisElement::__cordl_internal_get_curDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDepth;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_curDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curDepth = value;
}
constexpr bool& System::Xml::Schema::AxisElement::__cordl_internal_get_isMatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatch;
}
constexpr bool const& System::Xml::Schema::AxisElement::__cordl_internal_get_isMatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatch;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_isMatch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMatch = value;
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::AxisElement::get_CurNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(), { "get_CurNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DoubleLinkAxis*>(this, ___internal_method);
}
inline void System::Xml::Schema::AxisElement::_ctor(::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DoubleLinkAxis*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, depth);
}
inline void System::Xml::Schema::AxisElement::SetDepth(int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(), { "SetDepth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth);
}
inline void System::Xml::Schema::AxisElement::MoveToParent(int32_t depth, ::System::Xml::Schema::ForwardAxis* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(), { "MoveToParent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::ForwardAxis*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth, parent);
}
inline bool System::Xml::Schema::AxisElement::MoveToChild(::StringW name, ::StringW URN, int32_t depth, ::System::Xml::Schema::ForwardAxis* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisElement*>(),
                          { "MoveToChild", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::ForwardAxis*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, URN, depth, parent);
}
inline ::System::Xml::Schema::AxisElement* System::Xml::Schema::AxisElement::New_ctor(::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::AxisElement*>(node, depth));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::AxisElement::AxisElement() {}
