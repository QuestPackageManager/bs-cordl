#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Rendering::SortingGroup);
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

  /// @brief Method GetSortingGroupByIndex, addr 0x693caa0, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t index);

  /// @brief Method GetSortingGroupByIndex_Injected, addr 0x693cbc0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSortingGroupByIndex_Injected(int32_t index);

  static inline ::UnityEngine::Rendering::SortingGroup* New_ctor();

  /// @brief Method UpdateAllSortingGroups, addr 0x693ca78, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateAllSortingGroups();

  /// @brief Method .ctor, addr 0x693d65c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_index, addr 0x693d4f4, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_index_Injected, addr 0x693d56c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_index_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_invalidSortingGroupID, addr 0x693ca50, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_invalidSortingGroupID();

  /// @brief Method get_sortAtRoot, addr 0x693d20c, size 0x78, virtual false, abstract: false, final false
  inline bool get_sortAtRoot();

  /// @brief Method get_sortAtRoot_Injected, addr 0x693d284, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sortAtRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupID, addr 0x693d38c, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupID();

  /// @brief Method get_sortingGroupID_Injected, addr 0x693d404, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupOrder, addr 0x693d440, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupOrder();

  /// @brief Method get_sortingGroupOrder_Injected, addr 0x693d4b8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingKey, addr 0x693d5a8, size 0x78, virtual false, abstract: false, final false
  inline uint32_t get_sortingKey();

  /// @brief Method get_sortingKey_Injected, addr 0x693d620, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_sortingKey_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerID, addr 0x693cf0c, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingLayerID_Injected, addr 0x693cf84, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingLayerID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerName, addr 0x693cbfc, size 0x128, virtual false, abstract: false, final false
  inline ::StringW get_sortingLayerName();

  /// @brief Method get_sortingLayerName_Injected, addr 0x693cd24, size 0x44, virtual false, abstract: false, final false
  static inline void get_sortingLayerName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_sortingOrder, addr 0x693d08c, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method get_sortingOrder_Injected, addr 0x693d104, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_sortAtRoot, addr 0x693d2c0, size 0x88, virtual false, abstract: false, final false
  inline void set_sortAtRoot(bool value);

  /// @brief Method set_sortAtRoot_Injected, addr 0x693d348, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortAtRoot_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_sortingLayerID, addr 0x693cfc0, size 0x88, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingLayerID_Injected, addr 0x693d048, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerID_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_sortingLayerName, addr 0x693cd68, size 0x160, virtual false, abstract: false, final false
  inline void set_sortingLayerName(::StringW value);

  /// @brief Method set_sortingLayerName_Injected, addr 0x693cec8, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_sortingOrder, addr 0x693d140, size 0x88, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method set_sortingOrder_Injected, addr 0x693d1c8, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SortingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
