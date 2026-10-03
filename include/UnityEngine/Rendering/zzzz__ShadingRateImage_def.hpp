#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateImage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShadingRateImage)
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ShadingRateImage;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ShadingRateImage*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadingRateImage*, "UnityEngine.Rendering", "ShadingRateImage");
// [NativeHeader("Runtime/Graphics/ShadingRateImage.h")]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShadingRateImage
class CORDL_TYPE ShadingRateImage : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("ShadingRateImage::GetAllocSizeInternal")]
  /// @brief Method GetAllocSizeInternal, addr 0x6f7a244, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAllocSizeInternal(int32_t pixelWidth, int32_t pixelHeight, ::by_ref<int32_t> tileWidth, ::by_ref<int32_t> tileHeight);

  /// @brief Method GetAllocTileSize, addr 0x6f7a2a0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int GetAllocTileSize(::UnityEngine::Vector2Int pixelSize);

  /// @brief Method GetAllocTileSize, addr 0x6f7a2a8, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int GetAllocTileSize(int32_t pixelWidth, int32_t pixelHeight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadingRateImage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadingRateImage", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadingRateImage(ShadingRateImage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadingRateImage", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadingRateImage(ShadingRateImage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ShadingRateImage) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
