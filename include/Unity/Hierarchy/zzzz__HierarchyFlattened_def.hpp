#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattened.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
struct HierarchyFlattenedNodeChildren;
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
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyFlattened);
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller);
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattened_Enumerator);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyFlattened/BindingsMarshaller
class CORDL_TYPE HierarchyFlattened_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6905c40, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattened_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyFlattened_BindingsMarshaller(HierarchyFlattened_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyFlattened_BindingsMarshaller(HierarchyFlattened_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21725 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattened/Enumerator
struct CORDL_TYPE HierarchyFlattened_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyFlattenedNode Current;

  /// @brief Method MoveNext, addr 0x6905cd8, size 0x20, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6905988, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened);

  /// @brief Method get_Current, addr 0x6905c54, size 0x84, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyFlattenedNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattened_Enumerator();

  // Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None }, CppParam { name: "m_NodesPtr", ty:
  // "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyFlattened_Enumerator(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr, int32_t m_NodesCount, int32_t m_Version,
                                          int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_NodesPtr, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr;

  /// @brief Field m_NodesCount, offset: 0x10, size: 0x4, def value: None
  int32_t m_NodesCount;

  /// @brief Field m_Version, offset: 0x14, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_NodesPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_NodesCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_Version) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened_Enumerator, m_Index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyFlattened_Enumerator, 0x20>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyFlattened
class CORDL_TYPE HierarchyFlattened : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller;

  using Enumerator = ::Unity::Hierarchy::HierarchyFlattened_Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Hierarchy)) ::Unity::Hierarchy::Hierarchy* Hierarchy;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Item)) ::Unity::Hierarchy::HierarchyFlattenedNode Item[];

  __declspec(property(get = get_NodesPtr)) ::Unity::Hierarchy::HierarchyFlattenedNode* NodesPtr;

  __declspec(property(get = get_UpdateNeeded)) bool UpdateNeeded;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field m_Hierarchy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hierarchy, put = __cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_IsOwner, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOwner, put = __cordl_internal_set_m_IsOwner)) bool m_IsOwner;

  /// @brief Field m_NodesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NodesCount, put = __cordl_internal_set_m_NodesCount)) int32_t m_NodesCount;

  /// @brief Field m_NodesPtr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodesPtr, put = __cordl_internal_set_m_NodesPtr)) ::System::IntPtr m_NodesPtr;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_Version, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Contains, addr 0x6901858, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Contains_Injected, addr 0x690582c, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Create, addr 0x69055ac, size 0x78, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::ByRef<::System::IntPtr> nodesPtr, ::ByRef<int32_t> nodesCount,
                                        ::ByRef<int32_t> version);

  /// @brief Method CreateHierarchyFlattened, addr 0x6905aa8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchyFlattened(::System::IntPtr nativePtr, ::System::IntPtr hierarchyPtr, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method Create_Injected, addr 0x6905a3c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchy, ::ByRef<::System::IntPtr> nodesPtr, ::ByRef<int32_t> nodesCount, ::ByRef<int32_t> version);

  /// @brief Method Destroy, addr 0x690573c, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x69056d4, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6905680, size 0x54, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateChildren, addr 0x6905870, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattenedNodeChildren EnumerateChildren(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Finalize, addr 0x6905638, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x69059b4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyFlattened* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetChildrenCount, addr 0x69018b0, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetChildrenCount(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount_Injected, addr 0x6905888, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetChildrenCount_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetEnumerator, addr 0x6905958, size 0x30, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattened_Enumerator GetEnumerator();

  /// @brief Method IndexOf, addr 0x6901c78, size 0x58, virtual false, abstract: false, final false
  inline int32_t IndexOf(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method IndexOf_Injected, addr 0x69057e8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t IndexOf_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  static inline ::Unity::Hierarchy::HierarchyFlattened* New_ctor(::Unity::Hierarchy::Hierarchy* hierarchy);

  static inline ::Unity::Hierarchy::HierarchyFlattened* New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method Update, addr 0x69058cc, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHierarchyFlattened, addr 0x6905b9c, size 0xa4, virtual false, abstract: false, final false
  static inline void UpdateHierarchyFlattened(::System::IntPtr handlePtr, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method Update_Injected, addr 0x690591c, size 0x3c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self);

  constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

  constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy();

  constexpr bool const& __cordl_internal_get_m_IsOwner() const;

  constexpr bool& __cordl_internal_get_m_IsOwner();

  constexpr int32_t const& __cordl_internal_get_m_NodesCount() const;

  constexpr int32_t& __cordl_internal_get_m_NodesCount();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_NodesPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_NodesPtr();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_NodesCount(int32_t value);

  constexpr void __cordl_internal_set_m_NodesPtr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6905508, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::Hierarchy* hierarchy);

  /// @brief Method .ctor, addr 0x6905624, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method get_Count, addr 0x6905464, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Hierarchy, addr 0x69054f8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::Hierarchy* get_Hierarchy();

  /// @brief Method get_IsCreated, addr 0x6905454, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x6905778, size 0x70, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyFlattenedNode> get_Item(int32_t index);

  /// @brief Method get_NodesPtr, addr 0x6904060, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattenedNode* get_NodesPtr();

  /// @brief Method get_UpdateNeeded, addr 0x690546c, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x69054bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_Version, addr 0x6905500, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattened();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyFlattened(HierarchyFlattened&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattened", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyFlattened(HierarchyFlattened const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21727 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* ___m_Hierarchy;

  /// @brief Field m_NodesPtr, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___m_NodesPtr;

  /// @brief Field m_NodesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_NodesCount;

  /// @brief Field m_Version, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_IsOwner, offset: 0x30, size: 0x1, def value: None
  bool ___m_IsOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_NodesPtr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_NodesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_Version) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattened, ___m_IsOwner) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyFlattened, 0x38>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::HierarchyFlattened);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyFlattened*, "Unity.Hierarchy", "HierarchyFlattened");
NEED_NO_BOX(::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyFlattened/BindingsMarshaller");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyFlattened_Enumerator, "Unity.Hierarchy", "HierarchyFlattened/Enumerator");
