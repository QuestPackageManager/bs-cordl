#pragma once
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
// Type: UnityEngine.XR.OpenXR::OpenXRLoader
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14406))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRLoader*
class CORDL_TYPE OpenXRLoader : public ::UnityEngine::XR::OpenXR::OpenXRLoaderBase {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::OpenXRLoader* New_ctor();

  /// @brief Method .ctor addr 0x2afc3a8 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoader(OpenXRLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoader(OpenXRLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoader, 0x70>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoader*, "UnityEngine.XR.OpenXR", "OpenXRLoader");
