#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoaderNoPreInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
CORDL_MODULE_EXPORT(OpenXRLoaderNoPreInit)
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderNoPreInit;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit);
// Dependencies UnityEngine.XR.OpenXR.OpenXRLoaderBase
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderNoPreInit
class CORDL_TYPE OpenXRLoaderNoPreInit : public ::UnityEngine::XR::OpenXR::OpenXRLoaderBase {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit* New_ctor();

  /// @brief Method .ctor, addr 0x6823c3c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderNoPreInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderNoPreInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderNoPreInit(OpenXRLoaderNoPreInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderNoPreInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderNoPreInit(OpenXRLoaderNoPreInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit, 0x78>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*, "UnityEngine.XR.OpenXR", "OpenXRLoaderNoPreInit");
