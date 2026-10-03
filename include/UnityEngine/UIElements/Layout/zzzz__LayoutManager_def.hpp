#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutManager)
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::UIElements::Layout {
class LayoutBaselineFunction;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutConfig;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataAccess;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutManager_SharedManagerState;
}
namespace UnityEngine::UIElements::Layout {
class LayoutManager___c;
}
namespace UnityEngine::UIElements::Layout {
class LayoutMeasureFunction;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
namespace UnityEngine::UIElements::Layout {
template <typename T> class ManagedObjectStore_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutManager_SharedManagerState;
}
namespace UnityEngine::UIElements::Layout {
class LayoutManager;
}
namespace UnityEngine::UIElements::Layout {
class LayoutManager___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState);
MARK_REF_T(::UnityEngine::UIElements::Layout::LayoutManager*);
MARK_REF_T(::UnityEngine::UIElements::Layout::LayoutManager___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState, "UnityEngine.UIElements.Layout", "LayoutManager/SharedManagerState");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutManager*, "UnityEngine.UIElements.Layout", "LayoutManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutManager___c*, "UnityEngine.UIElements.Layout", "LayoutManager/<>c");
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutManager/SharedManagerState
struct CORDL_TYPE LayoutManager_SharedManagerState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutManager_SharedManagerState_Unwrapped
  enum struct __LayoutManager_SharedManagerState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_Initialized = static_cast<int32_t>(0x1),
    __E_Shutdown = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutManager_SharedManagerState_Unwrapped() const noexcept {
    return static_cast<__LayoutManager_SharedManagerState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutManager_SharedManagerState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr LayoutManager_SharedManagerState(int32_t value__) noexcept;

  /// @brief Field Initialized value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState const Initialized;

  /// @brief Field Shutdown value: I32(2)
  static ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState const Shutdown;

  /// @brief Field Uninitialized value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState const Uninitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5512 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutManager/<>c
class CORDL_TYPE LayoutManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Layout::LayoutManager___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::EventHandler* __9__9_0;

  static inline ::UnityEngine::UIElements::Layout::LayoutManager___c* New_ctor();

  /// @brief Method <Initialize>b__9_0, addr 0x719510c, size 0x54, virtual false, abstract: false, final false
  inline void _Initialize_b__9_0(::System::Object* _, ::System::EventArgs* __);

  /// @brief Method .ctor, addr 0x7195108, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager___c* getStaticF___9();

  static inline ::System::EventHandler* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::Layout::LayoutManager___c* value);

  static inline void setStaticF___9__9_0(::System::EventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutManager___c(LayoutManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutManager___c(LayoutManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5513 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutManager___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.Layout.LayoutDataStore, UnityEngine.UIElements.Layout.LayoutHandle,
// UnityEngine.UIElements.Layout.LayoutManager::SharedManagerState
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutManager
class CORDL_TYPE LayoutManager : public ::System::Object {
public:
  // Declarations
  using SharedManagerState = ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState;

  using __c = ::UnityEngine::UIElements::Layout::LayoutManager___c;

  /// @brief Field m_CollectMarker, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CollectMarker, put = __cordl_internal_set_m_CollectMarker)) ::Unity::Profiling::ProfilerMarker m_CollectMarker;

  /// @brief Field m_Configs, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Configs, put = __cordl_internal_set_m_Configs)) ::UnityEngine::UIElements::Layout::LayoutDataStore m_Configs;

  /// @brief Field m_DefaultConfig, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultConfig, put = __cordl_internal_set_m_DefaultConfig)) ::UnityEngine::UIElements::Layout::LayoutHandle m_DefaultConfig;

  /// @brief Field m_HighMark, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HighMark, put = __cordl_internal_set_m_HighMark)) int32_t m_HighMark;

  /// @brief Field m_Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_ManagedBaselineFunctions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManagedBaselineFunctions,
                      put = __cordl_internal_set_m_ManagedBaselineFunctions)) ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>*
      m_ManagedBaselineFunctions;

  /// @brief Field m_ManagedMeasureFunctions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManagedMeasureFunctions,
                      put = __cordl_internal_set_m_ManagedMeasureFunctions)) ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>*
      m_ManagedMeasureFunctions;

  /// @brief Field m_ManagedOwners, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManagedOwners,
                      put = __cordl_internal_set_m_ManagedOwners)) ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>* m_ManagedOwners;

  /// @brief Field m_Nodes, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::UnityEngine::UIElements::Layout::LayoutDataStore m_Nodes;

  /// @brief Field m_NodesToFree, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodesToFree,
                      put = __cordl_internal_set_m_NodesToFree)) ::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>* m_NodesToFree;

  /// @brief Field s_AppDomainUnloadRegistered, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_AppDomainUnloadRegistered, put = setStaticF_s_AppDomainUnloadRegistered)) bool s_AppDomainUnloadRegistered;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState s_Initialized;

  /// @brief Field s_Managers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Managers, put = setStaticF_s_Managers)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* s_Managers;

  /// @brief Field s_SharedInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SharedInstance, put = setStaticF_s_SharedInstance)) ::UnityEngine::UIElements::Layout::LayoutManager* s_SharedInstance;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Collect, addr 0x71947a8, size 0xe4, virtual false, abstract: false, final false
  inline void Collect();

  /// @brief Method CreateConfig, addr 0x7193f10, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutConfig CreateConfig();

  /// @brief Method CreateNode, addr 0x71940f8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutNode CreateNode();

  /// @brief Method CreateNodeInternal, addr 0x719412c, size 0x2c8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutNode CreateNodeInternal(::UnityEngine::UIElements::Layout::LayoutHandle configHandle);

  /// @brief Method DestroyConfig, addr 0x71940bc, size 0x3c, virtual false, abstract: false, final false
  inline void DestroyConfig(::by_ref<::UnityEngine::UIElements::Layout::LayoutConfig> config);

  /// @brief Method Dispose, addr 0x7193558, size 0x228, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnqueueNodeForRecycling, addr 0x7194724, size 0x84, virtual false, abstract: false, final false
  inline void EnqueueNodeForRecycling(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node);

  /// @brief Method FreeNode, addr 0x719446c, size 0x234, virtual false, abstract: false, final false
  inline void FreeNode(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetAccess, addr 0x7193ff0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutDataAccess GetAccess();

  /// @brief Method GetBaselineFunction, addr 0x7194cb0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* GetBaselineFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetDefaultConfig, addr 0x7194054, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutConfig GetDefaultConfig();

  /// @brief Method GetManager, addr 0x7193788, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutManager* GetManager(int32_t index);

  /// @brief Method GetMeasureFunction, addr 0x7194b50, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* GetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetOwner, addr 0x719488c, size 0x1a0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method Initialize, addr 0x71932ac, size 0x1a8, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager* New_ctor(::Unity::Collections::Allocator allocator);

  static inline ::UnityEngine::UIElements::Layout::LayoutManager* New_ctor(::Unity::Collections::Allocator allocator, int32_t initialNodeCapacity);

  /// @brief Method SetMeasureFunction, addr 0x7194bf8, size 0xb8, virtual false, abstract: false, final false
  inline void SetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value);

  /// @brief Method SetOwner, addr 0x7194a2c, size 0x124, virtual false, abstract: false, final false
  inline void SetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method Shutdown, addr 0x71934c0, size 0x98, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method TryRecycleNodes, addr 0x71946a0, size 0x84, virtual false, abstract: false, final false
  inline void TryRecycleNodes();

  /// @brief Method TryRecycleSingleNode, addr 0x71943f4, size 0x78, virtual false, abstract: false, final false
  inline void TryRecycleSingleNode();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_CollectMarker() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_CollectMarker();

  constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore const& __cordl_internal_get_m_Configs() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore& __cordl_internal_get_m_Configs();

  constexpr ::UnityEngine::UIElements::Layout::LayoutHandle const& __cordl_internal_get_m_DefaultConfig() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutHandle& __cordl_internal_get_m_DefaultConfig();

  constexpr int32_t const& __cordl_internal_get_m_HighMark() const;

  constexpr int32_t& __cordl_internal_get_m_HighMark();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* const& __cordl_internal_get_m_ManagedBaselineFunctions() const;

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>*& __cordl_internal_get_m_ManagedBaselineFunctions();

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* const& __cordl_internal_get_m_ManagedMeasureFunctions() const;

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>*& __cordl_internal_get_m_ManagedMeasureFunctions();

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>* const& __cordl_internal_get_m_ManagedOwners() const;

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>*& __cordl_internal_get_m_ManagedOwners();

  constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore const& __cordl_internal_get_m_Nodes() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore& __cordl_internal_get_m_Nodes();

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>* const& __cordl_internal_get_m_NodesToFree() const;

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>*& __cordl_internal_get_m_NodesToFree();

  constexpr void __cordl_internal_set_m_CollectMarker(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_Configs(::UnityEngine::UIElements::Layout::LayoutDataStore value);

  constexpr void __cordl_internal_set_m_DefaultConfig(::UnityEngine::UIElements::Layout::LayoutHandle value);

  constexpr void __cordl_internal_set_m_HighMark(int32_t value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_ManagedBaselineFunctions(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* value);

  constexpr void __cordl_internal_set_m_ManagedMeasureFunctions(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* value);

  constexpr void __cordl_internal_set_m_ManagedOwners(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>* value);

  constexpr void __cordl_internal_set_m_Nodes(::UnityEngine::UIElements::Layout::LayoutDataStore value);

  constexpr void __cordl_internal_set_m_NodesToFree(::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>* value);

  /// @brief Method .ctor, addr 0x7193454, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x7193864, size 0x6ac, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator, int32_t initialNodeCapacity);

  static inline bool getStaticF_s_AppDomainUnloadRegistered();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState getStaticF_s_Initialized();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* getStaticF_s_Managers();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager* getStaticF_s_SharedInstance();

  /// @brief Method get_DefaultCapacity, addr 0x7193780, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_DefaultCapacity();

  /// @brief Method get_IsSharedManagerCreated, addr 0x71931e8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_IsSharedManagerCreated();

  /// @brief Method get_SharedManager, addr 0x719324c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutManager* get_SharedManager();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_AppDomainUnloadRegistered(bool value);

  static inline void setStaticF_s_Initialized(::UnityEngine::UIElements::Layout::LayoutManager_SharedManagerState value);

  static inline void setStaticF_s_Managers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* value);

  static inline void setStaticF_s_SharedInstance(::UnityEngine::UIElements::Layout::LayoutManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutManager(LayoutManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutManager(LayoutManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5514 };

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_Nodes, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore ___m_Nodes;

  /// @brief Field m_Configs, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore ___m_Configs;

  /// @brief Field m_NodesToFree, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<::UnityEngine::UIElements::Layout::LayoutHandle>* ___m_NodesToFree;

  /// @brief Field m_DefaultConfig, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle ___m_DefaultConfig;

  /// @brief Field m_ManagedMeasureFunctions, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* ___m_ManagedMeasureFunctions;

  /// @brief Field m_ManagedBaselineFunctions, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* ___m_ManagedBaselineFunctions;

  /// @brief Field m_ManagedOwners, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::Runtime::InteropServices::GCHandle>* ___m_ManagedOwners;

  /// @brief Field m_CollectMarker, offset: 0x70, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_CollectMarker;

  /// @brief Field m_HighMark, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_HighMark;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_Nodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_Configs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_NodesToFree) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_DefaultConfig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_ManagedMeasureFunctions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_ManagedBaselineFunctions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_ManagedOwners) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_CollectMarker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_HighMark) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutManager) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
