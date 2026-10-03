#pragma once
// IWYU pragma private; include "Unity/Hierarchy/Hierarchy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
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
class Object;
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
class HierarchyNodeTypeHandlerBase;
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
namespace Unity::Hierarchy {
class Hierarchy_HandlerCreatedEventHandler;
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
namespace Unity::Hierarchy {
class Hierarchy_HandlerCreatedEventHandler;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::Hierarchy*);
MARK_REF_T(::Unity::Hierarchy::Hierarchy_BindingsMarshaller*);
MARK_REF_T(::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler*);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::Hierarchy*, "Unity.Hierarchy", "Hierarchy");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::Hierarchy_BindingsMarshaller*, "Unity.Hierarchy", "Hierarchy/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler*, "Unity.Hierarchy", "Hierarchy/HandlerCreatedEventHandler");
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.Hierarchy/BindingsMarshaller
class CORDL_TYPE Hierarchy_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToUnmanaged, addr 0x6f97304, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToUnmanaged(::Unity::Hierarchy::Hierarchy* hierarchy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hierarchy_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hierarchy_BindingsMarshaller(Hierarchy_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hierarchy_BindingsMarshaller(Hierarchy_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::Hierarchy_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace Unity::Hierarchy
// [VisibleToOtherModules(new[] { "UnityEngine.HierarchyModule" })]
// Dependencies System.MulticastDelegate
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.Hierarchy/HandlerCreatedEventHandler
class CORDL_TYPE Hierarchy_HandlerCreatedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6f9745c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* handler);

  static inline ::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6f97318, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hierarchy_HandlerCreatedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy_HandlerCreatedEventHandler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hierarchy_HandlerCreatedEventHandler(Hierarchy_HandlerCreatedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy_HandlerCreatedEventHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hierarchy_HandlerCreatedEventHandler(Hierarchy_HandlerCreatedEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler) == 0x80, "Size mismatch!");

} // namespace Unity::Hierarchy
// [RequiredByNativeCode]
// [NativeHeader("Modules/HierarchyCore/Public/HierarchyNodeTypeHandlerBase.h")]
// [NativeHeader("Modules/HierarchyCore/Public/Hierarchy.h")]
// [NativeHeader("Modules/HierarchyCore/HierarchyBindings.h")]
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.Hierarchy
class CORDL_TYPE Hierarchy : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::Hierarchy_BindingsMarshaller;

  using HandlerCreatedEventHandler = ::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler;

  /// @brief Field HandlerCreated, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_HandlerCreated, put = __cordl_internal_set_HandlerCreated)) ::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler* HandlerCreated;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief [IsReadOnly]
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

  /// @brief Method Add, addr 0x6f96530, size 0x4, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode Add(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// [FreeFunction("HierarchyBindings::AddNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method AddNode, addr 0x6f96534, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode AddNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method AddNode_Injected, addr 0x6f96c94, size 0x54, virtual false, abstract: false, final false
  static inline void AddNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> parent, ::by_ref<::Unity::Hierarchy::HierarchyNode> ret);

  /// [FreeFunction("HierarchyBindings::Create", IsThreadSafe = true)]
  /// @brief Method Create, addr 0x6f962ec, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::by_ref<::System::IntPtr> rootPtr, ::by_ref<::System::IntPtr> versionPtr);

  /// [RequiredByNativeCode]
  /// @brief Method CreateHierarchy, addr 0x6f97104, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchy(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// [FreeFunction("HierarchyBindings::Destroy", IsThreadSafe = true)]
  /// @brief Method Destroy, addr 0x6f96454, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x6f963ec, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6f96398, size 0x54, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateChildren, addr 0x6f96880, size 0x34, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeChildren EnumerateChildren(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// [FreeFunction("HierarchyBindings::EnumerateChildrenPtr", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method EnumerateChildrenPtr, addr 0x6f968b4, size 0x58, virtual false, abstract: false, final false
  inline ::System::IntPtr EnumerateChildrenPtr(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateChildrenPtr_Injected, addr 0x6f96d3c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr EnumerateChildrenPtr_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method EnumerateNodeTypeHandlersBase, addr 0x6f96490, size 0x4, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable EnumerateNodeTypeHandlersBase();

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method Exists, addr 0x6f96494, size 0x58, virtual false, abstract: false, final false
  inline bool Exists(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Exists_Injected, addr 0x6f964ec, size 0x44, virtual false, abstract: false, final false
  static inline bool Exists_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Finalize, addr 0x6f96350, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x6f96b8c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::Hierarchy* FromIntPtr(::System::IntPtr handlePtr);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetChildren, addr 0x6f966d4, size 0x158, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchyNode> GetChildren(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetChildrenCount, addr 0x6f9690c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetChildrenCount(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount_Injected, addr 0x6f96964, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetChildrenCount_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildren_Injected, addr 0x6f9682c, size 0x54, virtual false, abstract: false, final false
  static inline void GetChildren_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                          ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [VisibleToOtherModules(new[] { "UnityEngine.HierarchyModule" })]
  /// [FreeFunction("HierarchyBindings::GetNodeTypeHandlersBaseCount", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method GetNodeTypeHandlersBaseCount, addr 0x6f9598c, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetNodeTypeHandlersBaseCount();

  /// @brief Method GetNodeTypeHandlersBaseCount_Injected, addr 0x6f96c14, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetNodeTypeHandlersBaseCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("HierarchyBindings::GetNodeTypeHandlersBaseSpan", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// [VisibleToOtherModules(new[] { "UnityEngine.HierarchyModule" })]
  /// @brief Method GetNodeTypeHandlersBaseSpan, addr 0x6f959dc, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetNodeTypeHandlersBaseSpan(::System::Span_1<::System::IntPtr> outHandlers);

  /// @brief Method GetNodeTypeHandlersBaseSpan_Injected, addr 0x6f96c50, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetNodeTypeHandlersBaseSpan_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> outHandlers);

  /// [FreeFunction("HierarchyBindings::GetOrCreateProperty", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetOrCreateProperty, addr 0x6f96d80, size 0x170, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyPropertyId GetOrCreateProperty(::StringW name, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor);

  /// @brief Method GetOrCreatePropertyUnmanaged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> GetOrCreatePropertyUnmanaged(::StringW name, ::Unity::Hierarchy::HierarchyPropertyStorageType type);

  /// @brief Method GetOrCreateProperty_Injected, addr 0x6f96ef0, size 0x5c, virtual false, abstract: false, final false
  static inline void GetOrCreateProperty_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                  /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> ret);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetParent, addr 0x6f96610, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode GetParent(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetParent_Injected, addr 0x6f96680, size 0x54, virtual false, abstract: false, final false
  static inline void GetParent_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> ret);

  /// [FreeFunction("HierarchyBindings::GetPropertyRaw", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetPropertyRaw, addr 0x6f97038, size 0x70, virtual false, abstract: false, final false
  inline void* GetPropertyRaw(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                              ::by_ref<int32_t> size);

  /// @brief Method GetPropertyRaw_Injected, addr 0x6f970a8, size 0x5c, virtual false, abstract: false, final false
  static inline void* GetPropertyRaw_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property,
                                              /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<int32_t> size);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeHandlerCreated, addr 0x6f97174, size 0x190, virtual false, abstract: false, final false
  static inline void InvokeHandlerCreated(::System::IntPtr hierarchyPtr, ::System::IntPtr handlerPtr);

  static inline ::Unity::Hierarchy::Hierarchy* New_ctor();

  static inline ::Unity::Hierarchy::Hierarchy* New_ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// [FreeFunction("HierarchyBindings::SetNodeParent", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetNodeParent, addr 0x6f965a8, size 0x68, virtual false, abstract: false, final false
  inline void SetNodeParent(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method SetNodeParent_Injected, addr 0x6f96ce8, size 0x54, virtual false, abstract: false, final false
  static inline void SetNodeParent_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                            /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method SetParent, addr 0x6f965a4, size 0x4, virtual false, abstract: false, final false
  inline void SetParent(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> parent);

  /// [FreeFunction("HierarchyBindings::SetPropertyRaw", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetPropertyRaw, addr 0x6f96f4c, size 0x80, virtual false, abstract: false, final false
  inline void SetPropertyRaw(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, void* ptr,
                             int32_t size);

  /// @brief Method SetPropertyRaw_Injected, addr 0x6f96fcc, size 0x6c, virtual false, abstract: false, final false
  static inline void SetPropertyRaw_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, void* ptr, int32_t size);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetSortIndex, addr 0x6f969a8, size 0x68, virtual false, abstract: false, final false
  inline void SetSortIndex(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex);

  /// @brief Method SetSortIndex_Injected, addr 0x6f96a10, size 0x54, virtual false, abstract: false, final false
  static inline void SetSortIndex_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SortChildren, addr 0x6f96a64, size 0x58, virtual false, abstract: false, final false
  inline void SortChildren(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method SortChildren_Injected, addr 0x6f96abc, size 0x44, virtual false, abstract: false, final false
  static inline void SortChildren_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method Update, addr 0x6f96b00, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Update_Injected, addr 0x6f96b50, size 0x3c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self);

  constexpr ::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler* const& __cordl_internal_get_HandlerCreated() const;

  constexpr ::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler*& __cordl_internal_get_HandlerCreated();

  constexpr bool const& __cordl_internal_get_m_IsOwner() const;

  constexpr bool& __cordl_internal_get_m_IsOwner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_RootPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_RootPtr();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_VersionPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_VersionPtr();

  constexpr void __cordl_internal_set_HandlerCreated(::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler* value);

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_RootPtr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_VersionPtr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6f96274, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6f96340, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr);

  /// @brief Method get_IsCreated, addr 0x6f961c4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Root, addr 0x6f961d4, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Root();

  /// [NativeMethod("UpdateNeeded", IsThreadSafe = true)]
  /// @brief Method get_UpdateNeeded, addr 0x6f961dc, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x6f9622c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_Version, addr 0x6f96268, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hierarchy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hierarchy(Hierarchy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hierarchy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hierarchy(Hierarchy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22596 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_RootPtr, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_RootPtr;

  /// @brief Field m_VersionPtr, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___m_VersionPtr;

  /// @brief Field m_IsOwner, offset: 0x28, size: 0x1, def value: None
  bool ___m_IsOwner;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field HandlerCreated, offset: 0x30, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy_HandlerCreatedEventHandler* ___HandlerCreated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_RootPtr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_VersionPtr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___m_IsOwner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::Hierarchy, ___HandlerCreated) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::Hierarchy) == 0x38, "Size mismatch!");

} // namespace Unity::Hierarchy
