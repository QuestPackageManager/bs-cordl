#pragma once
// IWYU pragma private; include "System\Xml\Schema\InteriorNode.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_impl.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode.get_LeftChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SyntaxTreeNode* (::System::Xml::Schema::InteriorNode::*)()>(&::System::Xml::Schema::InteriorNode::get_LeftChild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631eebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "get_LeftChild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode.set_LeftChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::SyntaxTreeNode*)>(&::System::Xml::Schema::InteriorNode::set_LeftChild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631eec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "set_LeftChild", {}, { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode.get_RightChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SyntaxTreeNode* (::System::Xml::Schema::InteriorNode::*)()>(&::System::Xml::Schema::InteriorNode::get_RightChild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631eecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "get_RightChild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode.set_RightChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::SyntaxTreeNode*)>(&::System::Xml::Schema::InteriorNode::set_RightChild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631eed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "set_RightChild", {}, { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode.ExpandTreeNoRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*,
                                                                                                     ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::InteriorNode::ExpandTreeNoRecursive)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x631eedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(),
                                                             { "ExpandTreeNoRecursive",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::InteriorNode*>(), ::i2c::type_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::Positions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode.ExpandTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*,
                                                                                                     ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::InteriorNode::ExpandTree)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x631f0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { ::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::InteriorNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::InteriorNode::*)()>(&::System::Xml::Schema::InteriorNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631f12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SyntaxTreeNode*& System::Xml::Schema::InteriorNode::__cordl_internal_get_leftChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftChild;
}
constexpr ::System::Xml::Schema::SyntaxTreeNode* const& System::Xml::Schema::InteriorNode::__cordl_internal_get_leftChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftChild;
}
constexpr void System::Xml::Schema::InteriorNode::__cordl_internal_set_leftChild(::System::Xml::Schema::SyntaxTreeNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftChild = value;
}
constexpr ::System::Xml::Schema::SyntaxTreeNode*& System::Xml::Schema::InteriorNode::__cordl_internal_get_rightChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightChild;
}
constexpr ::System::Xml::Schema::SyntaxTreeNode* const& System::Xml::Schema::InteriorNode::__cordl_internal_get_rightChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightChild;
}
constexpr void System::Xml::Schema::InteriorNode::__cordl_internal_set_rightChild(::System::Xml::Schema::SyntaxTreeNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightChild = value;
}
inline ::System::Xml::Schema::SyntaxTreeNode* System::Xml::Schema::InteriorNode::get_LeftChild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "get_LeftChild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SyntaxTreeNode*>(this, ___internal_method);
}
inline void System::Xml::Schema::InteriorNode::set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "set_LeftChild", {}, { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SyntaxTreeNode* System::Xml::Schema::InteriorNode::get_RightChild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "get_RightChild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SyntaxTreeNode*>(this, ___internal_method);
}
inline void System::Xml::Schema::InteriorNode::set_RightChild(::System::Xml::Schema::SyntaxTreeNode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { "set_RightChild", {}, { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::InteriorNode::ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                                     ::System::Xml::Schema::Positions* positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(),
                                                           { "ExpandTreeNoRecursive",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::InteriorNode*>(), ::i2c::type_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::Positions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::InteriorNode::ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::InteriorNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::InteriorNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::InteriorNode* System::Xml::Schema::InteriorNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::InteriorNode*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::InteriorNode::InteriorNode() {}
