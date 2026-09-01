#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SortingGroup.hpp"
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
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SortingGroup
class CORDL_TYPE SortingGroup : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_sortAtRoot, put = set_sortAtRoot)) bool sortAtRoot;

  __declspec(property(get = get_sortingGroupID)) int32_t sortingGroupID;

  __declspec(property(get = get_sortingGroupOrder)) int32_t sortingGroupOrder;

  __declspec(property(get = get_sortingKey)) uint32_t sortingKey;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingLayerName, put = set_sortingLayerName)) ::StringW sortingLayerName;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  /// @brief Method GetSortingGroupByIndex, addr 0x6b07cfc, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t index);

  /// @brief Method GetSortingGroupByIndex_Injected, addr 0x6b07e1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSortingGroupByIndex_Injected(int32_t index);

  static inline ::UnityEngine::Rendering::SortingGroup* New_ctor();

  /// @brief Method UpdateAllSortingGroups, addr 0x6b07cd4, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateAllSortingGroups();

  /// @brief Method .ctor, addr 0x6b088b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_index, addr 0x6b08750, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_index_Injected, addr 0x6b087c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_index_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_invalidSortingGroupID, addr 0x6b07cac, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_invalidSortingGroupID();

  /// @brief Method get_sortAtRoot, addr 0x6b08468, size 0x78, virtual false, abstract: false, final false
  inline bool get_sortAtRoot();

  /// @brief Method get_sortAtRoot_Injected, addr 0x6b084e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sortAtRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupID, addr 0x6b085e8, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupID();

  /// @brief Method get_sortingGroupID_Injected, addr 0x6b08660, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupOrder, addr 0x6b0869c, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupOrder();

  /// @brief Method get_sortingGroupOrder_Injected, addr 0x6b08714, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingKey, addr 0x6b08804, size 0x78, virtual false, abstract: false, final false
  inline uint32_t get_sortingKey();

  /// @brief Method get_sortingKey_Injected, addr 0x6b0887c, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_sortingKey_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerID, addr 0x6b08168, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingLayerID_Injected, addr 0x6b081e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingLayerID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerName, addr 0x6b07e58, size 0x128, virtual false, abstract: false, final false
  inline ::StringW get_sortingLayerName();

  /// @brief Method get_sortingLayerName_Injected, addr 0x6b07f80, size 0x44, virtual false, abstract: false, final false
  static inline void get_sortingLayerName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_sortingOrder, addr 0x6b082e8, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method get_sortingOrder_Injected, addr 0x6b08360, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_sortAtRoot, addr 0x6b0851c, size 0x88, virtual false, abstract: false, final false
  inline void set_sortAtRoot(bool value);

  /// @brief Method set_sortAtRoot_Injected, addr 0x6b085a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortAtRoot_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_sortingLayerID, addr 0x6b0821c, size 0x88, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingLayerID_Injected, addr 0x6b082a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerID_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_sortingLayerName, addr 0x6b07fc4, size 0x160, virtual false, abstract: false, final false
  inline void set_sortingLayerName(::StringW value);

  /// @brief Method set_sortingLayerName_Injected, addr 0x6b08124, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_sortingOrder, addr 0x6b0839c, size 0x88, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method set_sortingOrder_Injected, addr 0x6b08424, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingOrder_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortingGroup(SortingGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortingGroup(SortingGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10698 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SortingGroup) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
