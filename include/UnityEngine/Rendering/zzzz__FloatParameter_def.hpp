#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FloatParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class FloatParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FloatParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FloatParameter
class CORDL_TYPE FloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<float_t> {
public:
  // Declarations
  /// @brief Method Interp, addr 0x65adf80, size 0x14, virtual true, abstract: false, final true
  inline void Interp(float_t from, float_t to, float_t t);

  static inline ::UnityEngine::Rendering::FloatParameter* New_ctor(float_t value, bool overrideState);

  /// @brief Method .ctor, addr 0x65adf14, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(float_t value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatParameter(FloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatParameter(FloatParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12316 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FloatParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FloatParameter*, "UnityEngine.Rendering", "FloatParameter");
