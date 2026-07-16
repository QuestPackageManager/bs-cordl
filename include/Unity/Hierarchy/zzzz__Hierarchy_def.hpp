#pragma once
// IWYU pragma private; include "Unity/Hierarchy/Hierarchy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hierarchy)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Hierarchy {
struct HierarchyNodeChildren;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBaseEnumerable;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
struct HierarchyPropertyDescriptor;
}
namespace Unity::Hierarchy {
struct HierarchyPropertyId;
}
namespace Unity::Hierarchy {
struct HierarchyPropertyStorageType;
}
namespace Unity::Hierarchy {
template <typename T> struct HierarchyPropertyUnmanaged_1;
}
namespace Unity::Hierarchy {
class Hierarchy_BindingsMarshaller;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
class Hierarchy_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::Hierarchy*);
MARK_REF_T(::Unity::Hierarchy::Hierarchy_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::Hierarchy*, "Unity.Hierarchy", "Hierarchy");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::Hierarchy_BindingsMarshaller*, "Unity.Hierarchy", "Hierarchy/BindingsMarshaller");
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.Hierarchy/BindingsMarshaller
class CORDL_TYPE Hierarchy_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6b35fdc, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::Unity::Hierarchy::Hierarchy* hierarchy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hierarchy_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hierarchy_BindingsMarshaller(Hierarchy_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hierarchy_BindingsMarshaller(Hierarchy_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::Hierarchy_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.Hierarchy
class CORDL_TYPE Hierarchy : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::Hierarchy_BindingsMarshaller;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Root)) ::Unity::Hierarchy::HierarchyNode Root;

  __declspec(property(get = get_UpdateNeeded)) bool UpdateNeeded;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field m_IsOwner, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOwner, put = __cordl_internal_set_m_IsOwner)) bool m_IsOwner;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_RootPtr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootPtr, put = __cordl_internal_set_m_RootPtr)) ::System::IntPtr m_RootPtr;

  /// @brief Field m_VersionPtr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VersionPtr, put = __cordl_internal_set_m_VersionPtr)) ::System::IntPtr m_VersionPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x6b3537c, size 0x4, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode Add(::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method AddNode, addr 0x6b35380, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode AddNode(::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method AddNode_Injected, addr 0x6b35b50, size 0x54, virtual false, abstract: false, final false
  static inline void AddNode_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> parent, ::by_ref<::Unity::Hierarchy::HierarchyNode> ret);

  /// @brief Method Create, addr 0x6b35138, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::by_ref<::System::IntPtr> rootPtr, ::by_ref<::System::IntPtr> versionPtr);

  /// @brief Method CreateHierarchy, addr 0x6b35f6c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchy(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method Destroy, addr 0x6b352a0, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x6b35238, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b351e4, size 0x54, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateChildren, addr 0x6b3571c, size 0x34, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeChildren EnumerateChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateChildrenPtr, addr 0x6b35750, size 0x58, virtual false, abstract: false, final false
  inline ::System::IntPtr EnumerateChildrenPtr(::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateChildrenPtr_Injected, addr 0x6b35ba4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr EnumerateChildrenPtr_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateNodeTypeHandlersBase, addr 0x6b352dc, size 0x4, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable EnumerateNodeTypeHandlersBase();

  /// @brief Method Exists, addr 0x6b352e0, size 0x58, virtual false, abstract: false, final false
  inline bool Exists(::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Exists_Injected, addr 0x6b35338, size 0x44, virtual false, abstract: false, final false
  static inline bool Exists_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Finalize, addr 0x6b3519c, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x6b35a48, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::Hierarchy* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetChildren, addr 0x6b35570, size 0x158, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchyNode> GetChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount, addr 0x6b357a8, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetChildrenCount(::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount_Injected, addr 0x6b35800, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetChildrenCount_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildren_Injected, addr 0x6b356c8, size 0x54, virtual false, abstract: false, final false
  static inline void GetChildren_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetNodeTypeHandlersBaseCount, addr 0x6b34880, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetNodeTypeHandlersBaseCount();

  /// @brief Method GetNodeTypeHandlersBaseCount_Injected, addr 0x6b35ad0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetNodeTypeHandlersBaseCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetNodeTypeHandlersBaseSpan, addr 0x6b348d0, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetNodeTypeHandlersBaseSpan(::System::Span_1<::System::IntPtr> outHandlers);

  /// @brief Method GetNodeTypeHandlersBaseSpan_Injected, addr 0x6b35b0c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetNodeTypeHandlersBaseSpan_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> outHandlers);

  /// @brief Method GetOrCreateProperty, addr 0x6b35be8, size 0x170, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyPropertyId GetOrCreateProperty(::StringW name, ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor);

  /// @brief Method GetOrCreatePropertyUnmanaged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> GetOrCreatePropertyUnmanaged(::StringW name, ::Unity::Hierarchy::HierarchyPropertyStorageType type);

  /// @brief Method GetOrCreateProperty_Injected, addr 0x6b35d58, size 0x5c, virtual false, abstract: false, final false
  static inline void GetOrCreateProperty_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                  ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> ret);

  /// @brief Method GetParent, addr 0x6b354ac, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode GetParent(::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetParent_Injected, addr 0x6b3551c, size 0x54, virtual false, abstract: false, final false
  static inline void GetParent_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> ret);

  /// @brief Method GetPropertyRaw, addr 0x6b35ea0, size 0x70, virtual false, abstract: false, final false
  inline void* GetPropertyRaw(::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<int32_t> size);

  /// @brief Method GetPropertyRaw_Injected, addr 0x6b35f10, size 0x5c, virtual false, abstract: false, final false
  static inline void* GetPropertyRaw_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                              ::by_ref<int32_t> size);

  static inline ::Unity::Hierarchy::Hierarchy* New_ctor();

  static inline ::Unity::Hierarchy::Hierarchy* New_ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method SetParent, addr 0x6b353f0, size 0x68, virtual false, abstract: false, final false
  inline bool SetParent(::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method SetParent_Injected, addr 0x6b35458, size 0x54, virtual false, abstract: false, final false
  static inline bool SetParent_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method SetPropertyRaw, addr 0x6b35db4, size 0x80, virtual false, abstract: false, final false
  inline void SetPropertyRaw(::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, void* ptr, int32_t size);

  /// @brief Method SetPropertyRaw_Injected, addr 0x6b35e34, size 0x6c, virtual false, abstract: false, final false
  static inline void SetPropertyRaw_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, void* ptr,
                                             int32_t size);

  /// @brief Method SetSortIndex, addr 0x6b35844, size 0x68, virtual false, abstract: false, final false
  inline void SetSortIndex(::by_ref<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex);

  /// @brief Method SetSortIndex_Injected, addr 0x6b358ac, size 0x54, virtual false, abstract: false, final false
  static inline void SetSortIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex);

  /// @brief Method SortChildren, addr 0x6b35900, size 0x68, virtual false, abstract: false, final false
  inline void SortChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node, bool recurse);

  /// @brief Method SortChildren_Injected, addr 0x6b35968, size 0x54, virtual false, abstract: false, final false
  static inline void SortChildren_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, bool recurse);

  /// @brief Method Update, addr 0x6b359bc, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Update_Injected, addr 0x6b35a0c, size 0x3c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self);

  constexpr bool const& __cordl_internal_get_m_IsOwner() const;

  constexpr bool& __cordl_internal_get_m_IsOwner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_RootPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_RootPtr();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_VersionPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_VersionPtr();

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_RootPtr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_VersionPtr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6b350c0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b3518c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method get_IsCreated, addr 0x6b35010, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Root, addr 0x6b35020, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Root();

  /// @brief Method get_UpdateNeeded, addr 0x6b35028, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x6b35078, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_Version, addr 0x6b350b4, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hierarchy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hierarchy(Hierarchy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hierarchy(Hierarchy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21890 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_RootPtr, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_RootPtr;

  /// @brief Field m_VersionPtr, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___m_VersionPtr;

  /// @brief Field m_IsOwner, offset: 0x28, size: 0x1, def value: None
  bool ___m_IsOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_RootPtr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_VersionPtr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_IsOwner) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::Hierarchy) == 0x30, "Size mismatch!");

} // namespace Unity::Hierarchy
