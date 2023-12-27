#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientTintColorWithLightId)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientTintColorWithLightId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
// Type: ::BloomPrePassBackgroundColorsGradientTintColorWithLightId
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14516))
// CS Name: ::BloomPrePassBackgroundColorsGradientTintColorWithLightId*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientTintColorWithLightId : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x48, size 0x8
  __declspec(property(get = __get__bloomPrePassBackgroundColorsGradient,
                      put = __set__bloomPrePassBackgroundColorsGradient))::GlobalNamespace::BloomPrePassBackgroundColorsGradient* _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _useGrayscale, offset 0x50, size 0x1
  __declspec(property(get = __get__useGrayscale, put = __set__useGrayscale)) bool _useGrayscale;

  /// @brief Field grayscaleFactor, offset 0x54, size 0x4
  __declspec(property(get = __get_grayscaleFactor, put = __set_grayscaleFactor)) float_t grayscaleFactor;

  constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& __get__bloomPrePassBackgroundColorsGradient();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> const& __get__bloomPrePassBackgroundColorsGradient() const;

  constexpr void __set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient* value);

  constexpr bool& __get__useGrayscale();

  constexpr bool const& __get__useGrayscale() const;

  constexpr void __set__useGrayscale(bool value);

  constexpr float_t& __get_grayscaleFactor();

  constexpr float_t const& __get_grayscaleFactor() const;

  constexpr void __set_grayscaleFactor(float_t value);

  /// @brief Method ColorWasSet addr 0x210e8b8 size 0x70 virtual true final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId* New_ctor();

  /// @brief Method .ctor addr 0x210e928 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientTintColorWithLightId(BloomPrePassBackgroundColorsGradientTintColorWithLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientTintColorWithLightId(BloomPrePassBackgroundColorsGradientTintColorWithLightId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId();

public:
  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _useGrayscale, offset: 0x50, size: 0x1, def value: None
  bool ____useGrayscale;

  /// @brief Field grayscaleFactor, offset: 0x54, size: 0x4, def value: None
  float_t ___grayscaleFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightId");
