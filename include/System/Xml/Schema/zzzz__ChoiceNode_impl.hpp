#pragma once
// IWYU pragma private; include "System\Xml\Schema\ChoiceNode.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_impl.hpp"
#include "System/Xml/Schema/zzzz__ChoiceNode_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.ConstructChildPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::SyntaxTreeNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*,
                                                                ::ArrayW<::System::Xml::Schema::BitSet*>)>(&::System::Xml::Schema::ChoiceNode::ConstructChildPos)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x631f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(),
                                                             { "ConstructChildPos",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.ConstructPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ChoiceNode::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*,
                                                                                                   ::ArrayW<::System::Xml::Schema::BitSet*>)>(&::System::Xml::Schema::ChoiceNode::ConstructPos)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x631f6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), { ::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.get_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ChoiceNode::*)()>(&::System::Xml::Schema::ChoiceNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x631f810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), { ::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.ExpandTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ChoiceNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*,
                                                                                                   ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::ChoiceNode::ExpandTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631f8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), { ::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ChoiceNode::*)()>(&::System::Xml::Schema::ChoiceNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631ee48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::ChoiceNode::ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* child, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                                               ::ArrayW<::System::Xml::Schema::BitSet*> followpos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(),
                                                           { "ConstructChildPos",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, child, firstpos, lastpos, followpos);
}
inline void System::Xml::Schema::ChoiceNode::ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstpos, lastpos, followpos);
}
inline bool System::Xml::Schema::ChoiceNode::get_IsNullable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::ChoiceNode::ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::ChoiceNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChoiceNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::ChoiceNode* System::Xml::Schema::ChoiceNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ChoiceNode*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ChoiceNode::ChoiceNode() {}
