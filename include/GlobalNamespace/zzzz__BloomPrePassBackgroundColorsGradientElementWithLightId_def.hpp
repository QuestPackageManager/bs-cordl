#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientElementWithLightId)
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientElementWithLightId;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements);
// Type: ::Elements
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14514))
// CS Name: ::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementNumber, offset 0x10, size 0x4
  __declspec(property(get = __get_elementNumber, put = __set_elementNumber)) int32_t elementNumber;

  /// @brief Field intensity, offset 0x14, size 0x4
  __declspec(property(get = __get_intensity, put = __set_intensity)) float_t intensity;

  /// @brief Field minIntensity, offset 0x18, size 0x4
  __declspec(property(get = __get_minIntensity, put = __set_minIntensity)) float_t minIntensity;

  constexpr int32_t& __get_elementNumber();

  constexpr int32_t const& __get_elementNumber() const;

  constexpr void __set_elementNumber(int32_t value);

  constexpr float_t& __get_intensity();

  constexpr float_t const& __get_intensity() const;

  constexpr void __set_intensity(float_t value);

  constexpr float_t& __get_minIntensity();

  constexpr float_t const& __get_minIntensity() const;

  constexpr void __set_minIntensity(float_t value);

  static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements* New_ctor();

  /// @brief Method .ctor, addr 0x210e8a8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements();

public:
  /// @brief Field elementNumber, offset: 0x10, size: 0x4, def value: None
  int32_t ___elementNumber;

  /// @brief Field intensity, offset: 0x14, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field minIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ___minIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, ___elementNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, ___intensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, ___minIntensity) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientElementWithLightId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14515))
// CS Name: ::BloomPrePassBackgroundColorsGradientElementWithLightId*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientElementWithLightId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using Elements = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x30, size 0x8
  __declspec(property(get = __get__bloomPrePassBackgroundColorsGradient,
                      put = __set__bloomPrePassBackgroundColorsGradient))::GlobalNamespace::BloomPrePassBackgroundColorsGradient* _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset 0x38, size 0x8
  __declspec(property(get = __get__elements, put = __set__elements))::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,
                                                                             ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*> _elements;

  constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& __get__bloomPrePassBackgroundColorsGradient();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> const& __get__bloomPrePassBackgroundColorsGradient() const;

  constexpr void __set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient* value);

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>&
  __get__elements();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*> const&
  __get__elements() const;

  constexpr void __set__elements(
      ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>
          value);

  /// @brief Method ColorWasSet, addr 0x210e7dc, size 0xac, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId* New_ctor();

  /// @brief Method .ctor, addr 0x210e888, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientElementWithLightId();

public:
  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>
      ____elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, ____bloomPrePassBackgroundColorsGradient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, ____elements) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId/Elements");
