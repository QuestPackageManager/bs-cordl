#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectionalLightWithId)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithId);
// Type: ::DirectionalLightWithId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14760))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14738))
// CS Name: ::DirectionalLightWithId*
class CORDL_TYPE DirectionalLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _light, offset 0x30, size 0x8
  __declspec(property(get = __get__light, put = __set__light))::GlobalNamespace::DirectionalLight* _light;

  /// @brief Field _intensity, offset 0x38, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _minIntensity, offset 0x3c, size 0x4
  __declspec(property(get = __get__minIntensity, put = __set__minIntensity)) float_t _minIntensity;

  constexpr ::GlobalNamespace::DirectionalLight*& __get__light();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& __get__light() const;

  constexpr void __set__light(::GlobalNamespace::DirectionalLight* value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__minIntensity();

  constexpr float_t const& __get__minIntensity() const;

  constexpr void __set__minIntensity(float_t value);

  /// @brief Method ColorWasSet addr 0x1fb9a74 size 0x34 virtual true final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::DirectionalLightWithId* New_ctor();

  /// @brief Method .ctor addr 0x1fb9aa8 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithId(DirectionalLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithId(DirectionalLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithId();

public:
  /// @brief Field _light, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::DirectionalLight* ____light;

  /// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minIntensity, offset: 0x3c, size: 0x4, def value: None
  float_t ____minIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithId, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithId, ____light) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithId, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithId, ____minIntensity) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithId*, "", "DirectionalLightWithId");
