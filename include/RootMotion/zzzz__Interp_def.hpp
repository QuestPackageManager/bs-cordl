#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Interp)
namespace RootMotion {
struct InterpolationMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class Interp;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::Interp);
// Type: RootMotion::Interp
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12494))
// CS Name: ::RootMotion::Interp*
class CORDL_TYPE Interp : public ::System::Object {
public:
  // Declarations
  /// @brief Method Float, addr 0x123d4a8, size 0x400, virtual false, abstract: false, final false
  static inline float_t Float(float_t t, ::RootMotion::InterpolationMode mode);

  /// @brief Method V3, addr 0x123de30, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 V3(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, float_t t, ::RootMotion::InterpolationMode mode);

  /// @brief Method LerpValue, addr 0x123dea0, size 0x70, virtual false, abstract: false, final false
  static inline float_t LerpValue(float_t value, float_t target, float_t increaseSpeed, float_t decreaseSpeed);

  /// @brief Method None, addr 0x123d8a8, size 0xc, virtual false, abstract: false, final false
  static inline float_t None(float_t t, float_t b, float_t c);

  /// @brief Method InOutCubic, addr 0x123d8b4, size 0x24, virtual false, abstract: false, final false
  static inline float_t InOutCubic(float_t t, float_t b, float_t c);

  /// @brief Method InOutQuintic, addr 0x123d8d8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t InOutQuintic(float_t t, float_t b, float_t c);

  /// @brief Method InQuintic, addr 0x123d914, size 0x18, virtual false, abstract: false, final false
  static inline float_t InQuintic(float_t t, float_t b, float_t c);

  /// @brief Method InQuartic, addr 0x123d92c, size 0x14, virtual false, abstract: false, final false
  static inline float_t InQuartic(float_t t, float_t b, float_t c);

  /// @brief Method InCubic, addr 0x123d940, size 0x14, virtual false, abstract: false, final false
  static inline float_t InCubic(float_t t, float_t b, float_t c);

  /// @brief Method InQuadratic, addr 0x123d954, size 0x10, virtual false, abstract: false, final false
  static inline float_t InQuadratic(float_t t, float_t b, float_t c);

  /// @brief Method OutQuintic, addr 0x123d964, size 0x48, virtual false, abstract: false, final false
  static inline float_t OutQuintic(float_t t, float_t b, float_t c);

  /// @brief Method OutQuartic, addr 0x123d9ac, size 0x38, virtual false, abstract: false, final false
  static inline float_t OutQuartic(float_t t, float_t b, float_t c);

  /// @brief Method OutCubic, addr 0x123d9e4, size 0x28, virtual false, abstract: false, final false
  static inline float_t OutCubic(float_t t, float_t b, float_t c);

  /// @brief Method OutInCubic, addr 0x123da0c, size 0x34, virtual false, abstract: false, final false
  static inline float_t OutInCubic(float_t t, float_t b, float_t c);

  /// @brief Method OutInQuartic, addr 0x123df10, size 0x34, virtual false, abstract: false, final false
  static inline float_t OutInQuartic(float_t t, float_t b, float_t c);

  /// @brief Method BackInCubic, addr 0x123da40, size 0x28, virtual false, abstract: false, final false
  static inline float_t BackInCubic(float_t t, float_t b, float_t c);

  /// @brief Method BackInQuartic, addr 0x123da68, size 0x30, virtual false, abstract: false, final false
  static inline float_t BackInQuartic(float_t t, float_t b, float_t c);

  /// @brief Method OutBackCubic, addr 0x123da98, size 0x34, virtual false, abstract: false, final false
  static inline float_t OutBackCubic(float_t t, float_t b, float_t c);

  /// @brief Method OutBackQuartic, addr 0x123dacc, size 0x44, virtual false, abstract: false, final false
  static inline float_t OutBackQuartic(float_t t, float_t b, float_t c);

  /// @brief Method OutElasticSmall, addr 0x123db10, size 0x64, virtual false, abstract: false, final false
  static inline float_t OutElasticSmall(float_t t, float_t b, float_t c);

  /// @brief Method OutElasticBig, addr 0x123db74, size 0x64, virtual false, abstract: false, final false
  static inline float_t OutElasticBig(float_t t, float_t b, float_t c);

  /// @brief Method InElasticSmall, addr 0x123dbd8, size 0x54, virtual false, abstract: false, final false
  static inline float_t InElasticSmall(float_t t, float_t b, float_t c);

  /// @brief Method InElasticBig, addr 0x123dc2c, size 0x54, virtual false, abstract: false, final false
  static inline float_t InElasticBig(float_t t, float_t b, float_t c);

  /// @brief Method InSine, addr 0x123dc80, size 0x38, virtual false, abstract: false, final false
  static inline float_t InSine(float_t t, float_t b, float_t c);

  /// @brief Method OutSine, addr 0x123dcb8, size 0x34, virtual false, abstract: false, final false
  static inline float_t OutSine(float_t t, float_t b, float_t c);

  /// @brief Method InOutSine, addr 0x123dcec, size 0x44, virtual false, abstract: false, final false
  static inline float_t InOutSine(float_t t, float_t b, float_t c);

  /// @brief Method InElastic, addr 0x123df44, size 0x90, virtual false, abstract: false, final false
  static inline float_t InElastic(float_t t, float_t b, float_t c);

  /// @brief Method OutElastic, addr 0x123dd30, size 0x90, virtual false, abstract: false, final false
  static inline float_t OutElastic(float_t t, float_t b, float_t c);

  /// @brief Method InBack, addr 0x123ddc0, size 0x30, virtual false, abstract: false, final false
  static inline float_t InBack(float_t t, float_t b, float_t c);

  /// @brief Method OutBack, addr 0x123ddf0, size 0x40, virtual false, abstract: false, final false
  static inline float_t OutBack(float_t t, float_t b, float_t c);

  static inline ::RootMotion::Interp* New_ctor();

  /// @brief Method .ctor, addr 0x123dfd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Interp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interp(Interp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interp(Interp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interp();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Interp, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::Interp);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Interp*, "RootMotion", "Interp");
