#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RangeKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RangeKey)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RangeKey;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RangeKey);
// Dependencies UnityEngine.MotionVectorGenerationMode, UnityEngine.Rendering.ShadowCastingMode
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RangeKey
struct CORDL_TYPE RangeKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>*();

  /// @brief Method Equals, addr 0x65f7d2c, size 0x84, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RangeKey other);

  /// @brief Method GetHashCode, addr 0x65f7db0, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>* i___System__IEquatable_1___UnityEngine__Rendering__RangeKey_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeKey();

  // Ctor Parameters [CppParam { name: "layer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "motionMode", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: None }, CppParam { name: "shadowCastingMode", ty: "::UnityEngine::Rendering::ShadowCastingMode",
  // modifiers: "", def_value: None }, CppParam { name: "staticShadowCaster", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rendererPriority", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "supportsIndirect", ty: "bool", modifiers: "", def_value: None }]
  constexpr RangeKey(uint8_t layer, uint32_t renderingLayerMask, ::UnityEngine::MotionVectorGenerationMode motionMode, ::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode,
                     bool staticShadowCaster, int32_t rendererPriority, bool supportsIndirect) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field layer, offset: 0x0, size: 0x1, def value: None
  uint8_t layer;

  /// @brief Field renderingLayerMask, offset: 0x4, size: 0x4, def value: None
  uint32_t renderingLayerMask;

  /// @brief Field motionMode, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::MotionVectorGenerationMode motionMode;

  /// @brief Field shadowCastingMode, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode;

  /// @brief Field staticShadowCaster, offset: 0x10, size: 0x1, def value: None
  bool staticShadowCaster;

  /// @brief Field rendererPriority, offset: 0x14, size: 0x4, def value: None
  int32_t rendererPriority;

  /// @brief Field supportsIndirect, offset: 0x18, size: 0x1, def value: None
  bool supportsIndirect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RangeKey, layer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RangeKey, renderingLayerMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RangeKey, motionMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RangeKey, shadowCastingMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RangeKey, staticShadowCaster) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RangeKey, rendererPriority) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RangeKey, supportsIndirect) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RangeKey, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RangeKey, "UnityEngine.Rendering", "RangeKey");
