#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientElementWithLightId.hpp"
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
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementNumber, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_elementNumber, put = __cordl_internal_set_elementNumber)) int32_t elementNumber;

  /// @brief Field intensity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  /// @brief Field minIntensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_minIntensity, put = __cordl_internal_set_minIntensity)) float_t minIntensity;

  static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements* New_ctor();

  constexpr int32_t const& __cordl_internal_get_elementNumber() const;

  constexpr int32_t& __cordl_internal_get_elementNumber();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr float_t const& __cordl_internal_get_minIntensity() const;

  constexpr float_t& __cordl_internal_get_minIntensity();

  constexpr void __cordl_internal_set_elementNumber(int32_t value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_minIntensity(float_t value);

  /// @brief Method .ctor, addr 0x3977528, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements const&) = delete;

  /// @brief Field elementNumber, offset: 0x10, size: 0x4, def value: None
  int32_t ___elementNumber;

  /// @brief Field intensity, offset: 0x14, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field minIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ___minIntensity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, ___elementNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, ___intensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, ___minIntensity) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientElementWithLightId
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundColorsGradientElementWithLightId*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientElementWithLightId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using Elements = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassBackgroundColorsGradient,
                      put = __cordl_internal_set__bloomPrePassBackgroundColorsGradient)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>
      _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__elements,
                      put = __cordl_internal_set__elements)) ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,
                                                                      ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>
      _elements;

  /// @brief Method ColorWasSet, addr 0x397745c, size 0xac, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const& __cordl_internal_get__bloomPrePassBackgroundColorsGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>& __cordl_internal_get__bloomPrePassBackgroundColorsGradient();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*> const&
  __cordl_internal_get__elements() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>&
  __cordl_internal_get__elements();

  constexpr void __cordl_internal_set__bloomPrePassBackgroundColorsGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value);

  constexpr void __cordl_internal_set__elements(
      ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>
          value);

  /// @brief Method .ctor, addr 0x3977508, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientElementWithLightId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId const&) = delete;

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*>*>
      ____elements;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16251 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, ____bloomPrePassBackgroundColorsGradient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, ____elements) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId/Elements");
