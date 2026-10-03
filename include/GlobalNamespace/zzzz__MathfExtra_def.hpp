#pragma once
// IWYU pragma private; include "GlobalNamespace/MathfExtra.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathfExtra)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MathfExtra;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MathfExtra*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MathfExtra*, "", "MathfExtra");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MathfExtra
class CORDL_TYPE MathfExtra : public ::System::Object {
public:
  // Declarations
  /// @brief Method Approximately, addr 0x35aedf0, size 0x10, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b, float_t precision);

  /// @brief Method ExponentialDecay, addr 0x35aed08, size 0x34, virtual false, abstract: false, final false
  static inline float_t ExponentialDecay(float_t current, float_t target, float_t decay, float_t deltaTime);

  /// @brief Method MaxAbs, addr 0x35aeddc, size 0x14, virtual false, abstract: false, final false
  static inline float_t MaxAbs(float_t a, float_t b);

  /// @brief Method Mod, addr 0x35aeba0, size 0x14, virtual false, abstract: false, final false
  static inline float_t Mod(float_t value, float_t mod);

  /// @brief Method Mod, addr 0x35aebb4, size 0x30, virtual false, abstract: false, final false
  static inline int32_t Mod(int32_t value, int32_t mod);

  /// @brief Method Repeat, addr 0x35af078, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t Repeat(int32_t t, int32_t length);

  /// [Extension]
  /// @brief Method Round, addr 0x35aee34, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Round(::UnityEngine::Vector4 value, int32_t digits);

  /// @brief Method Round, addr 0x35aebe4, size 0x124, virtual false, abstract: false, final false
  static inline float_t Round(float_t value, int32_t decimals);

  /// @brief Method SafeDivide, addr 0x35aed3c, size 0xa0, virtual false, abstract: false, final false
  static inline float_t SafeDivide(float_t numerator, float_t denominator, float_t fallback);

  /// @brief Method ShortestAngleDifference, addr 0x35aee00, size 0x34, virtual false, abstract: false, final false
  static inline float_t ShortestAngleDifference(float_t from, float_t to);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MathfExtra();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MathfExtra(MathfExtra&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MathfExtra(MathfExtra const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MathfExtra) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
