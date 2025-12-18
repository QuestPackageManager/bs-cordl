#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessingData)
namespace UnityEngine::Rendering::Universal {
struct ColorGradingMode;
}
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PostProcessingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessingData);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessingData
struct CORDL_TYPE PostProcessingData {
public:
  // Declarations
  __declspec(property(get = get_gradingMode)) ::UnityEngine::Rendering::Universal::ColorGradingMode gradingMode;

  __declspec(property(get = get_lutSize)) int32_t lutSize;

  __declspec(property(get = get_supportDataDrivenLensFlare)) bool supportDataDrivenLensFlare;

  __declspec(property(get = get_supportScreenSpaceLensFlare)) bool supportScreenSpaceLensFlare;

  __declspec(property(get = get_universalPostProcessingData)) ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* universalPostProcessingData;

  __declspec(property(get = get_useFastSRGBLinearConversion)) bool useFastSRGBLinearConversion;

  /// @brief Method .ctor, addr 0x672eab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method get_gradingMode, addr 0x672eb10, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::ColorGradingMode> get_gradingMode();

  /// @brief Method get_lutSize, addr 0x672eb70, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<int32_t> get_lutSize();

  /// @brief Method get_supportDataDrivenLensFlare, addr 0x672ec90, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_supportDataDrivenLensFlare();

  /// @brief Method get_supportScreenSpaceLensFlare, addr 0x672ec30, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_supportScreenSpaceLensFlare();

  /// @brief Method get_universalPostProcessingData, addr 0x672eabc, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* get_universalPostProcessingData();

  /// @brief Method get_useFastSRGBLinearConversion, addr 0x672ebd0, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_useFastSRGBLinearConversion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessingData();

  // Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: None }]
  constexpr PostProcessingData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field frameData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* frameData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessingData, frameData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessingData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessingData, "UnityEngine.Rendering.Universal", "PostProcessingData");
