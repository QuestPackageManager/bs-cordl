#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortingGroup)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SortingGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SortingGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
// [NativeType(Header = "Runtime/2D/Sorting/SortingGroup.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SortingGroup
class CORDL_TYPE SortingGroup : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_sort3DAs2D)) bool sort3DAs2D;

  __declspec(property(get = get_sortAtRoot, put = set_sortAtRoot)) bool sortAtRoot;

  __declspec(property(get = get_sortingGroupID)) int32_t sortingGroupID;

  __declspec(property(get = get_sortingGroupOrder)) int32_t sortingGroupOrder;

  __declspec(property(get = get_sortingKey)) uint32_t sortingKey;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingLayerName, put = set_sortingLayerName)) ::StringW sortingLayerName;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  /// [StaticAccessor("SortingGroup", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetSortingGroupByIndex, addr 0x6f63090, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t index);

  /// @brief Method GetSortingGroupByIndex_Injected, addr 0x6f631b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSortingGroupByIndex_Injected(int32_t index);

  static inline ::UnityEngine::Rendering::SortingGroup* New_ctor();

  /// [StaticAccessor("SortingGroup", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method UpdateAllSortingGroups, addr 0x6f63068, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateAllSortingGroups();

  /// @brief Method .ctor, addr 0x6f63d6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_index, addr 0x6f63b38, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_index_Injected, addr 0x6f63bb8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_index_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_invalidSortingGroupID, addr 0x6f63040, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_invalidSortingGroupID();

  /// @brief Method get_sort3DAs2D, addr 0x6f63cb0, size 0x80, virtual false, abstract: false, final false
  inline bool get_sort3DAs2D();

  /// @brief Method get_sort3DAs2D_Injected, addr 0x6f63d30, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sort3DAs2D_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortAtRoot, addr 0x6f63830, size 0x80, virtual false, abstract: false, final false
  inline bool get_sortAtRoot();

  /// @brief Method get_sortAtRoot_Injected, addr 0x6f638b0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sortAtRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupID, addr 0x6f639c0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupID();

  /// @brief Method get_sortingGroupID_Injected, addr 0x6f63a40, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupOrder, addr 0x6f63a7c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupOrder();

  /// @brief Method get_sortingGroupOrder_Injected, addr 0x6f63afc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingKey, addr 0x6f63bf4, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_sortingKey();

  /// @brief Method get_sortingKey_Injected, addr 0x6f63c74, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_sortingKey_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerID, addr 0x6f63510, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingLayerID_Injected, addr 0x6f63590, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingLayerID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerName, addr 0x6f631ec, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_sortingLayerName();

  /// @brief Method get_sortingLayerName_Injected, addr 0x6f63320, size 0x44, virtual false, abstract: false, final false
  static inline void get_sortingLayerName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_sortingOrder, addr 0x6f636a0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method get_sortingOrder_Injected, addr 0x6f63720, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_sortAtRoot, addr 0x6f638ec, size 0x90, virtual false, abstract: false, final false
  inline void set_sortAtRoot(bool value);

  /// @brief Method set_sortAtRoot_Injected, addr 0x6f6397c, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortAtRoot_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_sortingLayerID, addr 0x6f635cc, size 0x90, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingLayerID_Injected, addr 0x6f6365c, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerID_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_sortingLayerName, addr 0x6f63364, size 0x168, virtual false, abstract: false, final false
  inline void set_sortingLayerName(::StringW value);

  /// @brief Method set_sortingLayerName_Injected, addr 0x6f634cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_sortingOrder, addr 0x6f6375c, size 0x90, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method set_sortingOrder_Injected, addr 0x6f637ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingOrder_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortingGroup(SortingGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortingGroup(SortingGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10294 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SortingGroup) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
