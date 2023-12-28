#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundLightWithId)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColor;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundLightWithId);
// Type: ::BloomPrePassBackgroundLightWithId
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14518))
// CS Name: ::BloomPrePassBackgroundLightWithId*
class CORDL_TYPE BloomPrePassBackgroundLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomPrePassBackgroundColor, offset 0x30, size 0x8
  __declspec(property(get = __get__bloomPrePassBackgroundColor, put = __set__bloomPrePassBackgroundColor))::GlobalNamespace::BloomPrePassBackgroundColor* _bloomPrePassBackgroundColor;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::BloomPrePassBackgroundColor*& __get__bloomPrePassBackgroundColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColor*> const& __get__bloomPrePassBackgroundColor() const;

  constexpr void __set__bloomPrePassBackgroundColor(::GlobalNamespace::BloomPrePassBackgroundColor* value);

  /// @brief Method get_color addr 0x210e988 size 0x20 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method ColorWasSet addr 0x210e9a8 size 0x20 virtual true final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  static inline ::GlobalNamespace::BloomPrePassBackgroundLightWithId* New_ctor();

  /// @brief Method .ctor addr 0x210e9c8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundLightWithId(BloomPrePassBackgroundLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundLightWithId(BloomPrePassBackgroundLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundLightWithId();

public:
  /// @brief Field _bloomPrePassBackgroundColor, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundColor* ____bloomPrePassBackgroundColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundLightWithId, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundLightWithId*, "", "BloomPrePassBackgroundLightWithId");
