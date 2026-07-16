#pragma once
// IWYU pragma private; include "GlobalNamespace/SetTubeBloomPrePassLightColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SetTubeBloomPrePassLightColor)
namespace GlobalNamespace {
class ColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SetTubeBloomPrePassLightColor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetTubeBloomPrePassLightColor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetTubeBloomPrePassLightColor*, "", "SetTubeBloomPrePassLightColor");
// Dependencies TubeBloomPrePassLight, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetTubeBloomPrePassLightColor
class CORDL_TYPE SetTubeBloomPrePassLightColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityW<::GlobalNamespace::ColorSO> _color;

  /// @brief Field _tubeLights, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeLights, put = __cordl_internal_set__tubeLights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> _tubeLights;

  static inline ::GlobalNamespace::SetTubeBloomPrePassLightColor* New_ctor();

  /// @brief Method Start, addr 0x59eaa98, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__color() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__color();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& __cordl_internal_get__tubeLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& __cordl_internal_get__tubeLights();

  constexpr void __cordl_internal_set__color(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__tubeLights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value);

  /// @brief Method .ctor, addr 0x59eaafc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetTubeBloomPrePassLightColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetTubeBloomPrePassLightColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetTubeBloomPrePassLightColor(SetTubeBloomPrePassLightColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetTubeBloomPrePassLightColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetTubeBloomPrePassLightColor(SetTubeBloomPrePassLightColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6216 };

  /// @brief Field _color, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____color;

  /// @brief Field _tubeLights, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> ____tubeLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetTubeBloomPrePassLightColor, ____color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetTubeBloomPrePassLightColor, ____tubeLights) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetTubeBloomPrePassLightColor) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
