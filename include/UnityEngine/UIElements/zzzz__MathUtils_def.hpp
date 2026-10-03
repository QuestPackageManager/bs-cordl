#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MathUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MathUtils)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MathUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::MathUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MathUtils*, "UnityEngine.UIElements", "MathUtils");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MathUtils
class CORDL_TYPE MathUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method PostApply2DOffset, addr 0x71577e0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 PostApply2DOffset(::by_ref<::UnityEngine::Matrix4x4> m, ::UnityEngine::Vector2 p);

  /// @brief Method PreApply2DOffset, addr 0x71577bc, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 PreApply2DOffset(::by_ref<::UnityEngine::Matrix4x4> m, ::UnityEngine::Vector2 p);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MathUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MathUtils(MathUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MathUtils(MathUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::MathUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
