#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/APVDefinitions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(APVDefinitions)
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class APVDefinitions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::APVDefinitions);
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.APVDefinitions
class CORDL_TYPE APVDefinitions : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugEmptyColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_debugEmptyColor, put = setStaticF_debugEmptyColor)) ::UnityEngine::Color debugEmptyColor;

  /// @brief Field layerMaskColors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_layerMaskColors, put = setStaticF_layerMaskColors)) ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> layerMaskColors;

  /// @brief Field probeIndexChunkSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_probeIndexChunkSize, put = setStaticF_probeIndexChunkSize)) int32_t probeIndexChunkSize;

  /// @brief Field probeMaxRegionCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_probeMaxRegionCount, put = setStaticF_probeMaxRegionCount)) int32_t probeMaxRegionCount;

  static inline ::UnityEngine::Rendering::APVDefinitions* New_ctor();

  /// @brief Method .ctor, addr 0x65e21dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Color getStaticF_debugEmptyColor();

  static inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> getStaticF_layerMaskColors();

  static inline int32_t getStaticF_probeIndexChunkSize();

  static inline int32_t getStaticF_probeMaxRegionCount();

  static inline void setStaticF_debugEmptyColor(::UnityEngine::Color value);

  static inline void setStaticF_layerMaskColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  static inline void setStaticF_probeIndexChunkSize(int32_t value);

  static inline void setStaticF_probeMaxRegionCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr APVDefinitions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "APVDefinitions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  APVDefinitions(APVDefinitions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "APVDefinitions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  APVDefinitions(APVDefinitions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12132 };

  /// @brief Field probeValidityThreshold offset 0xffffffff size 0x4
  static constexpr float_t probeValidityThreshold{ static_cast<float_t>(0.05f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::APVDefinitions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::APVDefinitions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::APVDefinitions*, "UnityEngine.Rendering", "APVDefinitions");
