#pragma once
// IWYU pragma private; include "GlobalNamespace\TerminalExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TerminalExtensionMethods_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__CommandNode_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TerminalExtensionMethods.ToConsoleMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConsoleMessage (*)(::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::TerminalExtensionMethods::ToConsoleMessage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32e28b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(),
                                                                                           { "ToConsoleMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalExtensionMethods.Duplicate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandNode* (*)(::GlobalNamespace::CommandNode*)>(&::GlobalNamespace::TerminalExtensionMethods::Duplicate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x32eb498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(), { "Duplicate", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalExtensionMethods.ConvertToCommandNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandNode* (*)(::GlobalNamespace::ConsoleCommandBase*)>(
    &::GlobalNamespace::TerminalExtensionMethods::ConvertToCommandNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32eb7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(),
                                                                                           { "ConvertToCommandNode", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalExtensionMethods.AddArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandNode* (*)(::GlobalNamespace::CommandNode*, ::ArrayW<::GlobalNamespace::ArgumentBase*>)>(
    &::GlobalNamespace::TerminalExtensionMethods::AddArguments)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x32eb860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(),
                                                { "AddArguments", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ArgumentBase*>>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ConsoleMessage GlobalNamespace::TerminalExtensionMethods::ToConsoleMessage(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(),
                                                                                         { "ToConsoleMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConsoleMessage>(nullptr, ___internal_method, message, type);
}
inline ::GlobalNamespace::CommandNode* GlobalNamespace::TerminalExtensionMethods::Duplicate(::GlobalNamespace::CommandNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(), { "Duplicate", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandNode*>(nullptr, ___internal_method, node);
}
inline ::GlobalNamespace::CommandNode* GlobalNamespace::TerminalExtensionMethods::ConvertToCommandNode(::GlobalNamespace::ConsoleCommandBase* command) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(), { "ConvertToCommandNode", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandNode*>(nullptr, ___internal_method, command);
}
inline ::GlobalNamespace::CommandNode* GlobalNamespace::TerminalExtensionMethods::AddArguments(::GlobalNamespace::CommandNode* node, ::ArrayW<::GlobalNamespace::ArgumentBase*> cmdArguments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalExtensionMethods*>(),
                                              { "AddArguments", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ArgumentBase*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandNode*>(nullptr, ___internal_method, node, cmdArguments);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerminalExtensionMethods::TerminalExtensionMethods() {}
