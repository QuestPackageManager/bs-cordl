#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\CommandManipulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandManipulator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.IsParentOrAncestorOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::IsParentOrAncestorOf)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6cd4d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                            { "IsParentOrAncestorOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.ReplaceCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*,
                                                                ::UnityEngine::UIElements::UIR::EntryProcessor*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::ReplaceCommands)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6cd4d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "ReplaceCommands",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.FindHeadCommandInsertionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(
        &::UnityEngine::UIElements::UIR::CommandManipulator::FindHeadCommandInsertionPoint)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6cd52dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                { "FindHeadCommandInsertionPoint",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.FindTailCommandInsertionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(
        &::UnityEngine::UIElements::UIR::CommandManipulator::FindTailCommandInsertionPoint)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6cd5458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                { "FindTailCommandInsertionPoint",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.RemoveChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::RenderChainCommand*,
                                                                ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::RemoveChain)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cd51e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "RemoveChain",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.ResetCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::ResetCommands)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6cd4f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                         { "ResetCommands", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.InjectCommandInBetween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::RenderChainCommand*,
                                                                ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::InjectCommandInBetween)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6cd553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                { "InjectCommandInBetween",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.DisableElementRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::DisableElementRendering)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6cd55e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                         { "DisableElementRendering",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.RemoveSingleCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*,
                                                                ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::RemoveSingleCommand)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6cd581c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "RemoveSingleCommand",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UIR::CommandManipulator::IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* child) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                       { "IsParentOrAncestorOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve, child);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::ReplaceCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                              ::UnityEngine::UIElements::UIR::EntryProcessor* processor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "ReplaceCommands",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, processor);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::FindHeadCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                              { "FindHeadCommandInsertionPoint",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, prev, next);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::FindTailCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                              { "FindTailCommandInsertionPoint",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, prev, next);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::RemoveChain(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* first,
                                                                          ::UnityEngine::UIElements::UIR::RenderChainCommand* last) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "RemoveChain",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, first, last);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::ResetCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                       { "ResetCommands", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                                                                     ::UnityEngine::UIElements::UIR::RenderChainCommand* prev,
                                                                                     ::UnityEngine::UIElements::UIR::RenderChainCommand* next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                              { "InjectCommandInBetween",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, cmd, prev, next);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::DisableElementRendering(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                      bool renderingDisabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
          { "DisableElementRendering", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, renderingDisabled);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::RemoveSingleCommand(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                  ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "RemoveSingleCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CommandManipulator::CommandManipulator() {}
