#pragma once
// IWYU pragma private; include "UnityEngine/Random.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Random);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Random
class CORDL_TYPE Random : public ::System::Object {
public:
  // Declarations
  /// @brief Method ColorHSV, addr 0x48a7310, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorHSV();

  /// @brief Method ColorHSV, addr 0x48a7334, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorHSV(float_t hueMin, float_t hueMax, float_t saturationMin, float_t saturationMax, float_t valueMin, float_t valueMax, float_t alphaMin, float_t alphaMax);

  /// @brief Method InitState, addr 0x48a70d8, size 0x3c, virtual false, abstract: false, final false
  static inline void InitState(int32_t seed);

  /// @brief Method RandomRangeInt, addr 0x48a7198, size 0x44, virtual false, abstract: false, final false
  static inline int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive);

  /// @brief Method Range, addr 0x48a7114, size 0x40, virtual false, abstract: false, final false
  static inline float_t Range(float_t minInclusive, float_t maxInclusive);

  /// @brief Method Range, addr 0x48a7154, size 0x44, virtual false, abstract: false, final false
  static inline int32_t Range(int32_t minInclusive, int32_t maxExclusive);

  /// @brief Method get_onUnitSphere, addr 0x48a7204, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_onUnitSphere();

  /// @brief Method get_onUnitSphere_Injected, addr 0x48a7250, size 0x3c, virtual false, abstract: false, final false
  static inline void get_onUnitSphere_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x48a728c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x48a72d4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_value, addr 0x48a71dc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Random();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Random(Random&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Random(Random const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Random, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Random*, "UnityEngine", "Random");
