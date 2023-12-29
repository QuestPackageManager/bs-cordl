#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(XrVector2f)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector2f;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f);
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrVector2f
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14423))
// CS Name: ::UnityEngine.XR.OpenXR.NativeTypes::XrVector2f
struct CORDL_TYPE XrVector2f {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2b034d4 size 0x8 virtual false final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor addr 0x2b034dc size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::Vector2 value);

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr XrVector2f(float_t x, float_t y) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrVector2f();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f, y) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f, "UnityEngine.XR.OpenXR.NativeTypes", "XrVector2f");
