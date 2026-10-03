#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShadingRateInfo)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ShadingRateInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ShadingRateInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadingRateInfo*, "UnityEngine.Rendering", "ShadingRateInfo");
// [NativeHeader("Runtime/Graphics/ShadingRateInfo.h")]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShadingRateInfo
class CORDL_TYPE ShadingRateInfo : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("ShadingRateInfo::GetAvailableFragmentSizes")]
  /// @brief Method GetAvailableFragmentSizes, addr 0x6f7a438, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize> GetAvailableFragmentSizes();

  /// @brief Method GetAvailableFragmentSizes_Injected, addr 0x6f7a5c4, size 0x3c, virtual false, abstract: false, final false
  static inline void GetAvailableFragmentSizes_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("ShadingRateInfo::GetImageTileSize")]
  /// @brief Method GetImageTileSize, addr 0x6f7a3f0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int GetImageTileSize();

  /// @brief Method GetImageTileSize_Injected, addr 0x6f7a588, size 0x3c, virtual false, abstract: false, final false
  static inline void GetImageTileSize_Injected(::by_ref<::UnityEngine::Vector2Int> ret);

  /// [FreeFunction("ShadingRateInfo::QueryNativeValue")]
  /// @brief Method QueryNativeValue, addr 0x6f7a54c, size 0x3c, virtual false, abstract: false, final false
  static inline uint8_t QueryNativeValue(::UnityEngine::Rendering::ShadingRateFragmentSize fragmentSize);

  /// [FreeFunction("ShadingRateInfo::SupportsPerDrawCall")]
  /// @brief Method SupportsPerDrawCall, addr 0x6f7a384, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsPerDrawCall();

  /// [FreeFunction("ShadingRateInfo::SupportsPerImageTile")]
  /// @brief Method SupportsPerImageTile, addr 0x6f7a334, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsPerImageTile();

  /// @brief Method get_availableFragmentSizes, addr 0x6f7a434, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize> get_availableFragmentSizes();

  /// @brief Method get_imageTileSize, addr 0x6f7a3ac, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int get_imageTileSize();

  /// @brief Method get_supportsPerDrawCall, addr 0x6f7a35c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsPerDrawCall();

  /// @brief Method get_supportsPerImageTile, addr 0x6f7a30c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsPerImageTile();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadingRateInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadingRateInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadingRateInfo(ShadingRateInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadingRateInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadingRateInfo(ShadingRateInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ShadingRateInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
