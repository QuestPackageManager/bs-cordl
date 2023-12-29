#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FollowLocalRotation)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FollowLocalRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FollowLocalRotation);
// Type: ::FollowLocalRotation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13864))
// CS Name: ::FollowLocalRotation*
class CORDL_TYPE FollowLocalRotation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _target, offset 0x18, size 0x8
  __declspec(property(get = __get__target, put = __set__target))::UnityEngine::Transform* _target;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::UnityEngine::Transform*& __get__target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__target() const;

  constexpr void __set__target(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Awake addr 0x1f96908 size 0x1c virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x1f96924 size 0x34 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::FollowLocalRotation* New_ctor();

  /// @brief Method .ctor addr 0x1f96958 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FollowLocalRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FollowLocalRotation(FollowLocalRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FollowLocalRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FollowLocalRotation(FollowLocalRotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FollowLocalRotation();

public:
  /// @brief Field _target, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____target;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FollowLocalRotation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowLocalRotation, ____target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowLocalRotation, ____transform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FollowLocalRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FollowLocalRotation*, "", "FollowLocalRotation");
