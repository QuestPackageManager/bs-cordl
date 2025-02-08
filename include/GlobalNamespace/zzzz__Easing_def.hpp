#pragma once
// IWYU pragma private; include "GlobalNamespace/Easing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Easing)
// Forward declare root types
namespace GlobalNamespace {
class Easing;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Easing);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Easing
class CORDL_TYPE Easing : public ::System::Object {
public:
  // Declarations
  /// @brief Method BeatSaberInOutBack, addr 0x44deb58, size 0x90, virtual false, abstract: false, final false
  static inline float_t BeatSaberInOutBack(float_t t);

  /// @brief Method BeatSaberInOutBounce, addr 0x44dec68, size 0xbc, virtual false, abstract: false, final false
  static inline float_t BeatSaberInOutBounce(float_t t);

  /// @brief Method BeatSaberInOutElastic, addr 0x44debe8, size 0x80, virtual false, abstract: false, final false
  static inline float_t BeatSaberInOutElastic(float_t t);

  /// @brief Method InBack, addr 0x44de7a4, size 0x2c, virtual false, abstract: false, final false
  static inline float_t InBack(float_t t);

  /// @brief Method InBounce, addr 0x44dea28, size 0x24, virtual false, abstract: false, final false
  static inline float_t InBounce(float_t t);

  /// @brief Method InCirc, addr 0x44de720, size 0x18, virtual false, abstract: false, final false
  static inline float_t InCirc(float_t t);

  /// @brief Method InCubic, addr 0x44de4b8, size 0xc, virtual false, abstract: false, final false
  static inline float_t InCubic(float_t t);

  /// @brief Method InElastic, addr 0x44de890, size 0x68, virtual false, abstract: false, final false
  static inline float_t InElastic(float_t t);

  /// @brief Method InExpo, addr 0x44de65c, size 0x24, virtual false, abstract: false, final false
  static inline float_t InExpo(float_t t);

  /// @brief Method InOutBack, addr 0x44de820, size 0x70, virtual false, abstract: false, final false
  static inline float_t InOutBack(float_t t);

  /// @brief Method InOutBounce, addr 0x44deb04, size 0x54, virtual false, abstract: false, final false
  static inline float_t InOutBounce(float_t t);

  /// @brief Method InOutCirc, addr 0x44de754, size 0x50, virtual false, abstract: false, final false
  static inline float_t InOutCirc(float_t t);

  /// @brief Method InOutCubic, addr 0x44de4ec, size 0x50, virtual false, abstract: false, final false
  static inline float_t InOutCubic(float_t t);

  /// @brief Method InOutElastic, addr 0x44de964, size 0xc4, virtual false, abstract: false, final false
  static inline float_t InOutElastic(float_t t);

  /// @brief Method InOutExpo, addr 0x44de6b4, size 0x6c, virtual false, abstract: false, final false
  static inline float_t InOutExpo(float_t t);

  /// @brief Method InOutQuad, addr 0x44de48c, size 0x2c, virtual false, abstract: false, final false
  static inline float_t InOutQuad(float_t t);

  /// @brief Method InOutQuart, addr 0x44de574, size 0x54, virtual false, abstract: false, final false
  static inline float_t InOutQuart(float_t t);

  /// @brief Method InOutQuint, addr 0x44de604, size 0x58, virtual false, abstract: false, final false
  static inline float_t InOutQuint(float_t t);

  /// @brief Method InOutSine, addr 0x44de444, size 0x2c, virtual false, abstract: false, final false
  static inline float_t InOutSine(float_t t);

  /// @brief Method InQuad, addr 0x44de470, size 0x8, virtual false, abstract: false, final false
  static inline float_t InQuad(float_t t);

  /// @brief Method InQuart, addr 0x44de53c, size 0x10, virtual false, abstract: false, final false
  static inline float_t InQuart(float_t t);

  /// @brief Method InQuint, addr 0x44de5c8, size 0x14, virtual false, abstract: false, final false
  static inline float_t InQuint(float_t t);

  /// @brief Method InSine, addr 0x44de400, size 0x2c, virtual false, abstract: false, final false
  static inline float_t InSine(float_t t);

  /// @brief Method Linear, addr 0x44de3fc, size 0x4, virtual false, abstract: false, final false
  static inline float_t Linear(float_t t);

  /// @brief Method OutBack, addr 0x44de7d0, size 0x50, virtual false, abstract: false, final false
  static inline float_t OutBack(float_t t);

  /// @brief Method OutBounce, addr 0x44dea4c, size 0xb8, virtual false, abstract: false, final false
  static inline float_t OutBounce(float_t t);

  /// @brief Method OutCirc, addr 0x44de738, size 0x1c, virtual false, abstract: false, final false
  static inline float_t OutCirc(float_t t);

  /// @brief Method OutCubic, addr 0x44de4c4, size 0x28, virtual false, abstract: false, final false
  static inline float_t OutCubic(float_t t);

  /// @brief Method OutElastic, addr 0x44de8f8, size 0x6c, virtual false, abstract: false, final false
  static inline float_t OutElastic(float_t t);

  /// @brief Method OutExpo, addr 0x44de680, size 0x34, virtual false, abstract: false, final false
  static inline float_t OutExpo(float_t t);

  /// @brief Method OutQuad, addr 0x44de478, size 0x14, virtual false, abstract: false, final false
  static inline float_t OutQuad(float_t t);

  /// @brief Method OutQuart, addr 0x44de54c, size 0x28, virtual false, abstract: false, final false
  static inline float_t OutQuart(float_t t);

  /// @brief Method OutQuint, addr 0x44de5dc, size 0x28, virtual false, abstract: false, final false
  static inline float_t OutQuint(float_t t);

  /// @brief Method OutSine, addr 0x44de42c, size 0x18, virtual false, abstract: false, final false
  static inline float_t OutSine(float_t t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Easing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Easing(Easing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Easing(Easing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Easing, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Easing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Easing*, "", "Easing");
