#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewModel)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor;
}
namespace Unity::Hierarchy {
struct HierarchyTraversalDirection;
}
namespace Unity::Hierarchy {
struct HierarchyViewModelNodesEnumerable;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyViewModel_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_FlagsChangedEventHandler;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
class IHierarchySearchQueryParser;
}
namespace Unity::Hierarchy {
template <typename T> struct ReadOnlyNativeVector_1;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_BindingsMarshaller;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_FlagsChangedEventHandler;
}
namespace Unity::Hierarchy {
struct HierarchyViewModel_Enumerator;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModel*);
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*);
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewModel_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel*, "Unity.Hierarchy", "HierarchyViewModel");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyViewModel/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*, "Unity.Hierarchy", "HierarchyViewModel/FlagsChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel_Enumerator, "Unity.Hierarchy", "HierarchyViewModel/Enumerator");
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel/BindingsMarshaller
class CORDL_TYPE HierarchyViewModel_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToUnmanaged, addr 0x6f9ae9c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToUnmanaged(::Unity::Hierarchy::HierarchyViewModel* viewModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewModel_BindingsMarshaller(HierarchyViewModel_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewModel_BindingsMarshaller(HierarchyViewModel_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.MulticastDelegate
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel/FlagsChangedEventHandler
class CORDL_TYPE HierarchyViewModel_FlagsChangedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6f9af1c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Unity::Hierarchy::HierarchyNodeFlags flags);

  static inline ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6f9aeb0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel_FlagsChangedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_FlagsChangedEventHandler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewModel_FlagsChangedEventHandler(HierarchyViewModel_FlagsChangedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_FlagsChangedEventHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewModel_FlagsChangedEventHandler(HierarchyViewModel_FlagsChangedEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22615 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewModel/Enumerator
struct CORDL_TYPE HierarchyViewModel_Enumerator {
public:
  // Declarations
  /// @brief [IsReadOnly]
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNode Current;

  /// @brief Method MoveNext, addr 0x6f9b038, size 0x894, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6f9a644, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModel* hierarchyViewModel);

  /// @brief Method get_Current, addr 0x6f9af30, size 0x108, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel_Enumerator();

  // Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Nodes", ty:
  // "::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel* m_ViewModel, ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> m_Nodes, int32_t m_Version,
                                          int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_ViewModel, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* m_ViewModel;

  /// @brief Field m_Nodes, offset: 0x8, size: 0x10, def value: None
  ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> m_Nodes;

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Index, offset: 0x1c, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_ViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Nodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Index) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel_Enumerator) == 0x20, "Size mismatch!");

} // namespace Unity::Hierarchy
// [DefaultMember("Item")]
// [NativeHeader("Modules/HierarchyCore/Public/HierarchyViewModel.h")]
// [NativeHeader("Modules/HierarchyCore/HierarchyViewModelBindings.h")]
// [RequiredByNativeCode]
// Dependencies System.IntPtr, System.Object, Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel
class CORDL_TYPE HierarchyViewModel : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller;

  using Enumerator = ::Unity::Hierarchy::HierarchyViewModel_Enumerator;

  using FlagsChangedEventHandler = ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field FlagsChanged, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_FlagsChanged, put = __cordl_internal_set_FlagsChanged)) ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* FlagsChanged;

  __declspec(property(get = get_FlattenedNodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> FlattenedNodes;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief [IsReadOnly]
  __declspec(property(get = get_Item)) ::Unity::Hierarchy::HierarchyNode Item[];

  __declspec(property(get = get_Query)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Query;

  __declspec(property(put = set_QueryParser)) ::Unity::Hierarchy::IHierarchySearchQueryParser* QueryParser;

  __declspec(property(get = get_UpdateNeeded)) bool UpdateNeeded;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field <QueryParser>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryParser_k__BackingField,
                      put = __cordl_internal_set__QueryParser_k__BackingField)) ::Unity::Hierarchy::IHierarchySearchQueryParser* _QueryParser_k__BackingField;

  /// @brief Field m_FlattenedNodes, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_FlattenedNodes, put = __cordl_internal_set_m_FlattenedNodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>
      m_FlattenedNodes;

  /// @brief Field m_Hierarchy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hierarchy, put = __cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_HierarchyFlattened, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HierarchyFlattened, put = __cordl_internal_set_m_HierarchyFlattened)) ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_IsOwner, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOwner, put = __cordl_internal_set_m_IsOwner)) bool m_IsOwner;

  /// @brief Field m_Nodes, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> m_Nodes;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_Version, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearFlags, addr 0x6f9a410, size 0x4, virtual false, abstract: false, final false
  inline void ClearFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// [FreeFunction("HierarchyViewModelBindings::ClearFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method ClearFlagsNode, addr 0x6f9a414, size 0x68, virtual false, abstract: false, final false
  inline void ClearFlagsNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method ClearFlagsNode_Injected, addr 0x6f9a8c8, size 0x54, virtual false, abstract: false, final false
  static inline void ClearFlagsNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method ClearFlagsRecursive, addr 0x6f9a47c, size 0x4, virtual false, abstract: false, final false
  inline void ClearFlagsRecursive(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                  ::Unity::Hierarchy::HierarchyTraversalDirection direction);

  /// [FreeFunction("HierarchyViewModelBindings::ClearFlagsRecursiveNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method ClearFlagsRecursiveNode, addr 0x6f9a480, size 0x70, virtual false, abstract: false, final false
  inline void ClearFlagsRecursiveNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                      ::Unity::Hierarchy::HierarchyTraversalDirection direction);

  /// @brief Method ClearFlagsRecursiveNode_Injected, addr 0x6f9a91c, size 0x5c, virtual false, abstract: false, final false
  static inline void ClearFlagsRecursiveNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node,
                                                      ::Unity::Hierarchy::HierarchyNodeFlags flags, ::Unity::Hierarchy::HierarchyTraversalDirection direction);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method Contains, addr 0x6f9a1cc, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node);

  /// @brief Method Contains_Injected, addr 0x6f9a224, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node);

  /// [FreeFunction("HierarchyViewModelBindings::Create", IsThreadSafe = true)]
  /// @brief Method Create, addr 0x6f99dc0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags,
                                        ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount, ::by_ref<::System::IntPtr> indicesPtr, ::by_ref<int32_t> indicesCount,
                                        ::by_ref<int32_t> version);

  /// [RequiredByNativeCode]
  /// @brief Method CreateHierarchyViewModel, addr 0x6f9a978, size 0x124, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchyViewModel(::System::IntPtr nativePtr, ::System::IntPtr flattenedPtr, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount,
                                                          ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method Create_Injected, addr 0x6f9a6f4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags,
                                                 ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount, ::by_ref<::System::IntPtr> indicesPtr, ::by_ref<int32_t> indicesCount,
                                                 ::by_ref<int32_t> version);

  /// [FreeFunction("HierarchyViewModelBindings::Destroy", IsThreadSafe = true)]
  /// @brief Method Destroy, addr 0x6f9a048, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x6f99fe0, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6f99f80, size 0x60, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateNodesWithAllFlags, addr 0x6f9a4f0, size 0x9c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable EnumerateNodesWithAllFlags(::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method Finalize, addr 0x6f99f38, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x6f9a66c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyViewModel* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetEnumerator, addr 0x6f9a618, size 0x2c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyViewModel_Enumerator GetEnumerator();

  /// @brief Method HasAllFlags, addr 0x6f9a3a4, size 0x4, virtual false, abstract: false, final false
  inline bool HasAllFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// [FreeFunction("HierarchyViewModelBindings::HasAllFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method HasAllFlagsNode, addr 0x6f9a3a8, size 0x68, virtual false, abstract: false, final false
  inline bool HasAllFlagsNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method HasAllFlagsNode_Injected, addr 0x6f9a874, size 0x54, virtual false, abstract: false, final false
  static inline bool HasAllFlagsNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method IndexOf, addr 0x6f9a130, size 0x58, virtual false, abstract: false, final false
  inline int32_t IndexOf(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node);

  /// @brief Method IndexOf_Injected, addr 0x6f9a188, size 0x44, virtual false, abstract: false, final false
  static inline int32_t IndexOf_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeFlagsChanged, addr 0x6f9ab98, size 0xb4, virtual false, abstract: false, final false
  static inline void InvokeFlagsChanged(::System::IntPtr handlePtr, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  static inline ::Unity::Hierarchy::HierarchyViewModel* New_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  static inline ::Unity::Hierarchy::HierarchyViewModel* New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::System::IntPtr flattenedNodesPtr,
                                                                 int32_t flattenedNodesCount, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// [RequiredByNativeCode]
  /// @brief Method SearchBegin, addr 0x6f9ac4c, size 0x250, virtual false, abstract: false, final false
  static inline void SearchBegin(::System::IntPtr handlePtr);

  /// @brief Method SetFlags, addr 0x6f9a268, size 0x4, virtual false, abstract: false, final false
  inline void SetFlags(::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method SetFlags, addr 0x6f9a2c4, size 0x4, virtual false, abstract: false, final false
  inline void SetFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// [FreeFunction("HierarchyViewModelBindings::SetFlagsAll", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetFlagsAll, addr 0x6f9a26c, size 0x58, virtual false, abstract: false, final false
  inline void SetFlagsAll(::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method SetFlagsAll_Injected, addr 0x6f9a780, size 0x44, virtual false, abstract: false, final false
  static inline void SetFlagsAll_Injected(::System::IntPtr _unity_self, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// [FreeFunction("HierarchyViewModelBindings::SetFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetFlagsNode, addr 0x6f9a2c8, size 0x68, virtual false, abstract: false, final false
  inline void SetFlagsNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method SetFlagsNode_Injected, addr 0x6f9a7c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetFlagsNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method SetFlagsRecursive, addr 0x6f9a330, size 0x4, virtual false, abstract: false, final false
  inline void SetFlagsRecursive(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                ::Unity::Hierarchy::HierarchyTraversalDirection direction);

  /// [FreeFunction("HierarchyViewModelBindings::SetFlagsRecursiveNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetFlagsRecursiveNode, addr 0x6f9a334, size 0x70, virtual false, abstract: false, final false
  inline void SetFlagsRecursiveNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                    ::Unity::Hierarchy::HierarchyTraversalDirection direction);

  /// @brief Method SetFlagsRecursiveNode_Injected, addr 0x6f9a818, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFlagsRecursiveNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node,
                                                    ::Unity::Hierarchy::HierarchyNodeFlags flags, ::Unity::Hierarchy::HierarchyTraversalDirection direction);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method Update, addr 0x6f9a58c, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// [RequiredByNativeCode]
  /// @brief Method UpdateHierarchyViewModel, addr 0x6f9aa9c, size 0xfc, virtual false, abstract: false, final false
  static inline void UpdateHierarchyViewModel(::System::IntPtr handlePtr, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, ::System::IntPtr nodesPtr, int32_t nodesCount,
                                              int32_t version);

  /// @brief Method Update_Injected, addr 0x6f9a5dc, size 0x3c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self);

  constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* const& __cordl_internal_get_FlagsChanged() const;

  constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*& __cordl_internal_get_FlagsChanged();

  constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser* const& __cordl_internal_get__QueryParser_k__BackingField() const;

  constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser*& __cordl_internal_get__QueryParser_k__BackingField();

  constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> const& __cordl_internal_get_m_FlattenedNodes() const;

  constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>& __cordl_internal_get_m_FlattenedNodes();

  constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

  constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy();

  constexpr ::Unity::Hierarchy::HierarchyFlattened* const& __cordl_internal_get_m_HierarchyFlattened() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattened*& __cordl_internal_get_m_HierarchyFlattened();

  constexpr bool const& __cordl_internal_get_m_IsOwner() const;

  constexpr bool& __cordl_internal_get_m_IsOwner();

  constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> const& __cordl_internal_get_m_Nodes() const;

  constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>& __cordl_internal_get_m_Nodes();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_FlagsChanged(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* value);

  constexpr void __cordl_internal_set__QueryParser_k__BackingField(::Unity::Hierarchy::IHierarchySearchQueryParser* value);

  constexpr void __cordl_internal_set_m_FlattenedNodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> value);

  constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  constexpr void __cordl_internal_set_m_HierarchyFlattened(::Unity::Hierarchy::HierarchyFlattened* value);

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_Nodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6f99c74, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  /// @brief Method .ctor, addr 0x6f99e58, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, ::System::IntPtr nodesPtr,
                    int32_t nodesCount, int32_t version);

  /// @brief Method get_Count, addr 0x6f99afc, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_FlattenedNodes, addr 0x6f99bcc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> get_FlattenedNodes();

  /// @brief Method get_IsCreated, addr 0x6f99aec, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x6f9a084, size 0xac, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Item(int32_t index);

  /// [VisibleToOtherModules(new[] { "UnityEngine.HierarchyModule" })]
  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method get_Query, addr 0x6f99be8, size 0x50, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* get_Query();

  /// @brief Method get_Query_Injected, addr 0x6f99c38, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* get_Query_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("UpdateNeeded", IsThreadSafe = true)]
  /// @brief Method get_UpdateNeeded, addr 0x6f99b40, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x6f99b90, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// [VisibleToOtherModules(new[] { "UnityEngine.HierarchyModule" })]
  /// @brief Method get_Version, addr 0x6f99bd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [VisibleToOtherModules(new[] { "UnityEditor.HierarchyModule" })]
  /// [CompilerGenerated]
  /// @brief Method set_QueryParser, addr 0x6f99be0, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryParser(::Unity::Hierarchy::IHierarchySearchQueryParser* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewModel(HierarchyViewModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewModel(HierarchyViewModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22617 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* ___m_Hierarchy;

  /// @brief Field m_HierarchyFlattened, offset: 0x20, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* ___m_HierarchyFlattened;

  /// @brief Field m_FlattenedNodes, offset: 0x28, size: 0x10, def value: None
  ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> ___m_FlattenedNodes;

  /// @brief Field m_Nodes, offset: 0x38, size: 0x10, def value: None
  ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> ___m_Nodes;

  /// @brief Field m_Version, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_IsOwner, offset: 0x4c, size: 0x1, def value: None
  bool ___m_IsOwner;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field FlagsChanged, offset: 0x50, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* ___FlagsChanged;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <QueryParser>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Unity::Hierarchy::IHierarchySearchQueryParser* ____QueryParser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_HierarchyFlattened) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_FlattenedNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Nodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Version) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_IsOwner) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___FlagsChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ____QueryParser_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel) == 0x60, "Size mismatch!");

} // namespace Unity::Hierarchy
