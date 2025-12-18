#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TubeBloomPrePassLightWithId)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightWithId);
// Dependencies LightWithIdMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeBloomPrePassLightWithId
class CORDL_TYPE TubeBloomPrePassLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _setColorOnly, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _setOnlyOnce, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__setOnlyOnce, put = __cordl_internal_set__setOnlyOnce)) bool _setOnlyOnce;

  /// @brief Field _tubeBloomPrePassLight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Method ColorWasSet, addr 0x56bd10c, size 0x58, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::TubeBloomPrePassLightWithId* New_ctor();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get__setOnlyOnce() const;

  constexpr bool& __cordl_internal_get__setOnlyOnce();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr void __cordl_internal_set__setOnlyOnce(bool value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  /// @brief Method .ctor, addr 0x56bd164, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x56bd0f0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19751 };

  /// @brief Field _tubeBloomPrePassLight, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  /// @brief Field _setOnlyOnce, offset: 0x40, size: 0x1, def value: None
  bool ____setOnlyOnce;

  /// @brief Field _setColorOnly, offset: 0x41, size: 0x1, def value: None
  bool ____setColorOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightWithId, ____tubeBloomPrePassLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightWithId, ____setOnlyOnce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightWithId, ____setColorOnly) == 0x41, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightWithId, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightWithId*, "", "TubeBloomPrePassLightWithId");
