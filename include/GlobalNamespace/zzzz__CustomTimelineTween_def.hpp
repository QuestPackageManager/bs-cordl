#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CustomTimelineTween)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomTimelineTween;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomTimelineTween);
// Type: ::CustomTimelineTween
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CustomTimelineTween*
class CORDL_TYPE CustomTimelineTween : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field startPositions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_startPositions, put = __cordl_internal_set_startPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> startPositions;

  /// @brief Field transforms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_transforms,
                      put = __cordl_internal_set_transforms))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> transforms;

  static inline ::GlobalNamespace::CustomTimelineTween* New_ctor();

  /// @brief Method OnValidate, addr 0x24107d0, size 0xd4, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_startPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_startPositions();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_transforms();

  constexpr void __cordl_internal_set_startPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x24108a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTimelineTween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomTimelineTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTimelineTween(CustomTimelineTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTimelineTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTimelineTween(CustomTimelineTween const&) = delete;

  /// @brief Field transforms, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___transforms;

  /// @brief Field startPositions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___startPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomTimelineTween, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTimelineTween, ___transforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTimelineTween, ___startPositions) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomTimelineTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTimelineTween*, "", "CustomTimelineTween");
