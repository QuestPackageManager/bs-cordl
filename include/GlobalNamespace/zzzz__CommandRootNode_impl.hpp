#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandRootNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CommandRootNode_def.hpp"
#include "GlobalNamespace/zzzz__CommandNode_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandRootNode.IntegrateCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandRootNode::*)(::GlobalNamespace::ConsoleCommandBase*)>(&::GlobalNamespace::CommandRootNode::IntegrateCommand)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x32cacf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandRootNode*>(), { "IntegrateCommand", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandRootNode.FindAutocompleteNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::CommandNode*> (::GlobalNamespace::CommandRootNode::*)(::StringW, bool)>(
    &::GlobalNamespace::CommandRootNode::FindAutocompleteNodes)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x32cae08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandRootNode*>(), { "FindAutocompleteNodes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandRootNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandRootNode::*)()>(&::GlobalNamespace::CommandRootNode::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32caf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandRootNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::CommandNode*>*& GlobalNamespace::CommandRootNode::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::CommandNode*>* const& GlobalNamespace::CommandRootNode::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void GlobalNamespace::CommandRootNode::__cordl_internal_set_nodes(::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::CommandNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodes = value;
}
inline void GlobalNamespace::CommandRootNode::IntegrateCommand(::GlobalNamespace::ConsoleCommandBase* newCommand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandRootNode*>(), { "IntegrateCommand", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCommand);
}
inline ::ArrayW<::GlobalNamespace::CommandNode*> GlobalNamespace::CommandRootNode::FindAutocompleteNodes(::StringW input, bool exact) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandRootNode*>(), { "FindAutocompleteNodes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::CommandNode*>>(this, ___internal_method, input, exact);
}
inline void GlobalNamespace::CommandRootNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandRootNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandRootNode* GlobalNamespace::CommandRootNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandRootNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandRootNode::CommandRootNode() {}
