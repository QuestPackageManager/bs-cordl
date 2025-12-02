#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRTextureData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRTextureData)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRTextureData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::API::UnityXRTextureData);
// Dependencies System.IntPtr
namespace UnityEngine::XR::OpenXR::API {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRTextureData
struct CORDL_TYPE UnityXRTextureData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRTextureData();

  // Ctor Parameters [CppParam { name: "nativePtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "referenceTextureId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr UnityXRTextureData(::System::IntPtr nativePtr, uint32_t referenceTextureId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field nativePtr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr nativePtr;

  /// @brief Field referenceTextureId, offset: 0x8, size: 0x4, def value: None
  uint32_t referenceTextureId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRTextureData, nativePtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRTextureData, referenceTextureId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRTextureData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRTextureData, "UnityEngine.XR.OpenXR.API", "UnityXRTextureData");
