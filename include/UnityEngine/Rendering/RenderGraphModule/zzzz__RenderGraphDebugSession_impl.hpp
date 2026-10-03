#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphDebugSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDebugSession_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDebugSession_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.AddGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::AddGraph)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6c00fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                           { "AddGraph", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.RemoveGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::RemoveGraph)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c0119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                           { "RemoveGraph", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.AddExecution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(
    ::StringW, ::UnityEngine::EntityId, ::StringW)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::AddExecution)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6c012c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                             { "AddExecution", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.GetRenderGraphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)()>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::GetRenderGraphs)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c01e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { "GetRenderGraphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.GetExecutions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::GetExecutions)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6c01ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                           { "GetExecutions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.GetDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(::StringW, ::UnityEngine::EntityId)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::GetDebugData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c02324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                           { "GetDebugData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.SetDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(
    ::StringW, ::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::SetDebugData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c02400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                            { "SetDebugData",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.DeleteExecutionIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)(
    ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::EntityId>*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::DeleteExecutionIds)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6c024d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                { "DeleteExecutionIds", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EntityId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c01538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer.Invalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::Invalidate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6c015a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { "Invalidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c00e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,
                                                       ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::__cordl_internal_set_m_Container(
    ::System::Collections::Generic::Dictionary_2<::StringW,
                                                 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Container = value;
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::AddGraph(::StringW graphName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                         { "AddGraph", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graphName);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::RemoveGraph(::StringW graphName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                         { "RemoveGraph", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graphName);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::AddExecution(::StringW graphName, ::UnityEngine::EntityId executionId, ::StringW executionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                           { "AddExecution", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graphName, executionId, executionName);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::GetRenderGraphs() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { "GetRenderGraphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::GetExecutions(::StringW graphName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                         { "GetExecutions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>(this, ___internal_method,
                                                                                                                                                                    graphName);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::GetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                                                                         { "GetDebugData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(this, ___internal_method, renderGraph, executionId);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::SetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
          { "SetDebugData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, executionId, data);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::DeleteExecutionIds(::StringW renderGraph,
                                                                                                                      ::System::Collections::Generic::List_1<::UnityEngine::EntityId>* executionIds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(),
                                              { "DeleteExecutionIds", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EntityId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, executionIds);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::Invalidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { "Invalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer::RenderGraphDebugSession_DebugDataContainer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_isActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.get_debugDataContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_debugDataContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c00d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "get_debugDataContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c00d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.RegisterGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RegisterGraph)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c00f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "RegisterGraph", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.UnregisterGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::UnregisterGraph)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c010f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "UnregisterGraph", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.RegisterExecution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)(::StringW, ::UnityEngine::EntityId, ::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RegisterExecution)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c01200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                             { "RegisterExecution", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::Dispose)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6c01400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.InvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::InvalidateData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c0158c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "InvalidateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.add_onRegisteredGraphsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::add_onRegisteredGraphsChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c018bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                           { "add_onRegisteredGraphsChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.remove_onRegisteredGraphsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::remove_onRegisteredGraphsChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c019a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                           { "remove_onRegisteredGraphsChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.add_onDebugDataUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::StringW, ::UnityEngine::EntityId>*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::add_onDebugDataUpdated)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c01a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                             { "add_onDebugDataUpdated", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::EntityId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.remove_onDebugDataUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::StringW, ::UnityEngine::EntityId>*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::remove_onDebugDataUpdated)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c01b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                             { "remove_onDebugDataUpdated", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::EntityId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.get_hasActiveDebugSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_hasActiveDebugSession)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6bf3814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "get_hasActiveDebugSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.get_currentDebugSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_currentDebugSession)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c01ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "get_currentDebugSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.EndSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::EndSession)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c01d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "EndSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.GetRegisteredGraphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::GetRegisteredGraphs)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c01d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "GetRegisteredGraphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.GetExecutions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* (*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::GetExecutions)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c01f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "GetExecutions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.GetDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* (*)(::StringW, ::UnityEngine::EntityId)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::GetDebugData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6bfddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                           { "GetDebugData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.SetDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::SetDebugData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6bfef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                            { "SetDebugData",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.DeleteExecutionIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::EntityId>*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::DeleteExecutionIds)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6bfdd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                { "DeleteExecutionIds", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EntityId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession.RegisterAllLocallyKnownGraphsAndExecutions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RegisterAllLocallyKnownGraphsAndExecutions)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6c02640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "RegisterAllLocallyKnownGraphsAndExecutions", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::__cordl_internal_get__debugDataContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugDataContainer_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::__cordl_internal_get__debugDataContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugDataContainer_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::__cordl_internal_set__debugDataContainer_k__BackingField(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugDataContainer_k__BackingField = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::setStaticF_onRegisteredGraphsChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "onRegisteredGraphsChanged", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::getStaticF_onRegisteredGraphsChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "onRegisteredGraphsChanged", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::setStaticF_onDebugDataUpdated(::System::Action_2<::StringW, ::UnityEngine::EntityId>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::StringW, ::UnityEngine::EntityId>*, "onDebugDataUpdated", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(
      std::forward<::System::Action_2<::StringW, ::UnityEngine::EntityId>*>(value));
}
inline ::System::Action_2<::StringW, ::UnityEngine::EntityId>* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::getStaticF_onDebugDataUpdated() {
  return ::cordl_internals::getStaticField<::System::Action_2<::StringW, ::UnityEngine::EntityId>*, "onDebugDataUpdated", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::setStaticF_s_CurrentDebugSession(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*, "s_CurrentDebugSession",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::getStaticF_s_CurrentDebugSession() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*, "s_CurrentDebugSession",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::setStaticF_s_EmptyRegisteredGraphs(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "s_EmptyRegisteredGraphs", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::getStaticF_s_EmptyRegisteredGraphs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "s_EmptyRegisteredGraphs", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::setStaticF_s_EmptyExecutions(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*, "s_EmptyExecutions",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::getStaticF_s_EmptyExecutions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*, "s_EmptyExecutions",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>();
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_isActive() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_debugDataContainer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "get_debugDataContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RegisterGraph(::StringW graphName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "RegisterGraph", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphName);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::UnregisterGraph(::StringW graphName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "UnregisterGraph", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphName);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RegisterExecution(::StringW graphName, ::UnityEngine::EntityId executionId, ::StringW executionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                           { "RegisterExecution", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphName, executionId, executionName);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::InvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "InvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::add_onRegisteredGraphsChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                         { "add_onRegisteredGraphsChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::remove_onRegisteredGraphsChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                         { "remove_onRegisteredGraphsChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::add_onDebugDataUpdated(::System::Action_2<::StringW, ::UnityEngine::EntityId>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                           { "add_onDebugDataUpdated", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::EntityId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::remove_onDebugDataUpdated(::System::Action_2<::StringW, ::UnityEngine::EntityId>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                           { "remove_onDebugDataUpdated", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::EntityId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_hasActiveDebugSession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "get_hasActiveDebugSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::get_currentDebugSession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "get_currentDebugSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(nullptr, ___internal_method);
}
template <typename TSession>
  requires(::cordl_internals::default_constructor_constraint<TSession>)
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::Create() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "Create", { ::i2c::class_of<TSession>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSession>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::EndSession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "EndSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::GetRegisteredGraphs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "GetRegisteredGraphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*
UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::GetExecutions(::StringW graphName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "GetExecutions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>(nullptr, ___internal_method,
                                                                                                                                                                    graphName);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::GetDebugData(::StringW renderGraph,
                                                                                                                                                            ::UnityEngine::EntityId executionId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                                                                         { "GetDebugData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(nullptr, ___internal_method, renderGraph, executionId);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::SetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
          { "SetDebugData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, executionId, data);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::DeleteExecutionIds(::StringW renderGraph,
                                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::EntityId>* executionIds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(),
                                              { "DeleteExecutionIds", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EntityId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, executionIds);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RegisterAllLocallyKnownGraphsAndExecutions() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>(), { "RegisterAllLocallyKnownGraphsAndExecutions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession::RenderGraphDebugSession() {}
