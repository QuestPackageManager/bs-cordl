#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedUpdateVector3SmoothValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedUpdateVector3SmoothValue)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedUpdateVector3SmoothValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FixedUpdateVector3SmoothValue);
// Dependencies FixedUpdateSmoothValue`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FixedUpdateVector3SmoothValue
class CORDL_TYPE FixedUpdateVector3SmoothValue : public ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Method Interpolate, addr 0x39bee80, size 0x28, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 Interpolate(::UnityEngine::Vector3 value0, ::UnityEngine::Vector3 value1, float_t t);

  static inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* New_ctor(float_t smooth);

  /// @brief Method .ctor, addr 0x39bee28, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(float_t smooth);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedUpdateVector3SmoothValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedUpdateVector3SmoothValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedUpdateVector3SmoothValue(FixedUpdateVector3SmoothValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedUpdateVector3SmoothValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedUpdateVector3SmoothValue(FixedUpdateVector3SmoothValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16397 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FixedUpdateVector3SmoothValue, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FixedUpdateVector3SmoothValue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FixedUpdateVector3SmoothValue*, "", "FixedUpdateVector3SmoothValue");
