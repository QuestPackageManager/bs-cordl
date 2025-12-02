#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FloatRangeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatRangeParameter)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class FloatRangeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FloatRangeParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FloatRangeParameter
class CORDL_TYPE FloatRangeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field max, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Vector2 value;

  /// @brief Method Interp, addr 0x65ae358, size 0x20, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, float_t t);

  static inline ::UnityEngine::Rendering::FloatRangeParameter* New_ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x65ae2d0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState);

  /// @brief Method get_value, addr 0x65ae29c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_value();

  /// @brief Method set_value, addr 0x65ae2a4, size 0x2c, virtual true, abstract: false, final false
  inline void set_value(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatRangeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatRangeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatRangeParameter(FloatRangeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatRangeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatRangeParameter(FloatRangeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12324 };

  /// @brief Field min, offset: 0x1c, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x20, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FloatRangeParameter, ___min) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FloatRangeParameter, ___max) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FloatRangeParameter, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FloatRangeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FloatRangeParameter*, "UnityEngine.Rendering", "FloatRangeParameter");
