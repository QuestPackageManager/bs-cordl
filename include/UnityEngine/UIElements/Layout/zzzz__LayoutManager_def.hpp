#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
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
namespace System {
template <typename T> class WeakReference_1;
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
class LayoutManager;
}
namespace UnityEngine::UIElements::Layout {
class LayoutManager___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutManager);
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutManager___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutManager/<>c
class CORDL_TYPE LayoutManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Layout::LayoutManager___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::EventHandler* __9__7_0;

  static inline ::UnityEngine::UIElements::Layout::LayoutManager___c* New_ctor();

  /// @brief Method <Initialize>b__7_0, addr 0x6acb718, size 0x78, virtual false, abstract: false, final false
  inline void _Initialize_b__7_0(::System::Object* _, ::System::EventArgs* __);

  /// @brief Method .ctor, addr 0x6acb714, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager___c* getStaticF___9();

  static inline ::System::EventHandler* getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::Layout::LayoutManager___c* value);

  static inline void setStaticF___9__7_0(::System::EventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutManager___c(LayoutManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutManager___c(LayoutManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutManager___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies System.Object, UnityEngine.UIElements.Layout.LayoutDataStore, UnityEngine.UIElements.Layout.LayoutHandle
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutManager
class CORDL_TYPE LayoutManager : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Layout::LayoutManager___c;

  /// @brief Field m_Configs, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Configs, put = __cordl_internal_set_m_Configs)) ::UnityEngine::UIElements::Layout::LayoutDataStore m_Configs;

  /// @brief Field m_DefaultConfig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultConfig, put = __cordl_internal_set_m_DefaultConfig)) ::UnityEngine::UIElements::Layout::LayoutHandle m_DefaultConfig;

  /// @brief Field m_HighMark, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HighMark, put = __cordl_internal_set_m_HighMark)) int32_t m_HighMark;

  /// @brief Field m_Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_ManagedBaselineFunctions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManagedBaselineFunctions,
                      put = __cordl_internal_set_m_ManagedBaselineFunctions)) ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>*
      m_ManagedBaselineFunctions;

  /// @brief Field m_ManagedMeasureFunctions, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManagedMeasureFunctions,
                      put = __cordl_internal_set_m_ManagedMeasureFunctions)) ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>*
      m_ManagedMeasureFunctions;

  /// @brief Field m_ManagedOwners, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ManagedOwners,
      put = __cordl_internal_set_m_ManagedOwners)) ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::WeakReference_1<::UnityEngine::UIElements::VisualElement*>*>* m_ManagedOwners;

  /// @brief Field m_Nodes, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::UnityEngine::UIElements::Layout::LayoutDataStore m_Nodes;

  /// @brief Field m_NodesToFree, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodesToFree,
                      put = __cordl_internal_set_m_NodesToFree)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::Layout::LayoutHandle>* m_NodesToFree;

  /// @brief Field m_SyncRoot, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SyncRoot, put = __cordl_internal_set_m_SyncRoot)) ::System::Object* m_SyncRoot;

  /// @brief Field s_AppDomainUnloadRegistered, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_AppDomainUnloadRegistered, put = setStaticF_s_AppDomainUnloadRegistered)) bool s_AppDomainUnloadRegistered;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  /// @brief Field s_Managers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Managers, put = setStaticF_s_Managers)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* s_Managers;

  /// @brief Field s_SharedInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SharedInstance, put = setStaticF_s_SharedInstance)) ::UnityEngine::UIElements::Layout::LayoutManager* s_SharedInstance;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateConfig, addr 0x6aca6c8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutConfig CreateConfig();

  /// @brief Method CreateNode, addr 0x6acaa14, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutNode CreateNode();

  /// @brief Method CreateNodeInternal, addr 0x6acaa48, size 0x258, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutNode CreateNodeInternal(::UnityEngine::UIElements::Layout::LayoutHandle configHandle);

  /// @brief Method DestroyConfig, addr 0x6aca8e4, size 0x38, virtual false, abstract: false, final false
  inline void DestroyConfig(::ByRef<::UnityEngine::UIElements::Layout::LayoutConfig> config);

  /// @brief Method DestroyNode, addr 0x6acb058, size 0x1e8, virtual false, abstract: false, final false
  inline void DestroyNode(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node);

  /// @brief Method Dispose, addr 0x6aca1ac, size 0x134, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeNode, addr 0x6acaf30, size 0x128, virtual false, abstract: false, final false
  inline void FreeNode(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetAccess, addr 0x6aca88c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutDataAccess GetAccess();

  /// @brief Method GetBaselineFunction, addr 0x6acb61c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* GetBaselineFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetDefaultConfig, addr 0x6aca8b8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutConfig GetDefaultConfig();

  /// @brief Method GetManager, addr 0x6aca2e0, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutManager* GetManager(int32_t index);

  /// @brief Method GetMeasureFunction, addr 0x6acb290, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* GetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetOwner, addr 0x6acb3e8, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method Initialize, addr 0x6ac9b64, size 0x1a8, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager* New_ctor(::Unity::Collections::Allocator allocator);

  /// @brief Method SetMeasureFunction, addr 0x6acb334, size 0xb4, virtual false, abstract: false, final false
  inline void SetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value);

  /// @brief Method SetOwner, addr 0x6acb510, size 0x10c, virtual false, abstract: false, final false
  inline void SetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method Shutdown, addr 0x6aca11c, size 0x90, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method TryFreeNodes, addr 0x6acaca0, size 0x14c, virtual false, abstract: false, final false
  inline void TryFreeNodes();

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

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::WeakReference_1<::UnityEngine::UIElements::VisualElement*>*>* const& __cordl_internal_get_m_ManagedOwners() const;

  constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::WeakReference_1<::UnityEngine::UIElements::VisualElement*>*>*& __cordl_internal_get_m_ManagedOwners();

  constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore const& __cordl_internal_get_m_Nodes() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore& __cordl_internal_get_m_Nodes();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::Layout::LayoutHandle>* const& __cordl_internal_get_m_NodesToFree() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::Layout::LayoutHandle>*& __cordl_internal_get_m_NodesToFree();

  constexpr ::System::Object* const& __cordl_internal_get_m_SyncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get_m_SyncRoot();

  constexpr void __cordl_internal_set_m_Configs(::UnityEngine::UIElements::Layout::LayoutDataStore value);

  constexpr void __cordl_internal_set_m_DefaultConfig(::UnityEngine::UIElements::Layout::LayoutHandle value);

  constexpr void __cordl_internal_set_m_HighMark(int32_t value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_ManagedBaselineFunctions(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* value);

  constexpr void __cordl_internal_set_m_ManagedMeasureFunctions(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* value);

  constexpr void __cordl_internal_set_m_ManagedOwners(::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::WeakReference_1<::UnityEngine::UIElements::VisualElement*>*>* value);

  constexpr void __cordl_internal_set_m_Nodes(::UnityEngine::UIElements::Layout::LayoutDataStore value);

  constexpr void __cordl_internal_set_m_NodesToFree(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::Layout::LayoutHandle>* value);

  constexpr void __cordl_internal_set_m_SyncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x6ac9d0c, size 0x410, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator);

  static inline bool getStaticF_s_AppDomainUnloadRegistered();

  static inline bool getStaticF_s_Initialized();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* getStaticF_s_Managers();

  static inline ::UnityEngine::UIElements::Layout::LayoutManager* getStaticF_s_SharedInstance();

  /// @brief Method get_SharedManager, addr 0x6ac9a78, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutManager* get_SharedManager();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_AppDomainUnloadRegistered(bool value);

  static inline void setStaticF_s_Initialized(bool value);

  static inline void setStaticF_s_Managers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Layout::LayoutManager*>* value);

  static inline void setStaticF_s_SharedInstance(::UnityEngine::UIElements::Layout::LayoutManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutManager(LayoutManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutManager(LayoutManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5395 };

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_Nodes, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore ___m_Nodes;

  /// @brief Field m_Configs, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore ___m_Configs;

  /// @brief Field m_SyncRoot, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___m_SyncRoot;

  /// @brief Field m_NodesToFree, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::Layout::LayoutHandle>* ___m_NodesToFree;

  /// @brief Field m_DefaultConfig, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle ___m_DefaultConfig;

  /// @brief Field m_ManagedMeasureFunctions, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>* ___m_ManagedMeasureFunctions;

  /// @brief Field m_ManagedBaselineFunctions, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>* ___m_ManagedBaselineFunctions;

  /// @brief Field m_ManagedOwners, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<::System::WeakReference_1<::UnityEngine::UIElements::VisualElement*>*>* ___m_ManagedOwners;

  /// @brief Field m_HighMark, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_HighMark;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_Nodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_Configs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_SyncRoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_NodesToFree) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_DefaultConfig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_ManagedMeasureFunctions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_ManagedBaselineFunctions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_ManagedOwners) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutManager, ___m_HighMark) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutManager, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutManager*, "UnityEngine.UIElements.Layout", "LayoutManager");
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutManager___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutManager___c*, "UnityEngine.UIElements.Layout", "LayoutManager/<>c");
