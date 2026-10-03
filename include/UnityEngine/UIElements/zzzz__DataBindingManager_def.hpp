#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingLogLevel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingTarget_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataBindingManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct BindablePropertyChangedEventArgs;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
struct BindingLogLevel;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine::UIElements {
struct BindingTarget;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_BindingDataCollection;
}
namespace UnityEngine::UIElements {
class DataBindingManager_BindingData;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_BindingRequest;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_ChangesFromUI;
}
namespace UnityEngine::UIElements {
class DataBindingManager_HierarchyBindingTracker;
}
namespace UnityEngine::UIElements {
class DataBindingManager_HierarchyDataSourceTracker;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_IgnoreUIChangesData;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_IgnoreUIChangesScope;
}
namespace UnityEngine::UIElements {
struct DataSourceContext;
}
namespace UnityEngine::UIElements {
template <typename TEventType, typename TCallbackArgs> class EventCallback_2;
}
namespace UnityEngine::UIElements {
class HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter;
}
namespace UnityEngine::UIElements {
class HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal;
}
namespace UnityEngine::UIElements {
class HierarchyDataSourceTracker_DataBindingManager_ObjectComparer;
}
namespace UnityEngine::UIElements {
class HierarchyDataSourceTracker_DataBindingManager_SourceInfo;
}
namespace UnityEngine::UIElements {
class PropertyChangedEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DataBindingManager;
}
namespace UnityEngine::UIElements {
class DataBindingManager_BindingData;
}
namespace UnityEngine::UIElements {
class DataBindingManager_HierarchyBindingTracker;
}
namespace UnityEngine::UIElements {
class DataBindingManager_HierarchyDataSourceTracker;
}
namespace UnityEngine::UIElements {
class HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter;
}
namespace UnityEngine::UIElements {
class HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal;
}
namespace UnityEngine::UIElements {
class HierarchyDataSourceTracker_DataBindingManager_ObjectComparer;
}
namespace UnityEngine::UIElements {
class HierarchyDataSourceTracker_DataBindingManager_SourceInfo;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_BindingDataCollection;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_BindingRequest;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_ChangesFromUI;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_IgnoreUIChangesData;
}
namespace UnityEngine::UIElements {
struct DataBindingManager_IgnoreUIChangesScope;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::DataBindingManager*);
MARK_REF_T(::UnityEngine::UIElements::DataBindingManager_BindingData*);
MARK_REF_T(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*);
MARK_REF_T(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*);
MARK_REF_T(::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*);
MARK_REF_T(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*);
MARK_REF_T(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*);
MARK_REF_T(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*);
MARK_VAL_T(::UnityEngine::UIElements::DataBindingManager_BindingDataCollection);
MARK_VAL_T(::UnityEngine::UIElements::DataBindingManager_BindingRequest);
MARK_VAL_T(::UnityEngine::UIElements::DataBindingManager_ChangesFromUI);
MARK_VAL_T(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData);
MARK_VAL_T(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager*, "UnityEngine.UIElements", "DataBindingManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_BindingData*, "UnityEngine.UIElements", "DataBindingManager/BindingData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*, "UnityEngine.UIElements", "DataBindingManager/HierarchyBindingTracker");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*, "UnityEngine.UIElements", "DataBindingManager/HierarchyDataSourceTracker");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*, "UnityEngine.UIElements",
                    "DataBindingManager/HierarchyBindingTracker/HierarchicalBindingsSorter");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*, "UnityEngine.UIElements",
                    "DataBindingManager/HierarchyDataSourceTracker/InvalidateDataSourcesTraversal");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*, "UnityEngine.UIElements", "DataBindingManager/HierarchyDataSourceTracker/ObjectComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*, "UnityEngine.UIElements", "DataBindingManager/HierarchyDataSourceTracker/SourceInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_BindingDataCollection, "UnityEngine.UIElements", "DataBindingManager/BindingDataCollection");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_BindingRequest, "UnityEngine.UIElements", "DataBindingManager/BindingRequest");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_ChangesFromUI, "UnityEngine.UIElements", "DataBindingManager/ChangesFromUI");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData, "UnityEngine.UIElements", "DataBindingManager/IgnoreUIChangesData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope, "UnityEngine.UIElements", "DataBindingManager/IgnoreUIChangesScope");
// [IsReadOnly]
// Dependencies UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/BindingRequest
struct CORDL_TYPE DataBindingManager_BindingRequest {
public:
  // Declarations
  /// @brief Method CancelRequest, addr 0x708b5ec, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBindingManager_BindingRequest CancelRequest();

  /// @brief Method .ctor, addr 0x708b61c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId, ::UnityEngine::UIElements::Binding* binding, bool shouldProcess);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_BindingRequest();

  // Ctor Parameters [CppParam { name: "bindingId", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None, comment: None }, CppParam { name: "binding", ty:
  // "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldProcess", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr DataBindingManager_BindingRequest(::UnityEngine::UIElements::BindingId bindingId, ::UnityEngine::UIElements::Binding* binding, bool shouldProcess) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  /// @brief Field bindingId, offset: 0x0, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId bindingId;

  /// @brief Field binding, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::Binding* binding;

  /// @brief Field shouldProcess, offset: 0xa0, size: 0x1, def value: None
  bool shouldProcess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingRequest, bindingId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingRequest, binding) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingRequest, shouldProcess) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_BindingRequest) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/BindingDataCollection
struct CORDL_TYPE DataBindingManager_BindingDataCollection {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddBindingData, addr 0x708ca54, size 0x188, virtual false, abstract: false, final false
  inline void AddBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData);

  /// @brief Method Create, addr 0x708c98c, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection Create();

  /// @brief Method Dispose, addr 0x708cd58, size 0xdc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBindingCount, addr 0x708cd08, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetBindingCount();

  /// @brief Method GetBindings, addr 0x7089818, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* GetBindings();

  /// @brief Method RemoveBindingData, addr 0x708cbdc, size 0x12c, virtual false, abstract: false, final false
  inline bool RemoveBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData);

  /// @brief Method TryGetBindingData, addr 0x7089898, size 0x90, virtual false, abstract: false, final false
  inline bool TryGetBindingData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> data);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_BindingDataCollection();

  // Ctor Parameters [CppParam { name: "m_BindingPerId", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_Bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: None, comment: None }]
  constexpr DataBindingManager_BindingDataCollection(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId, ::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_BindingPerId,
      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_Bindings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4040 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BindingPerId, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId, ::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_BindingPerId;

  /// @brief Field m_Bindings, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_Bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingDataCollection, m_BindingPerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingDataCollection, m_Bindings) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_BindingDataCollection) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.UIElements.BindingResult, UnityEngine.UIElements.BindingTarget, UnityEngine.UIElements.DataSourceContext
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/BindingData
class CORDL_TYPE DataBindingManager_BindingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <localDataSource>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__localDataSource_k__BackingField, put = __cordl_internal_set__localDataSource_k__BackingField)) ::System::Object* _localDataSource_k__BackingField;

  /// @brief Field binding, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_binding, put = __cordl_internal_set_binding)) ::UnityEngine::UIElements::Binding* binding;

  __declspec(property(put = set_context)) ::UnityEngine::UIElements::DataSourceContext context;

  __declspec(property(get = get_localDataSource, put = set_localDataSource)) ::System::Object* localDataSource;

  /// @brief Field m_LastContext, offset 0xc0, size 0x98
  __declspec(property(get = __cordl_internal_get_m_LastContext, put = __cordl_internal_set_m_LastContext)) ::UnityEngine::UIElements::DataSourceContext m_LastContext;

  /// @brief Field m_SourceToUILastUpdate, offset 0x160, size 0x18
  __declspec(property(get = __cordl_internal_get_m_SourceToUILastUpdate, put = __cordl_internal_set_m_SourceToUILastUpdate)) ::System::Nullable_1<::UnityEngine::UIElements::BindingResult>
      m_SourceToUILastUpdate;

  /// @brief Field m_UIToSourceLastUpdate, offset 0x178, size 0x18
  __declspec(property(get = __cordl_internal_get_m_UIToSourceLastUpdate, put = __cordl_internal_set_m_UIToSourceLastUpdate)) ::System::Nullable_1<::UnityEngine::UIElements::BindingResult>
      m_UIToSourceLastUpdate;

  /// @brief Field target, offset 0x18, size 0xa0
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityEngine::UIElements::BindingTarget target;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int64_t version;

  static inline ::UnityEngine::UIElements::DataBindingManager_BindingData* New_ctor();

  /// @brief Method Reset, addr 0x708c7e0, size 0x20, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Object* const& __cordl_internal_get__localDataSource_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__localDataSource_k__BackingField();

  constexpr ::UnityEngine::UIElements::Binding* const& __cordl_internal_get_binding() const;

  constexpr ::UnityEngine::UIElements::Binding*& __cordl_internal_get_binding();

  constexpr ::UnityEngine::UIElements::DataSourceContext const& __cordl_internal_get_m_LastContext() const;

  constexpr ::UnityEngine::UIElements::DataSourceContext& __cordl_internal_get_m_LastContext();

  constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult> const& __cordl_internal_get_m_SourceToUILastUpdate() const;

  constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult>& __cordl_internal_get_m_SourceToUILastUpdate();

  constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult> const& __cordl_internal_get_m_UIToSourceLastUpdate() const;

  constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult>& __cordl_internal_get_m_UIToSourceLastUpdate();

  constexpr ::UnityEngine::UIElements::BindingTarget const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::UIElements::BindingTarget& __cordl_internal_get_target();

  constexpr int64_t const& __cordl_internal_get_version() const;

  constexpr int64_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__localDataSource_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_binding(::UnityEngine::UIElements::Binding* value);

  constexpr void __cordl_internal_set_m_LastContext(::UnityEngine::UIElements::DataSourceContext value);

  constexpr void __cordl_internal_set_m_SourceToUILastUpdate(::System::Nullable_1<::UnityEngine::UIElements::BindingResult> value);

  constexpr void __cordl_internal_set_m_UIToSourceLastUpdate(::System::Nullable_1<::UnityEngine::UIElements::BindingResult> value);

  constexpr void __cordl_internal_set_target(::UnityEngine::UIElements::BindingTarget value);

  constexpr void __cordl_internal_set_version(int64_t value);

  /// @brief Method .ctor, addr 0x708c7dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_localDataSource, addr 0x708ce34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_localDataSource();

  /// @brief Method set_context, addr 0x708ce44, size 0x104, virtual false, abstract: false, final false
  inline void set_context(::UnityEngine::UIElements::DataSourceContext value);

  /// [CompilerGenerated]
  /// @brief Method set_localDataSource, addr 0x708ce3c, size 0x8, virtual false, abstract: false, final false
  inline void set_localDataSource(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_BindingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager_BindingData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBindingManager_BindingData(DataBindingManager_BindingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager_BindingData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBindingManager_BindingData(DataBindingManager_BindingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4041 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  int64_t ___version;

  /// @brief Field target, offset: 0x18, size: 0xa0, def value: None
  ::UnityEngine::UIElements::BindingTarget ___target;

  /// @brief Field binding, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Binding* ___binding;

  /// @brief Field m_LastContext, offset: 0xc0, size: 0x98, def value: None
  ::UnityEngine::UIElements::DataSourceContext ___m_LastContext;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <localDataSource>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::System::Object* ____localDataSource_k__BackingField;

  /// @brief Field m_SourceToUILastUpdate, offset: 0x160, size: 0x18, def value: None
  ::System::Nullable_1<::UnityEngine::UIElements::BindingResult> ___m_SourceToUILastUpdate;

  /// @brief Field m_UIToSourceLastUpdate, offset: 0x178, size: 0x18, def value: None
  ::System::Nullable_1<::UnityEngine::UIElements::BindingResult> ___m_UIToSourceLastUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ___binding) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ___m_LastContext) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ____localDataSource_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ___m_SourceToUILastUpdate) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_BindingData, ___m_UIToSourceLastUpdate) == 0x178, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_BindingData) == 0x190, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [IsReadOnly]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/ChangesFromUI
struct CORDL_TYPE DataBindingManager_ChangesFromUI {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method .ctor, addr 0x708cf48, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData);

  /// @brief Method get_IsValid, addr 0x708cf68, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsValid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_ChangesFromUI();

  // Ctor Parameters [CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "bindingData", ty: "::UnityEngine::UIElements::DataBindingManager_BindingData*", modifiers: "", def_value: None, comment: None }]
  constexpr DataBindingManager_ChangesFromUI(int64_t version, ::UnityEngine::UIElements::Binding* binding, ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4042 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field version, offset: 0x0, size: 0x8, def value: None
  int64_t version;

  /// @brief Field binding, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Binding* binding;

  /// @brief Field bindingData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_ChangesFromUI, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_ChangesFromUI, binding) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_ChangesFromUI, bindingData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_ChangesFromUI) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StyleSheets.HierarchyTraversal
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/HierarchyBindingTracker/HierarchicalBindingsSorter
class CORDL_TYPE HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter : public ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
  // Declarations
  /// @brief Field <boundElements>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__boundElements_k__BackingField,
                      put = __cordl_internal_set__boundElements_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* _boundElements_k__BackingField;

  /// @brief Field <results>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__results_k__BackingField,
                      put = __cordl_internal_set__results_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* _results_k__BackingField;

  __declspec(property(get = get_boundElements, put = set_boundElements)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* boundElements;

  __declspec(property(get = get_results, put = set_results)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* results;

  static inline ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* New_ctor();

  /// @brief Method TraverseRecursive, addr 0x708d3c4, size 0x140, virtual true, abstract: false, final false
  inline void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__boundElements_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__boundElements_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__results_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__results_k__BackingField();

  constexpr void __cordl_internal_set__boundElements_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__results_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x708d044, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_boundElements, addr 0x708d3a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* get_boundElements();

  /// [CompilerGenerated]
  /// @brief Method get_results, addr 0x708d3b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* get_results();

  /// [CompilerGenerated]
  /// @brief Method set_boundElements, addr 0x708d3ac, size 0x8, virtual false, abstract: false, final false
  inline void set_boundElements(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// [CompilerGenerated]
  /// @brief Method set_results, addr 0x708d3bc, size 0x8, virtual false, abstract: false, final false
  inline void set_results(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter(HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter(HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4043 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <boundElements>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ____boundElements_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <results>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ____results_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter, ____boundElements_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter, ____results_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/HierarchyBindingTracker
class CORDL_TYPE DataBindingManager_HierarchyBindingTracker : public ::System::Object {
public:
  // Declarations
  using HierarchicalBindingsSorter = ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter;

  /// @brief Field m_BindingDataPerElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingDataPerElement, put = __cordl_internal_set_m_BindingDataPerElement)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* m_BindingDataPerElement;

  /// @brief Field m_BindingSorter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingSorter,
                      put = __cordl_internal_set_m_BindingSorter)) ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* m_BindingSorter;

  /// @brief Field m_BoundElements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundElements,
                      put = __cordl_internal_set_m_BoundElements)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_BoundElements;

  /// @brief Field m_IsDirty, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDirty, put = __cordl_internal_set_m_IsDirty)) bool m_IsDirty;

  /// @brief Field m_OnPropertyChanged, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnPropertyChanged, put = __cordl_internal_set_m_OnPropertyChanged)) ::UnityEngine::UIElements::EventCallback_2<
      ::UnityEngine::UIElements::PropertyChangedEvent*,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>* m_OnPropertyChanged;

  /// @brief Field m_OrderedBindings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OrderedBindings,
                      put = __cordl_internal_set_m_OrderedBindings)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_OrderedBindings;

  /// @brief Field m_Panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x708b314, size 0x1cc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBoundElements, addr 0x7089438, size 0x44, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* GetBoundElements();

  /// @brief Method GetTrackedElementsCount, addr 0x70893d4, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetTrackedElementsCount();

  /// @brief Method IsTrackingElement, addr 0x708ab6c, size 0x64, virtual false, abstract: false, final false
  inline bool IsTrackingElement(::UnityEngine::UIElements::VisualElement* element);

  static inline ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method OnPropertyChanged, addr 0x708d048, size 0x294, virtual false, abstract: false, final false
  inline void
  OnPropertyChanged(::UnityEngine::UIElements::PropertyChangedEvent* evt,
                    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* bindingCollection);

  /// @brief Method OrderBindings, addr 0x708cfa4, size 0xa0, virtual false, abstract: false, final false
  inline void OrderBindings(::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method SetDirty, addr 0x708c0a0, size 0xc, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method StartTrackingBinding, addr 0x708a2c0, size 0x1ec, virtual false, abstract: false, final false
  inline void StartTrackingBinding(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::DataBindingManager_BindingData* binding);

  /// @brief Method StopTrackingBinding, addr 0x708a7ac, size 0x198, virtual false, abstract: false, final false
  inline void StopTrackingBinding(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::DataBindingManager_BindingData* binding);

  /// @brief Method StopTrackingElement, addr 0x708af18, size 0xe4, virtual false, abstract: false, final false
  inline void StopTrackingElement(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method TryGetBindingCollection, addr 0x70897ac, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetBindingCollection(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection> collection);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* const&
  __cordl_internal_get_m_BindingDataPerElement() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*&
  __cordl_internal_get_m_BindingDataPerElement();

  constexpr ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* const& __cordl_internal_get_m_BindingSorter() const;

  constexpr ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*& __cordl_internal_get_m_BindingSorter();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_BoundElements() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_BoundElements();

  constexpr bool const& __cordl_internal_get_m_IsDirty() const;

  constexpr bool& __cordl_internal_get_m_IsDirty();

  constexpr ::UnityEngine::UIElements::EventCallback_2<
      ::UnityEngine::UIElements::PropertyChangedEvent*,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>* const&
  __cordl_internal_get_m_OnPropertyChanged() const;

  constexpr ::UnityEngine::UIElements::EventCallback_2<
      ::UnityEngine::UIElements::PropertyChangedEvent*,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>*&
  __cordl_internal_get_m_OnPropertyChanged();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_OrderedBindings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_OrderedBindings();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_Panel();

  constexpr void __cordl_internal_set_m_BindingDataPerElement(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* value);

  constexpr void __cordl_internal_set_m_BindingSorter(::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* value);

  constexpr void __cordl_internal_set_m_BoundElements(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_IsDirty(bool value);

  constexpr void __cordl_internal_set_m_OnPropertyChanged(
      ::UnityEngine::UIElements::EventCallback_2<
          ::UnityEngine::UIElements::PropertyChangedEvent*,
          ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>* value);

  constexpr void __cordl_internal_set_m_OrderedBindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method .ctor, addr 0x70889a8, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_HierarchyBindingTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager_HierarchyBindingTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBindingManager_HierarchyBindingTracker(DataBindingManager_HierarchyBindingTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager_HierarchyBindingTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBindingManager_HierarchyBindingTracker(DataBindingManager_HierarchyBindingTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4044 };

  /// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  /// @brief Field m_BindingSorter, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* ___m_BindingSorter;

  /// @brief Field m_BindingDataPerElement, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* ___m_BindingDataPerElement;

  /// @brief Field m_BoundElements, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_BoundElements;

  /// @brief Field m_OrderedBindings, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_OrderedBindings;

  /// @brief Field m_IsDirty, offset: 0x38, size: 0x1, def value: None
  bool ___m_IsDirty;

  /// @brief Field m_OnPropertyChanged, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_2<
      ::UnityEngine::UIElements::PropertyChangedEvent*,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>* ___m_OnPropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_Panel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_BindingSorter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_BindingDataPerElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_BoundElements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_OrderedBindings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_IsDirty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker, ___m_OnPropertyChanged) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker) == 0x48, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/HierarchyDataSourceTracker/SourceInfo
class CORDL_TYPE HierarchyDataSourceTracker_DataBindingManager_SourceInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <lastVersion>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lastVersion_k__BackingField, put = __cordl_internal_set__lastVersion_k__BackingField)) int64_t _lastVersion_k__BackingField;

  /// @brief Field <refCount>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__refCount_k__BackingField, put = __cordl_internal_set__refCount_k__BackingField)) int32_t _refCount_k__BackingField;

  __declspec(property(get = get_detectedChanges)) ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* detectedChanges;

  __declspec(property(get = get_detectedChangesNoAlloc)) ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* detectedChangesNoAlloc;

  __declspec(property(get = get_lastVersion, put = set_lastVersion)) int64_t lastVersion;

  /// @brief Field m_DetectedChanges, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DetectedChanges,
                      put = __cordl_internal_set_m_DetectedChanges)) ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* m_DetectedChanges;

  __declspec(property(get = get_refCount, put = set_refCount)) int32_t refCount;

  static inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* New_ctor();

  constexpr int64_t const& __cordl_internal_get__lastVersion_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__lastVersion_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__refCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__refCount_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* const& __cordl_internal_get_m_DetectedChanges() const;

  constexpr ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*& __cordl_internal_get_m_DetectedChanges();

  constexpr void __cordl_internal_set__lastVersion_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__refCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_DetectedChanges(::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* value);

  /// @brief Method .ctor, addr 0x708d5e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_detectedChanges, addr 0x708dd84, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* get_detectedChanges();

  /// @brief Method get_detectedChangesNoAlloc, addr 0x708de88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* get_detectedChangesNoAlloc();

  /// [CompilerGenerated]
  /// @brief Method get_lastVersion, addr 0x708de68, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_lastVersion();

  /// [CompilerGenerated]
  /// @brief Method get_refCount, addr 0x708de78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_refCount();

  /// [CompilerGenerated]
  /// @brief Method set_lastVersion, addr 0x708de70, size 0x8, virtual false, abstract: false, final false
  inline void set_lastVersion(int64_t value);

  /// [CompilerGenerated]
  /// @brief Method set_refCount, addr 0x708de80, size 0x8, virtual false, abstract: false, final false
  inline void set_refCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyDataSourceTracker_DataBindingManager_SourceInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyDataSourceTracker_DataBindingManager_SourceInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyDataSourceTracker_DataBindingManager_SourceInfo(HierarchyDataSourceTracker_DataBindingManager_SourceInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyDataSourceTracker_DataBindingManager_SourceInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyDataSourceTracker_DataBindingManager_SourceInfo(HierarchyDataSourceTracker_DataBindingManager_SourceInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4045 };

  /// @brief Field m_DetectedChanges, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* ___m_DetectedChanges;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <lastVersion>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____lastVersion_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <refCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____refCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo, ___m_DetectedChanges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo, ____lastVersion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo, ____refCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StyleSheets.HierarchyTraversal
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/HierarchyDataSourceTracker/InvalidateDataSourcesTraversal
class CORDL_TYPE HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal : public ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
  // Declarations
  /// @brief Field m_DataSourceTracker, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSourceTracker,
                      put = __cordl_internal_set_m_DataSourceTracker)) ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* m_DataSourceTracker;

  /// @brief Field m_VisitedElements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisitedElements,
                      put = __cordl_internal_set_m_VisitedElements)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_VisitedElements;

  /// @brief Method Invalidate, addr 0x708d8dc, size 0x1ec, virtual false, abstract: false, final false
  inline void Invalidate(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* addedOrMovedElements,
                         ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedElements);

  static inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*
  New_ctor(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* dataSourceTracker);

  /// @brief Method TraverseRecursive, addr 0x708de90, size 0xec, virtual true, abstract: false, final false
  inline void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* const& __cordl_internal_get_m_DataSourceTracker() const;

  constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*& __cordl_internal_get_m_DataSourceTracker();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_VisitedElements() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_VisitedElements();

  constexpr void __cordl_internal_set_m_DataSourceTracker(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* value);

  constexpr void __cordl_internal_set_m_VisitedElements(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x708d6d4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* dataSourceTracker);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal(HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal(HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4046 };

  /// @brief Field m_DataSourceTracker, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* ___m_DataSourceTracker;

  /// @brief Field m_VisitedElements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_VisitedElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal, ___m_DataSourceTracker) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal, ___m_VisitedElements) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/HierarchyDataSourceTracker/ObjectComparer
class CORDL_TYPE HierarchyDataSourceTracker_DataBindingManager_ObjectComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept;

  static inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer* New_ctor();

  /// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.Equals, addr 0x708df7c, size 0x8c, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode, addr 0x708e008, size 0x14, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* obj);

  /// @brief Method .ctor, addr 0x708d6d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyDataSourceTracker_DataBindingManager_ObjectComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyDataSourceTracker_DataBindingManager_ObjectComparer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyDataSourceTracker_DataBindingManager_ObjectComparer(HierarchyDataSourceTracker_DataBindingManager_ObjectComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyDataSourceTracker_DataBindingManager_ObjectComparer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyDataSourceTracker_DataBindingManager_ObjectComparer(HierarchyDataSourceTracker_DataBindingManager_ObjectComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager/HierarchyDataSourceTracker
class CORDL_TYPE DataBindingManager_HierarchyDataSourceTracker : public ::System::Object {
public:
  // Declarations
  using InvalidateDataSourcesTraversal = ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal;

  using ObjectComparer = ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer;

  using SourceInfo = ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo;

  /// @brief Field m_BindingRefCount, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingRefCount,
                      put = __cordl_internal_set_m_BindingRefCount)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>* m_BindingRefCount;

  /// @brief Field m_DataBindingManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataBindingManager, put = __cordl_internal_set_m_DataBindingManager)) ::UnityEngine::UIElements::DataBindingManager* m_DataBindingManager;

  /// @brief Field m_Handler, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Handler, put = __cordl_internal_set_m_Handler)) ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* m_Handler;

  /// @brief Field m_InvalidateResolvedDataSources, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvalidateResolvedDataSources,
                      put = __cordl_internal_set_m_InvalidateResolvedDataSources)) ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*
      m_InvalidateResolvedDataSources;

  /// @brief Field m_ResolvedHierarchicalDataSourceContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResolvedHierarchicalDataSourceContext, put = __cordl_internal_set_m_ResolvedHierarchicalDataSourceContext)) ::System::Collections::Generic::
      Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>* m_ResolvedHierarchicalDataSourceContext;

  /// @brief Field m_SourceInfos, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceInfos, put = __cordl_internal_set_m_SourceInfos)) ::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* m_SourceInfos;

  /// @brief Field m_SourceInfosPool, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_SourceInfosPool,
      put = __cordl_internal_set_m_SourceInfosPool)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* m_SourceInfosPool;

  /// @brief Field m_SourcesToRemove, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourcesToRemove, put = __cordl_internal_set_m_SourcesToRemove)) ::System::Collections::Generic::HashSet_1<::System::Object*>* m_SourcesToRemove;

  /// @brief Field m_VisualElementHandler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualElementHandler,
                      put = __cordl_internal_set_m_VisualElementHandler)) ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*,
                                                                                                                     ::UnityEngine::UIElements::VisualElement*>* m_VisualElementHandler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearChangesFromSource, addr 0x7089644, size 0xb0, virtual false, abstract: false, final false
  inline void ClearChangesFromSource(::System::Object* dataSource);

  /// @brief Method ClearSourceCache, addr 0x708c54c, size 0x290, virtual false, abstract: false, final false
  inline void ClearSourceCache();

  /// @brief Method DecreaseBindingRefCount, addr 0x7089e08, size 0x1dc, virtual false, abstract: false, final false
  inline void DecreaseBindingRefCount(::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData);

  /// @brief Method DecreaseRefCount, addr 0x708c0e4, size 0x234, virtual false, abstract: false, final false
  inline void DecreaseRefCount(::System::Object* dataSource);

  /// @brief Method Dispose, addr 0x708b4e0, size 0x10c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetChangesFromSource, addr 0x70895a8, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* GetChangesFromSource(::System::Object* dataSource);

  /// @brief Method GetHierarchicalDataSourceContext, addr 0x708dac8, size 0x218, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataSourceContext GetHierarchicalDataSourceContext(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method GetPooledSourceInfo, addr 0x708d504, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* GetPooledSourceInfo();

  /// @brief Method GetResolvedDataSourceContext, addr 0x7088fc0, size 0x400, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataSourceContext GetResolvedDataSourceContext(::UnityEngine::UIElements::VisualElement* element,
                                                                                   ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData);

  /// @brief Method GetTrackedDataSourcesCount, addr 0x7088b74, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetTrackedDataSourcesCount();

  /// @brief Method IncreaseBindingRefCount, addr 0x708a0e8, size 0x1d8, virtual false, abstract: false, final false
  inline void IncreaseBindingRefCount(::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData);

  /// @brief Method IncreaseRefCount, addr 0x708c318, size 0x220, virtual false, abstract: false, final false
  inline void IncreaseRefCount(::System::Object* dataSource);

  /// @brief Method InvalidateCachedDataSource, addr 0x708b010, size 0x274, virtual false, abstract: false, final false
  inline void InvalidateCachedDataSource(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* elements,
                                         ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedElements);

  static inline ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* New_ctor(::UnityEngine::UIElements::DataBindingManager* manager);

  /// @brief Method OnVisualElementPropertyChanged, addr 0x708d758, size 0xac, virtual false, abstract: false, final false
  inline void OnVisualElementPropertyChanged(::UnityEngine::UIElements::PropertyChangedEvent* evt, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method ReleasePooledSourceInfo, addr 0x708d5e4, size 0xec, virtual false, abstract: false, final false
  inline void ReleasePooledSourceInfo(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* info);

  /// @brief Method RemoveHierarchyDataSourceContextFromElement, addr 0x708de04, size 0x64, virtual false, abstract: false, final false
  inline void RemoveHierarchyDataSourceContextFromElement(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method TrackPropertyChanges, addr 0x708dce0, size 0xa4, virtual false, abstract: false, final false
  inline void TrackPropertyChanges(::System::Object* sender, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs args);

  /// @brief Method TrackPropertyChanges, addr 0x708d804, size 0xd8, virtual false, abstract: false, final false
  inline void TrackPropertyChanges(::System::Object* sender, ::Unity::Properties::PropertyPath propertyPath);

  /// @brief Method TryGetLastVersion, addr 0x7088be0, size 0xa4, virtual false, abstract: false, final false
  inline bool TryGetLastVersion(::System::Object* source, ::by_ref<int64_t> version);

  /// @brief Method UpdateVersion, addr 0x7088c98, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateVersion(::System::Object* source, int64_t version);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>* const& __cordl_internal_get_m_BindingRefCount() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>*& __cordl_internal_get_m_BindingRefCount();

  constexpr ::UnityEngine::UIElements::DataBindingManager* const& __cordl_internal_get_m_DataBindingManager() const;

  constexpr ::UnityEngine::UIElements::DataBindingManager*& __cordl_internal_get_m_DataBindingManager();

  constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* const& __cordl_internal_get_m_Handler() const;

  constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*& __cordl_internal_get_m_Handler();

  constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal* const& __cordl_internal_get_m_InvalidateResolvedDataSources() const;

  constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*& __cordl_internal_get_m_InvalidateResolvedDataSources();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>* const&
  __cordl_internal_get_m_ResolvedHierarchicalDataSourceContext() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>*&
  __cordl_internal_get_m_ResolvedHierarchicalDataSourceContext();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* const&
  __cordl_internal_get_m_SourceInfos() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>*&
  __cordl_internal_get_m_SourceInfos();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* const& __cordl_internal_get_m_SourceInfosPool() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>*& __cordl_internal_get_m_SourceInfosPool();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& __cordl_internal_get_m_SourcesToRemove() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get_m_SourcesToRemove();

  constexpr ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>* const&
  __cordl_internal_get_m_VisualElementHandler() const;

  constexpr ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_VisualElementHandler();

  constexpr void __cordl_internal_set_m_BindingRefCount(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>* value);

  constexpr void __cordl_internal_set_m_DataBindingManager(::UnityEngine::UIElements::DataBindingManager* value);

  constexpr void __cordl_internal_set_m_Handler(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  constexpr void __cordl_internal_set_m_InvalidateResolvedDataSources(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal* value);

  constexpr void __cordl_internal_set_m_ResolvedHierarchicalDataSourceContext(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>* value);

  constexpr void
  __cordl_internal_set_m_SourceInfos(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* value);

  constexpr void __cordl_internal_set_m_SourceInfosPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* value);

  constexpr void __cordl_internal_set_m_SourcesToRemove(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  constexpr void
  __cordl_internal_set_m_VisualElementHandler(::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x7088678, size 0x330, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DataBindingManager* manager);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_HierarchyDataSourceTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager_HierarchyDataSourceTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBindingManager_HierarchyDataSourceTracker(DataBindingManager_HierarchyDataSourceTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager_HierarchyDataSourceTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBindingManager_HierarchyDataSourceTracker(DataBindingManager_HierarchyDataSourceTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4048 };

  /// @brief Field m_SourceInfosPool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* ___m_SourceInfosPool;

  /// @brief Field m_DataBindingManager, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager* ___m_DataBindingManager;

  /// @brief Field m_ResolvedHierarchicalDataSourceContext, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>* ___m_ResolvedHierarchicalDataSourceContext;

  /// @brief Field m_BindingRefCount, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>* ___m_BindingRefCount;

  /// @brief Field m_SourceInfos, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* ___m_SourceInfos;

  /// @brief Field m_SourcesToRemove, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ___m_SourcesToRemove;

  /// @brief Field m_InvalidateResolvedDataSources, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal* ___m_InvalidateResolvedDataSources;

  /// @brief Field m_Handler, offset: 0x48, size: 0x8, def value: None
  ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* ___m_Handler;

  /// @brief Field m_VisualElementHandler, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>* ___m_VisualElementHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_SourceInfosPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_DataBindingManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_ResolvedHierarchicalDataSourceContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_BindingRefCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_SourceInfos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_SourcesToRemove) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_InvalidateResolvedDataSources) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_Handler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker, ___m_VisualElementHandler) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/IgnoreUIChangesData
struct CORDL_TYPE DataBindingManager_IgnoreUIChangesData {
public:
  // Declarations
  /// @brief Method ShouldIgnoreChange, addr 0x708d2dc, size 0xc8, virtual false, abstract: false, final false
  inline bool ShouldIgnoreChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Binding* b, ::UnityEngine::UIElements::BindingId id);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_IgnoreUIChangesData();

  // Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "binding", ty:
  // "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingId", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None,
  // comment: None }]
  constexpr DataBindingManager_IgnoreUIChangesData(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::Binding* binding,
                                                   ::UnityEngine::UIElements::BindingId bindingId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  /// @brief Field element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field binding, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Binding* binding;

  /// @brief Field bindingId, offset: 0x10, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId bindingId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData, binding) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData, bindingId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.DataBindingManager::IgnoreUIChangesData
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/IgnoreUIChangesScope
struct CORDL_TYPE DataBindingManager_IgnoreUIChangesScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x708e01c, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x708951c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DataBindingManager* manager, ::UnityEngine::UIElements::VisualElement* target, ::UnityEngine::UIElements::BindingId bindingId,
                    ::UnityEngine::UIElements::Binding* binding);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager_IgnoreUIChangesScope();

  // Ctor Parameters [CppParam { name: "m_ScopeData", ty: "::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "manager", ty: "::UnityEngine::UIElements::DataBindingManager*", modifiers: "", def_value: None, comment: None }]
  constexpr DataBindingManager_IgnoreUIChangesScope(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData m_ScopeData, ::UnityEngine::UIElements::DataBindingManager* manager) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  /// @brief Field m_ScopeData, offset: 0x0, size: 0xa8, def value: None
  ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData m_ScopeData;

  /// @brief Field manager, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager* manager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope, m_ScopeData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope, manager) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope) == 0xb0, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.PropertyName, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.BindingLogLevel,
// UnityEngine.UIElements.DataBindingManager::IgnoreUIChangesData
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingManager
class CORDL_TYPE DataBindingManager : public ::System::Object {
public:
  // Declarations
  using BindingData = ::UnityEngine::UIElements::DataBindingManager_BindingData;

  using BindingDataCollection = ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection;

  using BindingRequest = ::UnityEngine::UIElements::DataBindingManager_BindingRequest;

  using ChangesFromUI = ::UnityEngine::UIElements::DataBindingManager_ChangesFromUI;

  using HierarchyBindingTracker = ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker;

  using HierarchyDataSourceTracker = ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker;

  using IgnoreUIChangesData = ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData;

  using IgnoreUIChangesScope = ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope;

  /// @brief Field globalLogLevel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_globalLogLevel, put = setStaticF_globalLogLevel)) ::UnityEngine::UIElements::BindingLogLevel globalLogLevel;

  /// @brief Field k_ClearBindingsToken, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_k_ClearBindingsToken, put = setStaticF_k_ClearBindingsToken)) ::UnityEngine::UIElements::BindingId k_ClearBindingsToken;

  /// @brief Field k_RequestBindingPropertyName, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_RequestBindingPropertyName, put = setStaticF_k_RequestBindingPropertyName)) ::UnityEngine::PropertyName k_RequestBindingPropertyName;

  __declspec(property(get = get_logLevel, put = set_logLevel)) ::UnityEngine::UIElements::BindingLogLevel logLevel;

  /// @brief Field m_BindingDataLocalPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingDataLocalPool,
                      put = __cordl_internal_set_m_BindingDataLocalPool)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_BindingDataLocalPool;

  /// @brief Field m_BindingsTracker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingsTracker,
                      put = __cordl_internal_set_m_BindingsTracker)) ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* m_BindingsTracker;

  /// @brief Field m_DataSourceTracker, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSourceTracker,
                      put = __cordl_internal_set_m_DataSourceTracker)) ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* m_DataSourceTracker;

  /// @brief Field m_DetectedChangesFromUI, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DetectedChangesFromUI,
                      put = __cordl_internal_set_m_DetectedChangesFromUI)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* m_DetectedChangesFromUI;

  /// @brief Field m_IgnoreUIChangesData, offset 0x40, size 0xa8
  __declspec(property(get = __cordl_internal_get_m_IgnoreUIChangesData,
                      put = __cordl_internal_set_m_IgnoreUIChangesData)) ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData m_IgnoreUIChangesData;

  /// @brief Field m_LogLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogLevel, put = __cordl_internal_set_m_LogLevel)) ::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel> m_LogLevel;

  /// @brief Field m_Panel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  /// @brief Field s_Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Empty, put = setStaticF_s_Empty)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* s_Empty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AnyPendingBindingRequests, addr 0x708bdf8, size 0xe0, virtual false, abstract: false, final false
  static inline bool AnyPendingBindingRequests(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method CacheSourceBindingResult, addr 0x7088e44, size 0x70, virtual false, abstract: false, final false
  inline void CacheSourceBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData, ::UnityEngine::UIElements::BindingResult result);

  /// @brief Method CacheUIBindingResult, addr 0x7088d48, size 0x70, virtual false, abstract: false, final false
  inline void CacheUIBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData, ::UnityEngine::UIElements::BindingResult result);

  /// @brief Method ClearAllBindings, addr 0x708bba4, size 0x254, virtual false, abstract: false, final false
  inline void ClearAllBindings(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method ClearChangesFromSource, addr 0x7089630, size 0x14, virtual false, abstract: false, final false
  inline void ClearChangesFromSource(::System::Object* dataSource);

  /// @brief Method ClearSourceCache, addr 0x708c538, size 0x14, virtual false, abstract: false, final false
  inline void ClearSourceCache();

  /// @brief Method CreateBindingRequest, addr 0x708abd0, size 0x348, virtual false, abstract: false, final false
  static inline void CreateBindingRequest(::UnityEngine::UIElements::VisualElement* target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                          ::UnityEngine::UIElements::Binding* binding, bool isTransferring);

  /// @brief Method DirtyBindingOrder, addr 0x708c084, size 0x1c, virtual false, abstract: false, final false
  inline void DirtyBindingOrder();

  /// @brief Method Dispose, addr 0x708b284, size 0x90, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBindingData, addr 0x70896f4, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* GetBindingData(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method GetBoundElements, addr 0x7089424, size 0x14, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* GetBoundElements();

  /// @brief Method GetBoundElementsCount, addr 0x70893c0, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetBoundElementsCount();

  /// @brief Method GetChangedDetectedFromSource, addr 0x7089594, size 0x14, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* GetChangedDetectedFromSource(::System::Object* dataSource);

  /// @brief Method GetChangedDetectedFromUI, addr 0x708958c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* GetChangedDetectedFromUI();

  /// @brief Method GetPooledBindingData, addr 0x7089fe4, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBindingManager_BindingData* GetPooledBindingData(::UnityEngine::UIElements::BindingTarget target, ::UnityEngine::UIElements::Binding* binding);

  /// @brief Method GetResolvedDataSourceContext, addr 0x7088f3c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataSourceContext GetResolvedDataSourceContext(::UnityEngine::UIElements::VisualElement* element,
                                                                                   ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData);

  /// @brief Method GetTrackedDataSourcesCount, addr 0x7088b60, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetTrackedDataSourcesCount();

  /// @brief Method IgnoreChangesScope, addr 0x708947c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesScope IgnoreChangesScope(::UnityEngine::UIElements::VisualElement* target, ::UnityEngine::UIElements::BindingId bindingId,
                                                                                               ::UnityEngine::UIElements::Binding* binding);

  /// @brief Method InvalidateCachedDataSource, addr 0x708affc, size 0x14, virtual false, abstract: false, final false
  inline void InvalidateCachedDataSource(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* addedOrMovedElements,
                                         ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedElements);

  static inline ::UnityEngine::UIElements::DataBindingManager* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method ProcessBindingRequests, addr 0x708b64c, size 0x558, virtual false, abstract: false, final false
  inline void ProcessBindingRequests(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method RegisterBinding, addr 0x7089928, size 0x474, virtual false, abstract: false, final false
  inline void RegisterBinding(::UnityEngine::UIElements::VisualElement* element, /* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                              ::UnityEngine::UIElements::Binding* binding);

  /// @brief Method ReleasePoolBindingData, addr 0x708a944, size 0xd4, virtual false, abstract: false, final false
  inline void ReleasePoolBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData* data);

  /// @brief Method ResetLogLevel, addr 0x708630c, size 0x8, virtual false, abstract: false, final false
  inline void ResetLogLevel();

  /// @brief Method TrackDataSource, addr 0x708c0ac, size 0x38, virtual false, abstract: false, final false
  inline void TrackDataSource(::System::Object* previous, ::System::Object* current);

  /// @brief Method TransferBindingRequests, addr 0x708aa18, size 0x154, virtual false, abstract: false, final false
  inline void TransferBindingRequests(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method TryGetBindingData, addr 0x7089820, size 0x78, virtual false, abstract: false, final false
  inline bool TryGetBindingData(::UnityEngine::UIElements::VisualElement* element, /* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData);

  /// @brief Method TryGetBindingRequest, addr 0x708bed8, size 0x1ac, virtual false, abstract: false, final false
  static inline bool TryGetBindingRequest(::UnityEngine::UIElements::VisualElement* element, /* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                          ::by_ref<::UnityEngine::UIElements::Binding*> binding);

  /// @brief Method TryGetLastSourceBindingResult, addr 0x7088eb4, size 0x88, virtual false, abstract: false, final false
  inline bool TryGetLastSourceBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData, ::by_ref<::UnityEngine::UIElements::BindingResult> result);

  /// @brief Method TryGetLastUIBindingResult, addr 0x7088db8, size 0x8c, virtual false, abstract: false, final false
  inline bool TryGetLastUIBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData, ::by_ref<::UnityEngine::UIElements::BindingResult> result);

  /// @brief Method TryGetLastVersion, addr 0x7088bcc, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetLastVersion(::System::Object* source, ::by_ref<int64_t> version);

  /// @brief Method UnregisterBinding, addr 0x708a4ac, size 0x300, virtual false, abstract: false, final false
  inline void UnregisterBinding(::UnityEngine::UIElements::VisualElement* element, /* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId> bindingId);

  /// @brief Method UpdateVersion, addr 0x7088c84, size 0x14, virtual false, abstract: false, final false
  inline void UpdateVersion(::System::Object* source, int64_t version);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* const& __cordl_internal_get_m_BindingDataLocalPool() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*& __cordl_internal_get_m_BindingDataLocalPool();

  constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* const& __cordl_internal_get_m_BindingsTracker() const;

  constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*& __cordl_internal_get_m_BindingsTracker();

  constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* const& __cordl_internal_get_m_DataSourceTracker() const;

  constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*& __cordl_internal_get_m_DataSourceTracker();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* const& __cordl_internal_get_m_DetectedChangesFromUI() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>*& __cordl_internal_get_m_DetectedChangesFromUI();

  constexpr ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData const& __cordl_internal_get_m_IgnoreUIChangesData() const;

  constexpr ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData& __cordl_internal_get_m_IgnoreUIChangesData();

  constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel> const& __cordl_internal_get_m_LogLevel() const;

  constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel>& __cordl_internal_get_m_LogLevel();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_Panel();

  constexpr void __cordl_internal_set_m_BindingDataLocalPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* value);

  constexpr void __cordl_internal_set_m_BindingsTracker(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* value);

  constexpr void __cordl_internal_set_m_DataSourceTracker(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* value);

  constexpr void __cordl_internal_set_m_DetectedChangesFromUI(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* value);

  constexpr void __cordl_internal_set_m_IgnoreUIChangesData(::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData value);

  constexpr void __cordl_internal_set_m_LogLevel(::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel> value);

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method .ctor, addr 0x7088548, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  static inline ::UnityEngine::UIElements::BindingLogLevel getStaticF_globalLogLevel();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_k_ClearBindingsToken();

  static inline ::UnityEngine::PropertyName getStaticF_k_RequestBindingPropertyName();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* getStaticF_s_Empty();

  /// @brief Method get_logLevel, addr 0x70861e0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingLogLevel get_logLevel();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_globalLogLevel(::UnityEngine::UIElements::BindingLogLevel value);

  static inline void setStaticF_k_ClearBindingsToken(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_k_RequestBindingPropertyName(::UnityEngine::PropertyName value);

  static inline void setStaticF_s_Empty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* value);

  /// @brief Method set_logLevel, addr 0x70860ec, size 0x58, virtual false, abstract: false, final false
  inline void set_logLevel(::UnityEngine::UIElements::BindingLogLevel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBindingManager(DataBindingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBindingManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBindingManager(DataBindingManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4051 };

  /// @brief Field m_BindingDataLocalPool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* ___m_BindingDataLocalPool;

  /// @brief Field m_LogLevel, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel> ___m_LogLevel;

  /// @brief Field m_Panel, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  /// @brief Field m_DataSourceTracker, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* ___m_DataSourceTracker;

  /// @brief Field m_BindingsTracker, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* ___m_BindingsTracker;

  /// @brief Field m_DetectedChangesFromUI, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* ___m_DetectedChangesFromUI;

  /// @brief Field m_IgnoreUIChangesData, offset: 0x40, size: 0xa8, def value: None
  ::UnityEngine::UIElements::DataBindingManager_IgnoreUIChangesData ___m_IgnoreUIChangesData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_BindingDataLocalPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_LogLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_Panel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_DataSourceTracker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_BindingsTracker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_DetectedChangesFromUI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBindingManager, ___m_IgnoreUIChangesData) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DataBindingManager) == 0xe8, "Size mismatch!");

} // namespace UnityEngine::UIElements
