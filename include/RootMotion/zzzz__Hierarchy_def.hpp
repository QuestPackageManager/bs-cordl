#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hierarchy)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class Hierarchy;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::Hierarchy);
// Type: RootMotion::Hierarchy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::Hierarchy*
class CORDL_TYPE Hierarchy : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddAncestors, addr 0x133f728, size 0x240, virtual false, abstract: false, final false
  static inline void AddAncestors(::UnityEngine::Transform* transform, ::UnityEngine::Transform* blocker, ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> array);

  /// @brief Method ContainsChild, addr 0x133fab8, size 0x110, virtual false, abstract: false, final false
  static inline bool ContainsChild(::UnityEngine::Transform* transform, ::UnityEngine::Transform* child);

  /// @brief Method ContainsDuplicate, addr 0x13410b8, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> ContainsDuplicate(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> objects);

  /// @brief Method GetAncestor, addr 0x13413dc, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetAncestor(::UnityEngine::Transform* transform, int32_t minChildCount);

  /// @brief Method GetFirstCommonAncestor, addr 0x133f5d8, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetFirstCommonAncestor(::UnityEngine::Transform* t1, ::UnityEngine::Transform* t2);

  /// @brief Method GetFirstCommonAncestor, addr 0x13414d0, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetFirstCommonAncestor(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  /// @brief Method GetFirstCommonAncestorRecursive, addr 0x134183c, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetFirstCommonAncestorRecursive(::UnityEngine::Transform* transform,
                                                                                   ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  /// @brief Method HierarchyIsValid, addr 0x13411c4, size 0x84, virtual false, abstract: false, final false
  static inline bool HierarchyIsValid(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones);

  /// @brief Method IsAncestor, addr 0x133f4a8, size 0x130, virtual false, abstract: false, final false
  static inline bool IsAncestor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* ancestor);

  /// @brief Method IsCommonAncestor, addr 0x1341634, size 0x208, virtual false, abstract: false, final false
  static inline bool IsCommonAncestor(::UnityEngine::Transform* transform, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  static inline ::RootMotion::Hierarchy* New_ctor();

  /// @brief Method .ctor, addr 0x13419c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Hierarchy, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::Hierarchy);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Hierarchy*, "RootMotion", "Hierarchy");
