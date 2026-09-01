#pragma once
// IWYU pragma private; include "MS\Internal\Xml\XPath\Group.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Group_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Group._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Group::*)(::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Group::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6276dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Group.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Group::*)()>(&::MS::Internal::Xml::XPath::Group::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6276df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Group.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Group::*)()>(&::MS::Internal::Xml::XPath::Group::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6276dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Group::__cordl_internal_get__groupNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupNode;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Group::__cordl_internal_get__groupNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupNode;
}
constexpr void MS::Internal::Xml::XPath::Group::__cordl_internal_set__groupNode(::MS::Internal::Xml::XPath::AstNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupNode = value;
}
inline void MS::Internal::Xml::XPath::Group::_ctor(::MS::Internal::Xml::XPath::AstNode* groupNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupNode);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Group::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Group::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::Group*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Group* MS::Internal::Xml::XPath::Group::New_ctor(::MS::Internal::Xml::XPath::AstNode* groupNode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Group*>(groupNode));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Group::Group() {}
