#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TubeBloomPrePassLightWithId)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightWithId);
// Type: ::TubeBloomPrePassLightWithId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14558))
// CS Name: ::TubeBloomPrePassLightWithId*
class CORDL_TYPE TubeBloomPrePassLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _tubeBloomPrePassLight, offset 0x30, size 0x8
  __declspec(property(get = __get__tubeBloomPrePassLight, put = __set__tubeBloomPrePassLight))::GlobalNamespace::TubeBloomPrePassLight* _tubeBloomPrePassLight;

  /// @brief Field _setOnlyOnce, offset 0x38, size 0x1
  __declspec(property(get = __get__setOnlyOnce, put = __set__setOnlyOnce)) bool _setOnlyOnce;

  /// @brief Field _setColorOnly, offset 0x39, size 0x1
  __declspec(property(get = __get__setColorOnly, put = __set__setColorOnly)) bool _setColorOnly;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::TubeBloomPrePassLight*& __get__tubeBloomPrePassLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& __get__tubeBloomPrePassLight() const;

  constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight* value);

  constexpr bool& __get__setOnlyOnce();

  constexpr bool const& __get__setOnlyOnce() const;

  constexpr void __set__setOnlyOnce(bool value);

  constexpr bool& __get__setColorOnly();

  constexpr bool const& __get__setColorOnly() const;

  constexpr void __set__setColorOnly(bool value);

  /// @brief Method get_color, addr 0x2114030, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method ColorWasSet, addr 0x2114050, size 0x58, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::TubeBloomPrePassLightWithId* New_ctor();

  /// @brief Method .ctor, addr 0x21140a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightWithId();

public:
  /// @brief Field _tubeBloomPrePassLight, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLight* ____tubeBloomPrePassLight;

  /// @brief Field _setOnlyOnce, offset: 0x38, size: 0x1, def value: None
  bool ____setOnlyOnce;

  /// @brief Field _setColorOnly, offset: 0x39, size: 0x1, def value: None
  bool ____setColorOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightWithId, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightWithId, ____tubeBloomPrePassLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightWithId, ____setOnlyOnce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightWithId, ____setColorOnly) == 0x39, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightWithId*, "", "TubeBloomPrePassLightWithId");
