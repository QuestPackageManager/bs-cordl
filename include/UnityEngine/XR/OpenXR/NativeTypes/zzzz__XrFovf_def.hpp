#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFovf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(XrFovf)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFovf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf, "UnityEngine.XR.OpenXR.NativeTypes", "XrFovf");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrFovf
struct CORDL_TYPE XrFovf {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6e3db98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t angleLeft, float_t angleRight, float_t angleUp, float_t angleDown);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrFovf();

  // Ctor Parameters [CppParam { name: "AngleLeft", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngleRight", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "AngleUp", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngleDown", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }]
  constexpr XrFovf(float_t AngleLeft, float_t AngleRight, float_t AngleUp, float_t AngleDown) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17511 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field AngleLeft, offset: 0x0, size: 0x4, def value: None
  float_t AngleLeft;

  /// @brief Field AngleRight, offset: 0x4, size: 0x4, def value: None
  float_t AngleRight;

  /// @brief Field AngleUp, offset: 0x8, size: 0x4, def value: None
  float_t AngleUp;

  /// @brief Field AngleDown, offset: 0xc, size: 0x4, def value: None
  float_t AngleDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf, AngleLeft) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf, AngleRight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf, AngleUp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf, AngleDown) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrFovf) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
