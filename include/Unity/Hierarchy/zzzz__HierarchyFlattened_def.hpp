#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattened.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattened)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedChildrenEnumerable;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyFlattened_Enumerator;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
class HierarchyFlattened_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyFlattened_Enumerator;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyFlattened*);
MARK_REF_T(::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller*);
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattened_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyFlattened*, "Unity.Hierarchy", "HierarchyFlattened");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyFlattened/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyFlattened_Enumerator, "Unity.Hierarchy", "HierarchyFlattened/Enumerator");
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyFlattened/BindingsMarshaller
class CORDL_TYPE HierarchyFlattened_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToUnmanaged, addr 0x6f97f84, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToUnmanaged(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattened_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyFlattened_BindingsMarshaller(HierarchyFlattened_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyFlattened_BindingsMarshaller(HierarchyFlattened_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22599 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattened/Enumerator
struct CORDL_TYPE HierarchyFlattened_Enumerator {
public:
  // Declarations
  /// @brief [IsReadOnly]
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyFlattenedNode Current;

  /// @brief Method MoveNext, addr 0x6f980a4, size 0x58, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6f97c68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened);

  /// @brief Method get_Current, addr 0x6f97f98, size 0x10c, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattened_Enumerator();

  // Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FlattenedNodes", ty:
  // "::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyFlattened_Enumerator(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                          ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> m_FlattenedNodes, int32_t m_Version, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_FlattenedNodes, offset: 0x8, size: 0x10, def value: None
  ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> m_FlattenedNodes;

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Index, offset: 0x1c, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_FlattenedNodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_Index) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyFlattened_Enumerator) == 0x20, "Size mismatch!");

} // namespace Unity::Hierarchy
// [NativeHeader("Modules/HierarchyCore/HierarchyFlattenedBindings.h")]
// [NativeHeader("Modules/HierarchyCore/Public/HierarchyFlattened.h")]
// [DefaultMember("Item")]
// [RequiredByNativeCode]
// Dependencies System.IntPtr, System.Object, Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyFlattened
class CORDL_TYPE HierarchyFlattened : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller;

  using Enumerator = ::Unity::Hierarchy::HierarchyFlattened_Enumerator;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief [IsReadOnly]
  __declspec(property(get = get_Item)) ::Unity::Hierarchy::HierarchyFlattenedNode Item[];

  __declspec(property(get = get_UpdateNeeded)) bool UpdateNeeded;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field m_FlattenedNodes, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_FlattenedNodes, put = __cordl_internal_set_m_FlattenedNodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>
      m_FlattenedNodes;

  /// @brief Field m_Hierarchy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hierarchy, put = __cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_IsOwner, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOwner, put = __cordl_internal_set_m_IsOwner)) bool m_IsOwner;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_Version, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method Contains, addr 0x6f937a4, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Contains_Injected, addr 0x6f97b50, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// [FreeFunction("HierarchyFlattenedBindings::Create", IsThreadSafe = true)]
  /// @brief Method Create, addr 0x6f9781c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount,
                                        ::by_ref<int32_t> version);

  /// [RequiredByNativeCode]
  /// @brief Method CreateHierarchyFlattened, addr 0x6f97d84, size 0x130, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchyFlattened(::System::IntPtr nativePtr, ::System::IntPtr hierarchyPtr, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, int32_t version);

  /// @brief Method Create_Injected, addr 0x6f97d18, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchy, ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount, ::by_ref<int32_t> version);

  /// [FreeFunction("HierarchyFlattenedBindings::Destroy", IsThreadSafe = true)]
  /// @brief Method Destroy, addr 0x6f97a1c, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x6f979b4, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6f9795c, size 0x58, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateChildren, addr 0x6f97b94, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable EnumerateChildren(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Finalize, addr 0x6f97914, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x6f97c90, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyFlattened* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetEnumerator, addr 0x6f97c3c, size 0x2c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattened_Enumerator GetEnumerator();

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method IndexOf, addr 0x6f937fc, size 0x58, virtual false, abstract: false, final false
  inline int32_t IndexOf(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method IndexOf_Injected, addr 0x6f97b0c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t IndexOf_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  static inline ::Unity::Hierarchy::HierarchyFlattened* New_ctor(::Unity::Hierarchy::Hierarchy* hierarchy);

  static inline ::Unity::Hierarchy::HierarchyFlattened* New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount,
                                                                 int32_t version);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method Update, addr 0x6f97bb0, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// [RequiredByNativeCode]
  /// @brief Method UpdateHierarchyFlattened, addr 0x6f97eb4, size 0xd0, virtual false, abstract: false, final false
  static inline void UpdateHierarchyFlattened(::System::IntPtr handlePtr, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, int32_t version);

  /// @brief Method Update_Injected, addr 0x6f97c00, size 0x3c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self);

  constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> const& __cordl_internal_get_m_FlattenedNodes() const;

  constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>& __cordl_internal_get_m_FlattenedNodes();

  constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

  constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy();

  constexpr bool const& __cordl_internal_get_m_IsOwner() const;

  constexpr bool& __cordl_internal_get_m_IsOwner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_FlattenedNodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> value);

  constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6f97748, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::Hierarchy* hierarchy);

  /// @brief Method .ctor, addr 0x6f97894, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, int32_t version);

  /// @brief Method get_IsCreated, addr 0x6f93720, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x6f97a58, size 0xb4, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> get_Item(int32_t index);

  /// [NativeMethod("UpdateNeeded", IsThreadSafe = true)]
  /// @brief Method get_UpdateNeeded, addr 0x6f976b4, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x6f97704, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_Version, addr 0x6f97740, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattened();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyFlattened(HierarchyFlattened&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyFlattened(HierarchyFlattened const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22601 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* ___m_Hierarchy;

  /// @brief Field m_FlattenedNodes, offset: 0x20, size: 0x10, def value: None
  ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> ___m_FlattenedNodes;

  /// @brief Field m_Version, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_IsOwner, offset: 0x34, size: 0x1, def value: None
  bool ___m_IsOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_FlattenedNodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_Version) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_IsOwner) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyFlattened) == 0x38, "Size mismatch!");

} // namespace Unity::Hierarchy
