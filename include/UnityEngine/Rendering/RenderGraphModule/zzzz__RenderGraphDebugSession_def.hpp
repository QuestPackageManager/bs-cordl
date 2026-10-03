#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphDebugSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RenderGraphDebugSession)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugSession_DebugDataContainer;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugExecutionItem;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugSession;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugSession_DebugDataContainer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugSession");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDebugSession/DebugDataContainer");
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugSession/DebugDataContainer
class CORDL_TYPE RenderGraphDebugSession_DebugDataContainer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>* m_Container;

  /// @brief Method AddExecution, addr 0x6c012c0, size 0x140, virtual false, abstract: false, final false
  inline bool AddExecution(::StringW graphName, ::UnityEngine::EntityId executionId, ::StringW executionName);

  /// @brief Method AddGraph, addr 0x6c00fcc, size 0x12c, virtual false, abstract: false, final false
  inline bool AddGraph(::StringW graphName);

  /// @brief Method Clear, addr 0x6c01538, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DeleteExecutionIds, addr 0x6c024d4, size 0x16c, virtual false, abstract: false, final false
  inline void DeleteExecutionIds(::StringW renderGraph, ::System::Collections::Generic::List_1<::UnityEngine::EntityId>* executionIds);

  /// @brief Method GetDebugData, addr 0x6c02324, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* GetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId);

  /// @brief Method GetExecutions, addr 0x6c01ff8, size 0x32c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* GetExecutions(::StringW graphName);

  /// @brief Method GetRenderGraphs, addr 0x6c01e70, size 0xac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetRenderGraphs();

  /// @brief Method Invalidate, addr 0x6c015a0, size 0x31c, virtual false, abstract: false, final false
  inline void Invalidate();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* New_ctor();

  /// @brief Method RemoveGraph, addr 0x6c0119c, size 0x64, virtual false, abstract: false, final false
  inline bool RemoveGraph(::StringW graphName);

  /// @brief Method SetDebugData, addr 0x6c02400, size 0xd4, virtual false, abstract: false, final false
  inline void SetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* data);

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>* const&
  __cordl_internal_get_m_Container() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW,
                                                         ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>*&
  __cordl_internal_get_m_Container();

  constexpr void __cordl_internal_set_m_Container(
      ::System::Collections::Generic::Dictionary_2<::StringW,
                                                   ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>* value);

  /// @brief Method .ctor, addr 0x6c00e90, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugSession_DebugDataContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugSession_DebugDataContainer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugSession_DebugDataContainer(RenderGraphDebugSession_DebugDataContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugSession_DebugDataContainer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugSession_DebugDataContainer(RenderGraphDebugSession_DebugDataContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9308 };

  /// @brief Field m_Container, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*>*
      ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer, ___m_Container) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugSession
class CORDL_TYPE RenderGraphDebugSession : public ::System::Object {
public:
  // Declarations
  using DebugDataContainer = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer;

  /// @brief Field <debugDataContainer>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__debugDataContainer_k__BackingField,
      put = __cordl_internal_set__debugDataContainer_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* _debugDataContainer_k__BackingField;

  __declspec(property(get = get_debugDataContainer)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* debugDataContainer;

  __declspec(property(get = get_isActive)) bool isActive;

  /// @brief Field onDebugDataUpdated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDebugDataUpdated, put = setStaticF_onDebugDataUpdated)) ::System::Action_2<::StringW, ::UnityEngine::EntityId>* onDebugDataUpdated;

  /// @brief Field onRegisteredGraphsChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onRegisteredGraphsChanged, put = setStaticF_onRegisteredGraphsChanged)) ::System::Action* onRegisteredGraphsChanged;

  /// @brief Field s_CurrentDebugSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentDebugSession, put = setStaticF_s_CurrentDebugSession)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* s_CurrentDebugSession;

  /// @brief Field s_EmptyExecutions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyExecutions,
                      put = setStaticF_s_EmptyExecutions)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* s_EmptyExecutions;

  /// @brief Field s_EmptyRegisteredGraphs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyRegisteredGraphs, put = setStaticF_s_EmptyRegisteredGraphs)) ::System::Collections::Generic::List_1<::StringW>* s_EmptyRegisteredGraphs;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSession>
    requires(::cordl_internals::default_constructor_constraint<TSession>)
  static inline void Create();

  /// @brief Method DeleteExecutionIds, addr 0x6bfdd24, size 0xb4, virtual false, abstract: false, final false
  static inline void DeleteExecutionIds(::StringW renderGraph, ::System::Collections::Generic::List_1<::UnityEngine::EntityId>* executionIds);

  /// @brief Method Dispose, addr 0x6c01400, size 0x138, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method EndSession, addr 0x6c01d00, size 0x9c, virtual false, abstract: false, final false
  static inline void EndSession();

  /// @brief Method GetDebugData, addr 0x6bfddd8, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* GetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId);

  /// @brief Method GetExecutions, addr 0x6c01f1c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* GetExecutions(::StringW graphName);

  /// @brief Method GetRegisteredGraphs, addr 0x6c01d9c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetRegisteredGraphs();

  /// @brief Method InvalidateData, addr 0x6c0158c, size 0x14, virtual false, abstract: false, final false
  inline void InvalidateData();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* New_ctor();

  /// @brief Method RegisterAllLocallyKnownGraphsAndExecutions, addr 0x6c02640, size 0x368, virtual false, abstract: false, final false
  inline void RegisterAllLocallyKnownGraphsAndExecutions();

  /// @brief Method RegisterExecution, addr 0x6c01200, size 0xc0, virtual false, abstract: false, final false
  inline void RegisterExecution(::StringW graphName, ::UnityEngine::EntityId executionId, ::StringW executionName);

  /// @brief Method RegisterGraph, addr 0x6c00f28, size 0xa4, virtual false, abstract: false, final false
  inline void RegisterGraph(::StringW graphName);

  /// @brief Method SetDebugData, addr 0x6bfef40, size 0xc4, virtual false, abstract: false, final false
  static inline void SetDebugData(::StringW renderGraph, ::UnityEngine::EntityId executionId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* data);

  /// @brief Method UnregisterGraph, addr 0x6c010f8, size 0xa4, virtual false, abstract: false, final false
  inline void UnregisterGraph(::StringW graphName);

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* const& __cordl_internal_get__debugDataContainer_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer*& __cordl_internal_get__debugDataContainer_k__BackingField();

  constexpr void __cordl_internal_set__debugDataContainer_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* value);

  /// @brief Method .ctor, addr 0x6c00d3c, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_onDebugDataUpdated, addr 0x6c01a94, size 0x108, virtual false, abstract: false, final false
  static inline void add_onDebugDataUpdated(::System::Action_2<::StringW, ::UnityEngine::EntityId>* value);

  /// [CompilerGenerated]
  /// @brief Method add_onRegisteredGraphsChanged, addr 0x6c018bc, size 0xec, virtual false, abstract: false, final false
  static inline void add_onRegisteredGraphsChanged(::System::Action* value);

  static inline ::System::Action_2<::StringW, ::UnityEngine::EntityId>* getStaticF_onDebugDataUpdated();

  static inline ::System::Action* getStaticF_onRegisteredGraphsChanged();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* getStaticF_s_CurrentDebugSession();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* getStaticF_s_EmptyExecutions();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_s_EmptyRegisteredGraphs();

  /// @brief Method get_currentDebugSession, addr 0x6c01ca4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* get_currentDebugSession();

  /// [CompilerGenerated]
  /// @brief Method get_debugDataContainer, addr 0x6c00d34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* get_debugDataContainer();

  /// @brief Method get_hasActiveDebugSession, addr 0x6bf3814, size 0x74, virtual false, abstract: false, final false
  static inline bool get_hasActiveDebugSession();

  /// @brief Method get_isActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isActive();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_onDebugDataUpdated, addr 0x6c01b9c, size 0x108, virtual false, abstract: false, final false
  static inline void remove_onDebugDataUpdated(::System::Action_2<::StringW, ::UnityEngine::EntityId>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onRegisteredGraphsChanged, addr 0x6c019a8, size 0xec, virtual false, abstract: false, final false
  static inline void remove_onRegisteredGraphsChanged(::System::Action* value);

  static inline void setStaticF_onDebugDataUpdated(::System::Action_2<::StringW, ::UnityEngine::EntityId>* value);

  static inline void setStaticF_onRegisteredGraphsChanged(::System::Action* value);

  static inline void setStaticF_s_CurrentDebugSession(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession* value);

  static inline void setStaticF_s_EmptyExecutions(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>* value);

  static inline void setStaticF_s_EmptyRegisteredGraphs(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugSession", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugSession(RenderGraphDebugSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugSession", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugSession(RenderGraphDebugSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9309 };

  /// [CompilerGenerated]
  /// @brief Field <debugDataContainer>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession_DebugDataContainer* ____debugDataContainer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession, ____debugDataContainer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugSession) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
