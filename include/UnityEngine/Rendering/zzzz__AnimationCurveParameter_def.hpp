#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AnimationCurveParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCurveParameter)
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AnimationCurveParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::AnimationCurveParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AnimationCurveParameter
class CORDL_TYPE AnimationCurveParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::AnimationCurve*> {
public:
  // Declarations
  /// @brief Method Clone, addr 0x65af70c, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method GetHashCode, addr 0x65af7f4, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Interp, addr 0x65af660, size 0xc, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::AnimationCurve* lhsCurve, ::UnityEngine::AnimationCurve* rhsCurve, float_t t);

  static inline ::UnityEngine::Rendering::AnimationCurveParameter* New_ctor(::UnityEngine::AnimationCurve* value, bool overrideState);

  /// @brief Method SetValue, addr 0x65af66c, size 0xa0, virtual true, abstract: false, final false
  inline void SetValue(::UnityEngine::Rendering::VolumeParameter* parameter);

  /// @brief Method .ctor, addr 0x65af5fc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AnimationCurve* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurveParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurveParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurveParameter(AnimationCurveParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurveParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurveParameter(AnimationCurveParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AnimationCurveParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::AnimationCurveParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AnimationCurveParameter*, "UnityEngine.Rendering", "AnimationCurveParameter");
