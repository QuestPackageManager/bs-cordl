#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockLocalScaleAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockLocalScaleAnimator)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockLocalScaleAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator);
// Type: ::MaterialPropertyBlockLocalScaleAnimator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockLocalScaleAnimator*
class CORDL_TYPE MaterialPropertyBlockLocalScaleAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _targetTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTransform, put = __cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform> _targetTransform;

  static inline ::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator* New_ctor();

  /// @brief Method SetProperty, addr 0x397c80c, size 0x58, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform();

  constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x397c864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockLocalScaleAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockLocalScaleAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockLocalScaleAnimator(MaterialPropertyBlockLocalScaleAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockLocalScaleAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockLocalScaleAnimator(MaterialPropertyBlockLocalScaleAnimator const&) = delete;

  /// @brief Field _targetTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____targetTransform;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator, ____targetTransform) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*, "", "MaterialPropertyBlockLocalScaleAnimator");
