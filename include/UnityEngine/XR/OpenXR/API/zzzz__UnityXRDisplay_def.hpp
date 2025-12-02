#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRDisplay)
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRRenderTextureDesc;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
class UnityXRDisplay;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::API::UnityXRDisplay);
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::API {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRDisplay
class CORDL_TYPE UnityXRDisplay : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTexture, addr 0x67be8b4, size 0xa4, virtual false, abstract: false, final false
  static inline bool CreateTexture(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc desc, ::ByRef<uint32_t> id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityXRDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRDisplay(UnityXRDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRDisplay(UnityXRDisplay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18474 };

  /// @brief Field kUnityXRRenderTextureIdDontCare offset 0xffffffff size 0x4
  static constexpr uint32_t kUnityXRRenderTextureIdDontCare{ static_cast<uint32_t>(0x0u) };

  /// @brief Field k_UnityOpenXRLib offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UnityOpenXRLib{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRDisplay, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
NEED_NO_BOX(::UnityEngine::XR::OpenXR::API::UnityXRDisplay);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRDisplay*, "UnityEngine.XR.OpenXR.API", "UnityXRDisplay");
