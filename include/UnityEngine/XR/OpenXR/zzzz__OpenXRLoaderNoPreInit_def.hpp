#pragma once
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
// Type: UnityEngine.XR.OpenXR::OpenXRLoaderNoPreInit
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14411))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRLoaderNoPreInit*
class CORDL_TYPE OpenXRLoaderNoPreInit : public ::UnityEngine::XR::OpenXR::OpenXRLoaderBase {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit* New_ctor();

  /// @brief Method .ctor addr 0x2b01b74 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderNoPreInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderNoPreInit(OpenXRLoaderNoPreInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderNoPreInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderNoPreInit(OpenXRLoaderNoPreInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderNoPreInit();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit, 0x70>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*, "UnityEngine.XR.OpenXR", "OpenXRLoaderNoPreInit");
