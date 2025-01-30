#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortingGroup)
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

  /// @brief Method GetSortingGroupByIndex, addr 0x48cbd1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t index);

  static inline ::UnityEngine::Rendering::SortingGroup* New_ctor();

  /// @brief Method UpdateAllSortingGroups, addr 0x48cbcf4, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateAllSortingGroups();

  /// @brief Method .ctor, addr 0x48cc048, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_index, addr 0x48cbfd0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_invalidSortingGroupID, addr 0x48cbccc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_invalidSortingGroupID();

  /// @brief Method get_sortAtRoot, addr 0x48cbed8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_sortAtRoot();

  /// @brief Method get_sortingGroupID, addr 0x48cbf58, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupID();

  /// @brief Method get_sortingGroupOrder, addr 0x48cbf94, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupOrder();

  /// @brief Method get_sortingKey, addr 0x48cc00c, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_sortingKey();

  /// @brief Method get_sortingLayerID, addr 0x48cbdd8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingLayerName, addr 0x48cbd58, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_sortingLayerName();

  /// @brief Method get_sortingOrder, addr 0x48cbe58, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method set_sortAtRoot, addr 0x48cbf14, size 0x44, virtual false, abstract: false, final false
  inline void set_sortAtRoot(bool value);

  /// @brief Method set_sortingLayerID, addr 0x48cbe14, size 0x44, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingLayerName, addr 0x48cbd94, size 0x44, virtual false, abstract: false, final false
  inline void set_sortingLayerName(::StringW value);

  /// @brief Method set_sortingOrder, addr 0x48cbe94, size 0x44, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SortingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
