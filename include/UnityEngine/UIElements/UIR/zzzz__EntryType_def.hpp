#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryType)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct EntryType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::EntryType);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.EntryType
struct CORDL_TYPE EntryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __EntryType_Unwrapped
  enum struct __EntryType_Unwrapped : uint16_t {
    __E_DrawSolidMesh = static_cast<uint16_t>(0x0u),
    __E_DrawTexturedMesh = static_cast<uint16_t>(0x1u),
    __E_DrawTexturedMeshSkipAtlas = static_cast<uint16_t>(0x2u),
    __E_DrawTextMesh = static_cast<uint16_t>(0x3u),
    __E_DrawGradients = static_cast<uint16_t>(0x4u),
    __E_DrawImmediate = static_cast<uint16_t>(0x5u),
    __E_DrawImmediateCull = static_cast<uint16_t>(0x6u),
    __E_DrawChildren = static_cast<uint16_t>(0x7u),
    __E_BeginStencilMask = static_cast<uint16_t>(0x8u),
    __E_EndStencilMask = static_cast<uint16_t>(0x9u),
    __E_PopStencilMask = static_cast<uint16_t>(0xau),
    __E_PushClippingRect = static_cast<uint16_t>(0xbu),
    __E_PopClippingRect = static_cast<uint16_t>(0xcu),
    __E_PushScissors = static_cast<uint16_t>(0xdu),
    __E_PopScissors = static_cast<uint16_t>(0xeu),
    __E_PushGroupMatrix = static_cast<uint16_t>(0xfu),
    __E_PopGroupMatrix = static_cast<uint16_t>(0x10u),
    __E_PushRenderTexture = static_cast<uint16_t>(0x11u),
    __E_BlitAndPopRenderTexture = static_cast<uint16_t>(0x12u),
    __E_PushDefaultMaterial = static_cast<uint16_t>(0x13u),
    __E_PopDefaultMaterial = static_cast<uint16_t>(0x14u),
    __E_CutRenderChain = static_cast<uint16_t>(0x15u),
    __E_DedicatedPlaceholder = static_cast<uint16_t>(0x16u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EntryType_Unwrapped() const noexcept {
    return static_cast<__EntryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr EntryType(uint16_t value__) noexcept;

  /// @brief Field BeginStencilMask value: U16(8)
  static ::UnityEngine::UIElements::UIR::EntryType const BeginStencilMask;

  /// @brief Field BlitAndPopRenderTexture value: U16(18)
  static ::UnityEngine::UIElements::UIR::EntryType const BlitAndPopRenderTexture;

  /// @brief Field CutRenderChain value: U16(21)
  static ::UnityEngine::UIElements::UIR::EntryType const CutRenderChain;

  /// @brief Field DedicatedPlaceholder value: U16(22)
  static ::UnityEngine::UIElements::UIR::EntryType const DedicatedPlaceholder;

  /// @brief Field DrawChildren value: U16(7)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawChildren;

  /// @brief Field DrawGradients value: U16(4)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawGradients;

  /// @brief Field DrawImmediate value: U16(5)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawImmediate;

  /// @brief Field DrawImmediateCull value: U16(6)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawImmediateCull;

  /// @brief Field DrawSolidMesh value: U16(0)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawSolidMesh;

  /// @brief Field DrawTextMesh value: U16(3)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawTextMesh;

  /// @brief Field DrawTexturedMesh value: U16(1)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawTexturedMesh;

  /// @brief Field DrawTexturedMeshSkipAtlas value: U16(2)
  static ::UnityEngine::UIElements::UIR::EntryType const DrawTexturedMeshSkipAtlas;

  /// @brief Field EndStencilMask value: U16(9)
  static ::UnityEngine::UIElements::UIR::EntryType const EndStencilMask;

  /// @brief Field PopClippingRect value: U16(12)
  static ::UnityEngine::UIElements::UIR::EntryType const PopClippingRect;

  /// @brief Field PopDefaultMaterial value: U16(20)
  static ::UnityEngine::UIElements::UIR::EntryType const PopDefaultMaterial;

  /// @brief Field PopGroupMatrix value: U16(16)
  static ::UnityEngine::UIElements::UIR::EntryType const PopGroupMatrix;

  /// @brief Field PopScissors value: U16(14)
  static ::UnityEngine::UIElements::UIR::EntryType const PopScissors;

  /// @brief Field PopStencilMask value: U16(10)
  static ::UnityEngine::UIElements::UIR::EntryType const PopStencilMask;

  /// @brief Field PushClippingRect value: U16(11)
  static ::UnityEngine::UIElements::UIR::EntryType const PushClippingRect;

  /// @brief Field PushDefaultMaterial value: U16(19)
  static ::UnityEngine::UIElements::UIR::EntryType const PushDefaultMaterial;

  /// @brief Field PushGroupMatrix value: U16(15)
  static ::UnityEngine::UIElements::UIR::EntryType const PushGroupMatrix;

  /// @brief Field PushRenderTexture value: U16(17)
  static ::UnityEngine::UIElements::UIR::EntryType const PushRenderTexture;

  /// @brief Field PushScissors value: U16(13)
  static ::UnityEngine::UIElements::UIR::EntryType const PushScissors;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5293 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryType, 0x2>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryType, "UnityEngine.UIElements.UIR", "EntryType");
