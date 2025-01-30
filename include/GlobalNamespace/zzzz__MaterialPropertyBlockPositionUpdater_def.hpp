#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockPositionUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockPositionUpdater)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockPositionUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
// Dependencies MaterialPropertyBlockAnimator
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockPositionUpdater
class CORDL_TYPE MaterialPropertyBlockPositionUpdater : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _targetTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTransform, put = __cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform> _targetTransform;

  static inline ::GlobalNamespace::MaterialPropertyBlockPositionUpdater* New_ctor();

  /// @brief Method SetProperty, addr 0x39e90fc, size 0xb4, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform();

  constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x39e91b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockPositionUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16356 };

  /// @brief Field _targetTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____targetTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPositionUpdater, ____targetTransform) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockPositionUpdater, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockPositionUpdater*, "", "MaterialPropertyBlockPositionUpdater");
