#pragma once
// IWYU pragma private; include "Unity/Hierarchy/Hierarchy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Unity::Hierarchy::Hierarchy);
MARK_REF_PTR_T(::Unity::Hierarchy::Hierarchy_BindingsMarshaller);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.Hierarchy/BindingsMarshaller
class CORDL_TYPE Hierarchy_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x696e080, size 0x14, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::Hierarchy_BindingsMarshaller, 0x10>, "Size mismatch!");

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

  /// @brief Method Add, addr 0x696d420, size 0x4, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode Add(::ByRef<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method AddNode, addr 0x696d424, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode AddNode(::ByRef<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method AddNode_Injected, addr 0x696dbf4, size 0x54, virtual false, abstract: false, final false
  static inline void AddNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> parent, ::ByRef<::Unity::Hierarchy::HierarchyNode> ret);

  /// @brief Method Create, addr 0x696d1dc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::ByRef<::System::IntPtr> rootPtr, ::ByRef<::System::IntPtr> versionPtr);

  /// @brief Method CreateHierarchy, addr 0x696e010, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchy(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method Destroy, addr 0x696d344, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x696d2dc, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x696d288, size 0x54, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateChildren, addr 0x696d7c0, size 0x34, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeChildren EnumerateChildren(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateChildrenPtr, addr 0x696d7f4, size 0x58, virtual false, abstract: false, final false
  inline ::System::IntPtr EnumerateChildrenPtr(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateChildrenPtr_Injected, addr 0x696dc48, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr EnumerateChildrenPtr_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateNodeTypeHandlersBase, addr 0x696d380, size 0x4, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable EnumerateNodeTypeHandlersBase();

  /// @brief Method Exists, addr 0x696d384, size 0x58, virtual false, abstract: false, final false
  inline bool Exists(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Exists_Injected, addr 0x696d3dc, size 0x44, virtual false, abstract: false, final false
  static inline bool Exists_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Finalize, addr 0x696d240, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x696daec, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::Hierarchy* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetChildren, addr 0x696d614, size 0x158, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchyNode, ::Array<::Unity::Hierarchy::HierarchyNode>*> GetChildren(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount, addr 0x696d84c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetChildrenCount(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount_Injected, addr 0x696d8a4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetChildrenCount_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildren_Injected, addr 0x696d76c, size 0x54, virtual false, abstract: false, final false
  static inline void GetChildren_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetNodeTypeHandlersBaseCount, addr 0x696c924, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetNodeTypeHandlersBaseCount();

  /// @brief Method GetNodeTypeHandlersBaseCount_Injected, addr 0x696db74, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetNodeTypeHandlersBaseCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetNodeTypeHandlersBaseSpan, addr 0x696c974, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetNodeTypeHandlersBaseSpan(::System::Span_1<::System::IntPtr> outHandlers);

  /// @brief Method GetNodeTypeHandlersBaseSpan_Injected, addr 0x696dbb0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetNodeTypeHandlersBaseSpan_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> outHandlers);

  /// @brief Method GetOrCreateProperty, addr 0x696dc8c, size 0x170, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyPropertyId GetOrCreateProperty(::StringW name, ::ByRef<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor);

  /// @brief Method GetOrCreatePropertyUnmanaged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> GetOrCreatePropertyUnmanaged(::StringW name, ::Unity::Hierarchy::HierarchyPropertyStorageType type);

  /// @brief Method GetOrCreateProperty_Injected, addr 0x696ddfc, size 0x5c, virtual false, abstract: false, final false
  static inline void GetOrCreateProperty_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                  ::ByRef<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor, ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> ret);

  /// @brief Method GetParent, addr 0x696d550, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode GetParent(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetParent_Injected, addr 0x696d5c0, size 0x54, virtual false, abstract: false, final false
  static inline void GetParent_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::ByRef<::Unity::Hierarchy::HierarchyNode> ret);

  /// @brief Method GetPropertyRaw, addr 0x696df44, size 0x70, virtual false, abstract: false, final false
  inline void* GetPropertyRaw(::ByRef<::Unity::Hierarchy::HierarchyPropertyId> property, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::ByRef<int32_t> size);

  /// @brief Method GetPropertyRaw_Injected, addr 0x696dfb4, size 0x5c, virtual false, abstract: false, final false
  static inline void* GetPropertyRaw_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> property, ::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                              ::ByRef<int32_t> size);

  static inline ::Unity::Hierarchy::Hierarchy* New_ctor();

  static inline ::Unity::Hierarchy::Hierarchy* New_ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method SetParent, addr 0x696d494, size 0x68, virtual false, abstract: false, final false
  inline bool SetParent(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::ByRef<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method SetParent_Injected, addr 0x696d4fc, size 0x54, virtual false, abstract: false, final false
  static inline bool SetParent_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::ByRef<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method SetPropertyRaw, addr 0x696de58, size 0x80, virtual false, abstract: false, final false
  inline void SetPropertyRaw(::ByRef<::Unity::Hierarchy::HierarchyPropertyId> property, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, void* ptr, int32_t size);

  /// @brief Method SetPropertyRaw_Injected, addr 0x696ded8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetPropertyRaw_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> property, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, void* ptr,
                                             int32_t size);

  /// @brief Method SetSortIndex, addr 0x696d8e8, size 0x68, virtual false, abstract: false, final false
  inline void SetSortIndex(::ByRef<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex);

  /// @brief Method SetSortIndex_Injected, addr 0x696d950, size 0x54, virtual false, abstract: false, final false
  static inline void SetSortIndex_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex);

  /// @brief Method SortChildren, addr 0x696d9a4, size 0x68, virtual false, abstract: false, final false
  inline void SortChildren(::ByRef<::Unity::Hierarchy::HierarchyNode> node, bool recurse);

  /// @brief Method SortChildren_Injected, addr 0x696da0c, size 0x54, virtual false, abstract: false, final false
  static inline void SortChildren_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, bool recurse);

  /// @brief Method Update, addr 0x696da60, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Update_Injected, addr 0x696dab0, size 0x3c, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x696d164, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x696d230, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method get_IsCreated, addr 0x696d0b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Root, addr 0x696d0c4, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Root();

  /// @brief Method get_UpdateNeeded, addr 0x696d0cc, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x696d11c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_Version, addr 0x696d158, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21749 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::Hierarchy, 0x30>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::Hierarchy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::Hierarchy*, "Unity.Hierarchy", "Hierarchy");
NEED_NO_BOX(::Unity::Hierarchy::Hierarchy_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::Hierarchy_BindingsMarshaller*, "Unity.Hierarchy", "Hierarchy/BindingsMarshaller");
