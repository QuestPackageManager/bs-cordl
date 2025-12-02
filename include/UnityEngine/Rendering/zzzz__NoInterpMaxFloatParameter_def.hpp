#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpMaxFloatParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoInterpMaxFloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpMaxFloatParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpMaxFloatParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpMaxFloatParameter
class CORDL_TYPE NoInterpMaxFloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<float_t> {
public:
  // Declarations
  /// @brief Field max, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  static inline ::UnityEngine::Rendering::NoInterpMaxFloatParameter* New_ctor(float_t value, float_t max, bool overrideState);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr void __cordl_internal_set_max(float_t value);

  /// @brief Method .ctor, addr 0x65ae130, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(float_t value, float_t max, bool overrideState);

  /// @brief Method get_value, addr 0x65ae114, size 0x8, virtual true, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_value, addr 0x65ae11c, size 0x14, virtual true, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpMaxFloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpMaxFloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpMaxFloatParameter(NoInterpMaxFloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpMaxFloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpMaxFloatParameter(NoInterpMaxFloatParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12321 };

  /// @brief Field max, offset: 0x18, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::NoInterpMaxFloatParameter, ___max) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpMaxFloatParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpMaxFloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpMaxFloatParameter*, "UnityEngine.Rendering", "NoInterpMaxFloatParameter");
