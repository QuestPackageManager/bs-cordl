#pragma once
// IWYU pragma private; include "UnityEngine/CameraRaycastHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraRaycastHelper)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine {
class CameraRaycastHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CameraRaycastHelper);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CameraRaycastHelper
class CORDL_TYPE CameraRaycastHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method RaycastTry, addr 0x48e4ef8, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> RaycastTry(::UnityEngine::Camera* cam, ::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method RaycastTry2D, addr 0x48e4fc0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> RaycastTry2D(::UnityEngine::Camera* cam, ::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method RaycastTry2D_Injected, addr 0x48e5024, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> RaycastTry2D_Injected(::UnityEngine::Camera* cam, ::ByRef<::UnityEngine::Ray> ray, float_t distance, int32_t layerMask);

  /// @brief Method RaycastTry_Injected, addr 0x48e4f5c, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> RaycastTry_Injected(::UnityEngine::Camera* cam, ::ByRef<::UnityEngine::Ray> ray, float_t distance, int32_t layerMask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraRaycastHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraRaycastHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraRaycastHelper(CameraRaycastHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraRaycastHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraRaycastHelper(CameraRaycastHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CameraRaycastHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CameraRaycastHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CameraRaycastHelper*, "UnityEngine", "CameraRaycastHelper");
