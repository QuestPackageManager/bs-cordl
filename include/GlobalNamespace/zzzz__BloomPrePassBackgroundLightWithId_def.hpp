#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundLightWithId)
namespace GlobalNamespace {
class BloomPrePassBackgroundColor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundLightWithId);
// Dependencies LightWithIdMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundLightWithId
class CORDL_TYPE BloomPrePassBackgroundLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomPrePassBackgroundColor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassBackgroundColor, put = __cordl_internal_set__bloomPrePassBackgroundColor)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor>
      _bloomPrePassBackgroundColor;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Method ColorWasSet, addr 0x39e3ce0, size 0x20, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  static inline ::GlobalNamespace::BloomPrePassBackgroundLightWithId* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> const& __cordl_internal_get__bloomPrePassBackgroundColor() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor>& __cordl_internal_get__bloomPrePassBackgroundColor();

  constexpr void __cordl_internal_set__bloomPrePassBackgroundColor(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> value);

  /// @brief Method .ctor, addr 0x39e3d00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x39e3cc0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundLightWithId(BloomPrePassBackgroundLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundLightWithId(BloomPrePassBackgroundLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16300 };

  /// @brief Field _bloomPrePassBackgroundColor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> ____bloomPrePassBackgroundColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundLightWithId, ____bloomPrePassBackgroundColor) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundLightWithId, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundLightWithId*, "", "BloomPrePassBackgroundLightWithId");
