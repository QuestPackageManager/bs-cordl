#pragma once
// IWYU pragma private; include "UnityEngine/Motion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Motion)
// Forward declare root types
namespace UnityEngine {
class Motion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Motion);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Motion
class CORDL_TYPE Motion : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field <isAnimatorMotion>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isAnimatorMotion_k__BackingField, put = __cordl_internal_set__isAnimatorMotion_k__BackingField)) bool _isAnimatorMotion_k__BackingField;

  __declspec(property(get = get_isLooping)) bool isLooping;

  static inline ::UnityEngine::Motion* New_ctor();

  constexpr bool const& __cordl_internal_get__isAnimatorMotion_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isAnimatorMotion_k__BackingField();

  constexpr void __cordl_internal_set__isAnimatorMotion_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4848ad4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isLooping, addr 0x484f968, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isLooping();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Motion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Motion(Motion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Motion(Motion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16889 };

  /// @brief Field <isAnimatorMotion>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isAnimatorMotion_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Motion, ____isAnimatorMotion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Motion, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Motion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Motion*, "UnityEngine", "Motion");
