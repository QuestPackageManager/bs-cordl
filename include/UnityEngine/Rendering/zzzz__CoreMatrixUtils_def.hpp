#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreMatrixUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CoreMatrixUtils)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreMatrixUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreMatrixUtils);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreMatrixUtils
class CORDL_TYPE CoreMatrixUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method MatrixTimesTranslation, addr 0x659ef0c, size 0x5c, virtual false, abstract: false, final false
  static inline void MatrixTimesTranslation(::ByRef<::UnityEngine::Matrix4x4> inOutMatrix, ::UnityEngine::Vector3 translation);

  /// @brief Method MultiplyGenericOrthoMatrix, addr 0x659f130, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 MultiplyGenericOrthoMatrix(::UnityEngine::Matrix4x4 ortho, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method MultiplyOrthoMatrix, addr 0x659f1ec, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 MultiplyOrthoMatrix(::UnityEngine::Matrix4x4 ortho, ::UnityEngine::Matrix4x4 rhs, bool centered);

  /// @brief Method MultiplyOrthoMatrixCentered, addr 0x659f098, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 MultiplyOrthoMatrixCentered(::UnityEngine::Matrix4x4 ortho, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method MultiplyPerspectiveMatrix, addr 0x659eff0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 MultiplyPerspectiveMatrix(::UnityEngine::Matrix4x4 perspective, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method MultiplyProjectionMatrix, addr 0x659f2e0, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 MultiplyProjectionMatrix(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 rhs, bool orthoCentered);

  /// @brief Method TranslationTimesMatrix, addr 0x659ef68, size 0x88, virtual false, abstract: false, final false
  static inline void TranslationTimesMatrix(::ByRef<::UnityEngine::Matrix4x4> inOutMatrix, ::UnityEngine::Vector3 translation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreMatrixUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreMatrixUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreMatrixUtils(CoreMatrixUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreMatrixUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreMatrixUtils(CoreMatrixUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreMatrixUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CoreMatrixUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreMatrixUtils*, "UnityEngine.Rendering", "CoreMatrixUtils");
