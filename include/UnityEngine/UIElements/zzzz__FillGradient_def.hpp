#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FillGradient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__AddressMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FillGradient)
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FillGradient;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FillGradient);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FillGradient, "UnityEngine.UIElements", "FillGradient");
// Dependencies UnityEngine.UIElements.AddressMode, UnityEngine.UIElements.GradientType, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FillGradient
struct CORDL_TYPE FillGradient {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FillGradient();

  // Ctor Parameters [CppParam { name: "_gradient_k__BackingField", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gradientType_k__BackingField",
  // ty: "::UnityEngine::UIElements::GradientType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_addressMode_k__BackingField", ty: "::UnityEngine::UIElements::AddressMode",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_start_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_end_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "_focus_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr FillGradient(::UnityEngine::Gradient* _gradient_k__BackingField, ::UnityEngine::UIElements::GradientType _gradientType_k__BackingField,
                         ::UnityEngine::UIElements::AddressMode _addressMode_k__BackingField, ::UnityEngine::Vector2 _start_k__BackingField, ::UnityEngine::Vector2 _end_k__BackingField,
                         ::UnityEngine::Vector2 _center_k__BackingField, ::UnityEngine::Vector2 _focus_k__BackingField, float_t _radius_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <gradient>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Gradient* _gradient_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <gradientType>k__BackingField, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::GradientType _gradientType_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <addressMode>k__BackingField, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::UIElements::AddressMode _addressMode_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <start>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 _start_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <end>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 _end_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <center>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 _center_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <focus>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 _focus_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <radius>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t _radius_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _gradient_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _gradientType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _addressMode_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _start_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _end_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _center_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _focus_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FillGradient, _radius_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FillGradient) == 0x38, "Size mismatch!");

} // namespace UnityEngine::UIElements
