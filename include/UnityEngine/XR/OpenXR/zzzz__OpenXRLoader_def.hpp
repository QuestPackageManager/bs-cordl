#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
CORDL_MODULE_EXPORT(OpenXRLoader)
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRLoader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoader);
// Dependencies UnityEngine.XR.OpenXR.OpenXRLoaderBase
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoader
class CORDL_TYPE OpenXRLoader : public ::UnityEngine::XR::OpenXR::OpenXRLoaderBase {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::OpenXRLoader* New_ctor();

  /// @brief Method .ctor, addr 0x681e610, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoader(OpenXRLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoader(OpenXRLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoader, 0x78>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoader*, "UnityEngine.XR.OpenXR", "OpenXRLoader");
