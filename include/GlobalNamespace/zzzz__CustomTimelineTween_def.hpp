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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6065))
// CS Name: ::CustomTimelineTween*
class CORDL_TYPE CustomTimelineTween : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field transforms, offset 0x18, size 0x8
  __declspec(property(get = __get_transforms, put = __set_transforms))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms;

  /// @brief Field startPositions, offset 0x20, size 0x8
  __declspec(property(get = __get_startPositions, put = __set_startPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> startPositions;

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_transforms();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_transforms() const;

  constexpr void __set_transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_startPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_startPositions() const;

  constexpr void __set_startPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method OnValidate addr 0x21c3a9c size 0xd4 virtual false final false
  inline void OnValidate();

  static inline ::GlobalNamespace::CustomTimelineTween* New_ctor();

  /// @brief Method .ctor addr 0x21c3b70 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomTimelineTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTimelineTween(CustomTimelineTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTimelineTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTimelineTween(CustomTimelineTween const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTimelineTween();

public:
  /// @brief Field transforms, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___transforms;

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
