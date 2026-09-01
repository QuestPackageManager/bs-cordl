#pragma once
// IWYU pragma private; include "System\Xml\Schema\LeafNode.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_impl.hpp"
#include "System/Xml/Schema/zzzz__LeafNode_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::LeafNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::LeafNode::*)(int32_t)>(&::System::Xml::Schema::LeafNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631e9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafNode.get_Pos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::LeafNode::*)()>(&::System::Xml::Schema::LeafNode::get_Pos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631e9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { "get_Pos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafNode.set_Pos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::LeafNode::*)(int32_t)>(&::System::Xml::Schema::LeafNode::set_Pos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631e9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { "set_Pos", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafNode.ExpandTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::LeafNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*,
                                                                                                 ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::LeafNode::ExpandTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631e9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { ::i2c::class_of<::System::Xml::Schema::LeafNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafNode.ConstructPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::LeafNode::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*,
                                                                                                 ::ArrayW<::System::Xml::Schema::BitSet*>)>(&::System::Xml::Schema::LeafNode::ConstructPos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x631e9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { ::i2c::class_of<::System::Xml::Schema::LeafNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafNode.get_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::LeafNode::*)()>(&::System::Xml::Schema::LeafNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631e9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { ::i2c::class_of<::System::Xml::Schema::LeafNode*>(), 6 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::LeafNode::__cordl_internal_get_pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr int32_t const& System::Xml::Schema::LeafNode::__cordl_internal_get_pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr void System::Xml::Schema::LeafNode::__cordl_internal_set_pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pos = value;
}
inline void System::Xml::Schema::LeafNode::_ctor(int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline int32_t System::Xml::Schema::LeafNode::get_Pos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { "get_Pos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::LeafNode::set_Pos(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::LeafNode*>(), { "set_Pos", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::LeafNode::ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::LeafNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::LeafNode::ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::LeafNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstpos, lastpos, followpos);
}
inline bool System::Xml::Schema::LeafNode::get_IsNullable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::LeafNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::LeafNode* System::Xml::Schema::LeafNode::New_ctor(int32_t pos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::LeafNode*>(pos));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::LeafNode::LeafNode() {}
