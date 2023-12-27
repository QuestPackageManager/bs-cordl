#pragma once
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
// Type: ::Easing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16091))
// CS Name: ::Easing*
class CORDL_TYPE Easing : public ::System::Object {
public:
  // Declarations
  /// @brief Method Linear addr 0x2a0cbcc size 0x4 virtual false final false
  static inline float_t Linear(float_t t);

  /// @brief Method InSine addr 0x2a0cbd0 size 0x2c virtual false final false
  static inline float_t InSine(float_t t);

  /// @brief Method OutSine addr 0x2a0cbfc size 0x18 virtual false final false
  static inline float_t OutSine(float_t t);

  /// @brief Method InOutSine addr 0x2a0cc14 size 0x2c virtual false final false
  static inline float_t InOutSine(float_t t);

  /// @brief Method InQuad addr 0x2a0cc40 size 0x8 virtual false final false
  static inline float_t InQuad(float_t t);

  /// @brief Method OutQuad addr 0x2a0cc48 size 0x14 virtual false final false
  static inline float_t OutQuad(float_t t);

  /// @brief Method InOutQuad addr 0x2a0cc5c size 0x30 virtual false final false
  static inline float_t InOutQuad(float_t t);

  /// @brief Method InCubic addr 0x2a0cc8c size 0xc virtual false final false
  static inline float_t InCubic(float_t t);

  /// @brief Method OutCubic addr 0x2a0cc98 size 0x28 virtual false final false
  static inline float_t OutCubic(float_t t);

  /// @brief Method InOutCubic addr 0x2a0ccc0 size 0x50 virtual false final false
  static inline float_t InOutCubic(float_t t);

  /// @brief Method InQuart addr 0x2a0cd10 size 0x10 virtual false final false
  static inline float_t InQuart(float_t t);

  /// @brief Method OutQuart addr 0x2a0cd20 size 0x28 virtual false final false
  static inline float_t OutQuart(float_t t);

  /// @brief Method InOutQuart addr 0x2a0cd48 size 0x54 virtual false final false
  static inline float_t InOutQuart(float_t t);

  /// @brief Method InQuint addr 0x2a0cd9c size 0x14 virtual false final false
  static inline float_t InQuint(float_t t);

  /// @brief Method OutQuint addr 0x2a0cdb0 size 0x28 virtual false final false
  static inline float_t OutQuint(float_t t);

  /// @brief Method InOutQuint addr 0x2a0cdd8 size 0x58 virtual false final false
  static inline float_t InOutQuint(float_t t);

  /// @brief Method InExpo addr 0x2a0ce30 size 0x24 virtual false final false
  static inline float_t InExpo(float_t t);

  /// @brief Method OutExpo addr 0x2a0ce54 size 0x30 virtual false final false
  static inline float_t OutExpo(float_t t);

  /// @brief Method InOutExpo addr 0x2a0ce84 size 0x70 virtual false final false
  static inline float_t InOutExpo(float_t t);

  /// @brief Method InCirc addr 0x2a0cef4 size 0x18 virtual false final false
  static inline float_t InCirc(float_t t);

  /// @brief Method OutCirc addr 0x2a0cf0c size 0x1c virtual false final false
  static inline float_t OutCirc(float_t t);

  /// @brief Method InOutCirc addr 0x2a0cf28 size 0x4c virtual false final false
  static inline float_t InOutCirc(float_t t);

  /// @brief Method InBack addr 0x2a0cf74 size 0x2c virtual false final false
  static inline float_t InBack(float_t t);

  /// @brief Method OutBack addr 0x2a0cfa0 size 0x50 virtual false final false
  static inline float_t OutBack(float_t t);

  /// @brief Method InOutBack addr 0x2a0cff0 size 0x6c virtual false final false
  static inline float_t InOutBack(float_t t);

  /// @brief Method InElastic addr 0x2a0d05c size 0x6c virtual false final false
  static inline float_t InElastic(float_t t);

  /// @brief Method OutElastic addr 0x2a0d0c8 size 0x70 virtual false final false
  static inline float_t OutElastic(float_t t);

  /// @brief Method InOutElastic addr 0x2a0d138 size 0xc8 virtual false final false
  static inline float_t InOutElastic(float_t t);

  /// @brief Method InBounce addr 0x2a0d200 size 0x24 virtual false final false
  static inline float_t InBounce(float_t t);

  /// @brief Method OutBounce addr 0x2a0d224 size 0xb8 virtual false final false
  static inline float_t OutBounce(float_t t);

  /// @brief Method InOutBounce addr 0x2a0d2dc size 0x50 virtual false final false
  static inline float_t InOutBounce(float_t t);

  /// @brief Method BeatSaberInOutBack addr 0x2a0d32c size 0x90 virtual false final false
  static inline float_t BeatSaberInOutBack(float_t t);

  /// @brief Method BeatSaberInOutElastic addr 0x2a0d3bc size 0x80 virtual false final false
  static inline float_t BeatSaberInOutElastic(float_t t);

  /// @brief Method BeatSaberInOutBounce addr 0x2a0d43c size 0xbc virtual false final false
  static inline float_t BeatSaberInOutBounce(float_t t);

  // Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Easing(Easing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Easing(Easing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Easing();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Easing, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Easing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Easing*, "", "Easing");
