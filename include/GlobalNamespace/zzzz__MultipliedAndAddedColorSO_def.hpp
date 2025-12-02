#pragma once
// IWYU pragma private; include "GlobalNamespace/MultipliedAndAddedColorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(MultipliedAndAddedColorSO)
namespace GlobalNamespace {
class SimpleColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MultipliedAndAddedColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultipliedAndAddedColorSO);
// Dependencies ColorSO, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultipliedAndAddedColorSO
class CORDL_TYPE MultipliedAndAddedColorSO : public ::GlobalNamespace::ColorSO {
public:
  // Declarations
  /// @brief Field _addColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__addColor, put = __cordl_internal_set__addColor)) ::UnityEngine::Color _addColor;

  /// @brief Field _baseColor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseColor, put = __cordl_internal_set__baseColor)) ::UnityW<::GlobalNamespace::SimpleColorSO> _baseColor;

  /// @brief Field _multiplierColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__multiplierColor, put = __cordl_internal_set__multiplierColor)) ::UnityEngine::Color _multiplierColor;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::MultipliedAndAddedColorSO* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__addColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__addColor();

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& __cordl_internal_get__baseColor() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& __cordl_internal_get__baseColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__multiplierColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__multiplierColor();

  constexpr void __cordl_internal_set__addColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::SimpleColorSO> value);

  constexpr void __cordl_internal_set__multiplierColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x35d1fc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x35d1f60, size 0x60, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipliedAndAddedColorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipliedAndAddedColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipliedAndAddedColorSO(MultipliedAndAddedColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipliedAndAddedColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipliedAndAddedColorSO(MultipliedAndAddedColorSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22748 };

  /// @brief Field _baseColor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleColorSO> ____baseColor;

  /// @brief Field _multiplierColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____multiplierColor;

  /// @brief Field _addColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____addColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultipliedAndAddedColorSO, ____baseColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipliedAndAddedColorSO, ____multiplierColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipliedAndAddedColorSO, ____addColor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultipliedAndAddedColorSO, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultipliedAndAddedColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultipliedAndAddedColorSO*, "", "MultipliedAndAddedColorSO");
