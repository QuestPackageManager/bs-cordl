#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ClampedFloatParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__FloatParameter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClampedFloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ClampedFloatParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ClampedFloatParameter*, "UnityEngine.Rendering", "ClampedFloatParameter");
// Dependencies UnityEngine.Rendering.FloatParameter
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ClampedFloatParameter
class CORDL_TYPE ClampedFloatParameter : public ::UnityEngine::Rendering::FloatParameter {
public:
  // Declarations
  /// @brief Field max, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  static inline ::UnityEngine::Rendering::ClampedFloatParameter* New_ctor(float_t value, float_t min, float_t max, bool overrideState);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x67ccec0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t value, float_t min, float_t max, bool overrideState);

  /// @brief Method get_value, addr 0x67cce9c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_value, addr 0x67ccea4, size 0x1c, virtual true, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClampedFloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClampedFloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClampedFloatParameter(ClampedFloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClampedFloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClampedFloatParameter(ClampedFloatParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12351 };

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x1c, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ClampedFloatParameter, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ClampedFloatParameter, ___max) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ClampedFloatParameter) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
