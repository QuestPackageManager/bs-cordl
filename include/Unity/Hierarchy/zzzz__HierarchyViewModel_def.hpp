#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewModel)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
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
class HierarchyViewModel_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyViewModel_Enumerator;
}
namespace Unity::Hierarchy {
struct HierarchyViewNodesEnumerable;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
class IHierarchySearchQueryParser;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyViewModel_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyViewModel);
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewModel_Enumerator);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel/BindingsMarshaller
class CORDL_TYPE HierarchyViewModel_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6971318, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::Unity::Hierarchy::HierarchyViewModel* viewModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewModel_BindingsMarshaller(HierarchyViewModel_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewModel_BindingsMarshaller(HierarchyViewModel_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewModel/Enumerator
struct CORDL_TYPE HierarchyViewModel_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNode Current;

  /// @brief Method MoveNext, addr 0x697140c, size 0x5c4, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6970ddc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModel* hierarchyViewModel);

  /// @brief Method get_Current, addr 0x697132c, size 0xe0, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel_Enumerator();

  // Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None }, CppParam { name: "m_HierarchyFlattened", ty:
  // "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None }, CppParam { name: "m_NodesPtr", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "m_NodesCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel* m_ViewModel, ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, int32_t* m_NodesPtr, int32_t m_NodesCount,
                                          int32_t m_Version, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21767 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_ViewModel, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* m_ViewModel;

  /// @brief Field m_HierarchyFlattened, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_NodesPtr, offset: 0x10, size: 0x8, def value: None
  int32_t* m_NodesPtr;

  /// @brief Field m_NodesCount, offset: 0x18, size: 0x4, def value: None
  int32_t m_NodesCount;

  /// @brief Field m_Version, offset: 0x1c, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Index, offset: 0x20, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_ViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_HierarchyFlattened) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_NodesPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_NodesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Index) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyViewModel_Enumerator, 0x28>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel
class CORDL_TYPE HierarchyViewModel : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller;

  using Enumerator = ::Unity::Hierarchy::HierarchyViewModel_Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_HierarchyFlattened)) ::Unity::Hierarchy::HierarchyFlattened* HierarchyFlattened;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Item)) ::Unity::Hierarchy::HierarchyNode Item[];

  __declspec(property(get = get_Query)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Query;

  __declspec(property(put = set_QueryParser)) ::Unity::Hierarchy::IHierarchySearchQueryParser* QueryParser;

  __declspec(property(get = get_UpdateNeeded)) bool UpdateNeeded;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field <QueryParser>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryParser_k__BackingField,
                      put = __cordl_internal_set__QueryParser_k__BackingField)) ::Unity::Hierarchy::IHierarchySearchQueryParser* _QueryParser_k__BackingField;

  /// @brief Field m_Hierarchy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hierarchy, put = __cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_HierarchyFlattened, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HierarchyFlattened, put = __cordl_internal_set_m_HierarchyFlattened)) ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_IsOwner, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOwner, put = __cordl_internal_set_m_IsOwner)) bool m_IsOwner;

  /// @brief Field m_NodesCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NodesCount, put = __cordl_internal_set_m_NodesCount)) int32_t m_NodesCount;

  /// @brief Field m_NodesPtr, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodesPtr, put = __cordl_internal_set_m_NodesPtr)) ::System::IntPtr m_NodesPtr;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_Version, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearFlags, addr 0x6970c08, size 0x4, virtual false, abstract: false, final false
  inline void ClearFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse);

  /// @brief Method ClearFlagsNode, addr 0x6970c0c, size 0x70, virtual false, abstract: false, final false
  inline void ClearFlagsNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse);

  /// @brief Method ClearFlagsNode_Injected, addr 0x6970fb4, size 0x5c, virtual false, abstract: false, final false
  static inline void ClearFlagsNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse);

  /// @brief Method Contains, addr 0x69709f0, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Contains_Injected, addr 0x6970a48, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Create, addr 0x6970624, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags,
                                        ::ByRef<::System::IntPtr> nodesPtr, ::ByRef<int32_t> nodesCount, ::ByRef<int32_t> version);

  /// @brief Method CreateHierarchyViewModel, addr 0x6971010, size 0x104, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateHierarchyViewModel(::System::IntPtr nativePtr, ::System::IntPtr flattenedPtr, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method Create_Injected, addr 0x6970e90, size 0x74, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags,
                                                 ::ByRef<::System::IntPtr> nodesPtr, ::ByRef<int32_t> nodesCount, ::ByRef<int32_t> version);

  /// @brief Method Destroy, addr 0x6970844, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x69707dc, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6970788, size 0x54, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnumerateNodesWithAllFlags, addr 0x6970c7c, size 0x9c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable EnumerateNodesWithAllFlags(::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method Finalize, addr 0x6970740, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x6970e08, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyViewModel* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetChildrenCount, addr 0x6970a8c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetChildrenCount(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetChildrenCount_Injected, addr 0x6970ae4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetChildrenCount_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method GetEnumerator, addr 0x6970da4, size 0x38, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyViewModel_Enumerator GetEnumerator();

  /// @brief Method HasAllFlags, addr 0x6970b9c, size 0x4, virtual false, abstract: false, final false
  inline bool HasAllFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method HasAllFlagsNode, addr 0x6970ba0, size 0x68, virtual false, abstract: false, final false
  inline bool HasAllFlagsNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method HasAllFlagsNode_Injected, addr 0x6970f60, size 0x54, virtual false, abstract: false, final false
  static inline bool HasAllFlagsNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  /// @brief Method IndexOf, addr 0x6970954, size 0x58, virtual false, abstract: false, final false
  inline int32_t IndexOf(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method IndexOf_Injected, addr 0x69709ac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t IndexOf_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  static inline ::Unity::Hierarchy::HierarchyViewModel* New_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  static inline ::Unity::Hierarchy::HierarchyViewModel* New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::System::IntPtr nodesPtr, int32_t nodesCount,
                                                                 int32_t version);

  /// @brief Method SearchBegin, addr 0x69711b8, size 0x160, virtual false, abstract: false, final false
  static inline void SearchBegin(::System::IntPtr handlePtr);

  /// @brief Method SetFlags, addr 0x6970b28, size 0x4, virtual false, abstract: false, final false
  inline void SetFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse);

  /// @brief Method SetFlagsNode, addr 0x6970b2c, size 0x70, virtual false, abstract: false, final false
  inline void SetFlagsNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse);

  /// @brief Method SetFlagsNode_Injected, addr 0x6970f04, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFlagsNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse);

  /// @brief Method Update, addr 0x6970d18, size 0x50, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHierarchyViewModel, addr 0x6971114, size 0xa4, virtual false, abstract: false, final false
  static inline void UpdateHierarchyViewModel(::System::IntPtr handlePtr, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method Update_Injected, addr 0x6970d68, size 0x3c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self);

  constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser* const& __cordl_internal_get__QueryParser_k__BackingField() const;

  constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser*& __cordl_internal_get__QueryParser_k__BackingField();

  constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

  constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy();

  constexpr ::Unity::Hierarchy::HierarchyFlattened* const& __cordl_internal_get_m_HierarchyFlattened() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattened*& __cordl_internal_get_m_HierarchyFlattened();

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

  constexpr void __cordl_internal_set__QueryParser_k__BackingField(::Unity::Hierarchy::IHierarchySearchQueryParser* value);

  constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  constexpr void __cordl_internal_set_m_HierarchyFlattened(::Unity::Hierarchy::HierarchyFlattened* value);

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_NodesCount(int32_t value);

  constexpr void __cordl_internal_set_m_NodesPtr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6970520, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  /// @brief Method .ctor, addr 0x69706a4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version);

  /// @brief Method get_Count, addr 0x69703e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_HierarchyFlattened, addr 0x697047c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattened* get_HierarchyFlattened();

  /// @brief Method get_IsCreated, addr 0x69703d8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x6970880, size 0xd4, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Item(int32_t index);

  /// @brief Method get_Query, addr 0x6970494, size 0x50, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* get_Query();

  /// @brief Method get_Query_Injected, addr 0x69704e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* get_Query_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_UpdateNeeded, addr 0x69703f0, size 0x50, virtual false, abstract: false, final false
  inline bool get_UpdateNeeded();

  /// @brief Method get_UpdateNeeded_Injected, addr 0x6970440, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_UpdateNeeded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_Version, addr 0x6970484, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_QueryParser, addr 0x697048c, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryParser(::Unity::Hierarchy::IHierarchySearchQueryParser* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewModel(HierarchyViewModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewModel(HierarchyViewModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21768 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* ___m_Hierarchy;

  /// @brief Field m_HierarchyFlattened, offset: 0x20, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* ___m_HierarchyFlattened;

  /// @brief Field m_NodesPtr, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr ___m_NodesPtr;

  /// @brief Field m_NodesCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_NodesCount;

  /// @brief Field m_Version, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_IsOwner, offset: 0x38, size: 0x1, def value: None
  bool ___m_IsOwner;

  /// @brief Field <QueryParser>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Hierarchy::IHierarchySearchQueryParser* ____QueryParser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_HierarchyFlattened) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_NodesPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_NodesCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Version) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_IsOwner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ____QueryParser_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyViewModel, 0x48>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::HierarchyViewModel);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyViewModel*, "Unity.Hierarchy", "HierarchyViewModel");
NEED_NO_BOX(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyViewModel/BindingsMarshaller");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyViewModel_Enumerator, "Unity.Hierarchy", "HierarchyViewModel/Enumerator");
