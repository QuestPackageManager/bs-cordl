#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandManipulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandManipulator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.ReplaceHeadCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*,
                                                                ::UnityEngine::UIElements::UIR::EntryProcessor*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::ReplaceHeadCommands)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x7163050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "ReplaceHeadCommands",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.ReplaceTailCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*,
                                                                ::UnityEngine::UIElements::UIR::EntryProcessor*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::ReplaceTailCommands)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x71632e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "ReplaceTailCommands",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.FindPrevCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (*)(::UnityEngine::UIElements::UIR::RenderData*, bool)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::FindPrevCommand)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7163480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "FindPrevCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.FindHeadCommandInsertionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(
        &::UnityEngine::UIElements::UIR::CommandManipulator::FindHeadCommandInsertionPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x7163234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                { "FindHeadCommandInsertionPoint",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.FindTailCommandInsertionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>)>(
        &::UnityEngine::UIElements::UIR::CommandManipulator::FindTailCommandInsertionPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x71633d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                { "FindTailCommandInsertionPoint",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.RemoveChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTree*, ::UnityEngine::UIElements::UIR::RenderChainCommand*,
                                                                ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::RemoveChain)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x716313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "RemoveChain",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.ResetCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::ResetCommands)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x71634d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                            { "ResetCommands", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.InjectCommandInBetween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, bool, ::UnityEngine::UIElements::UIR::RenderChainCommand*,
                                                                ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::InjectCommandInBetween)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x7163790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                { "InjectCommandInBetween",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.DisableElementRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::CommandManipulator::DisableElementRendering)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x716383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                            { "DisableElementRendering",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandManipulator.RemoveSingleCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*,
                                                                ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::CommandManipulator::RemoveSingleCommand)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x7163a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                             { "RemoveSingleCommand",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::CommandManipulator::ReplaceHeadCommands(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                  ::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::EntryProcessor* processor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "ReplaceHeadCommands",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, processor);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::ReplaceTailCommands(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                  ::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::EntryProcessor* processor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "ReplaceTailCommands",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, processor);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::CommandManipulator::FindPrevCommand(::UnityEngine::UIElements::UIR::RenderData* candidate,
                                                                                                                             bool searchFromHead) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "FindPrevCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(nullptr, ___internal_method, candidate, searchFromHead);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::FindHeadCommandInsertionPoint(::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                              { "FindHeadCommandInsertionPoint",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, prev, next);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::FindTailCommandInsertionPoint(::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                                                            ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                              { "FindTailCommandInsertionPoint",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, prev, next);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::RemoveChain(::UnityEngine::UIElements::UIR::RenderTree* renderTree, ::UnityEngine::UIElements::UIR::RenderChainCommand* first,
                                                                          ::UnityEngine::UIElements::UIR::RenderChainCommand* last) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "RemoveChain",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTree, first, last);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::ResetCommands(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                            ::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                          { "ResetCommands", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd, bool isHeadCommand,
                                                                                     ::UnityEngine::UIElements::UIR::RenderChainCommand* prev,
                                                                                     ::UnityEngine::UIElements::UIR::RenderChainCommand* next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                              { "InjectCommandInBetween",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, isHeadCommand, prev, next);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::DisableElementRendering(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                      ::UnityEngine::UIElements::VisualElement* ve, bool renderingDisabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                          { "DisableElementRendering",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, ve, renderingDisabled);
}
inline void UnityEngine::UIElements::UIR::CommandManipulator::RemoveSingleCommand(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                  ::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandManipulator*>(),
                                                           { "RemoveSingleCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CommandManipulator::CommandManipulator() {}
