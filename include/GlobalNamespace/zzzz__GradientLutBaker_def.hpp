#pragma once
// IWYU pragma private; include "GlobalNamespace\GradientLutBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GradientLutBaker)
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientLutBaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GradientLutBaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GradientLutBaker*, "", "GradientLutBaker");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GradientLutBaker
class CORDL_TYPE GradientLutBaker : public ::System::Object {
public:
  // Declarations
  /// @brief Method BakeLut, addr 0x36f85b0, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> BakeLut(::UnityEngine::Gradient* gradient, int32_t width, ::UnityEngine::FilterMode filterMode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientLutBaker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientLutBaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientLutBaker(GradientLutBaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientLutBaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientLutBaker(GradientLutBaker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GradientLutBaker) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
