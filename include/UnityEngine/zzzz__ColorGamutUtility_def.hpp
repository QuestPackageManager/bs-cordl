#pragma once
// IWYU pragma private; include "UnityEngine/ColorGamutUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorGamutUtility)
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
struct ColorPrimaries;
}
namespace UnityEngine {
struct TransferFunction;
}
namespace UnityEngine {
struct WhitePoint;
}
// Forward declare root types
namespace UnityEngine {
class ColorGamutUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ColorGamutUtility);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ColorGamutUtility
class CORDL_TYPE ColorGamutUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetColorPrimaries, addr 0x68576c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorPrimaries GetColorPrimaries(::UnityEngine::ColorGamut gamut);

  /// @brief Method GetTransferFunction, addr 0x685773c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TransferFunction GetTransferFunction(::UnityEngine::ColorGamut gamut);

  /// @brief Method GetWhitePoint, addr 0x6857700, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::WhitePoint GetWhitePoint(::UnityEngine::ColorGamut gamut);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGamutUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGamutUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGamutUtility(ColorGamutUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGamutUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGamutUtility(ColorGamutUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorGamutUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ColorGamutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorGamutUtility*, "UnityEngine", "ColorGamutUtility");
