#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ProjectionUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProjectionUtils)
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ProjectionUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ProjectionUtils);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ProjectionUtils
class CORDL_TYPE ProjectionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method Ortho, addr 0x4a541f8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectionUtils(ProjectionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectionUtils(ProjectionUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ProjectionUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ProjectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ProjectionUtils*, "UnityEngine.UIElements", "ProjectionUtils");
