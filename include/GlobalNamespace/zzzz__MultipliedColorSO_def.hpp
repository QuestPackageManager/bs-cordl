#pragma once
// IWYU pragma private; include "GlobalNamespace/MultipliedColorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(MultipliedColorSO)
namespace GlobalNamespace {
class SimpleColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MultipliedColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultipliedColorSO);
// Dependencies ColorSO, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultipliedColorSO
class CORDL_TYPE MultipliedColorSO : public ::GlobalNamespace::ColorSO {
public:
  // Declarations
  /// @brief Field _baseColor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseColor, put = __cordl_internal_set__baseColor)) ::UnityW<::GlobalNamespace::SimpleColorSO> _baseColor;

  /// @brief Field _multiplierColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__multiplierColor, put = __cordl_internal_set__multiplierColor)) ::UnityEngine::Color _multiplierColor;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::MultipliedColorSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& __cordl_internal_get__baseColor() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& __cordl_internal_get__baseColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__multiplierColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__multiplierColor();

  constexpr void __cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::SimpleColorSO> value);

  constexpr void __cordl_internal_set__multiplierColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x26a25c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x26a2570, size 0x50, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipliedColorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipliedColorSO(MultipliedColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipliedColorSO(MultipliedColorSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18863 };

  /// @brief Field _baseColor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleColorSO> ____baseColor;

  /// @brief Field _multiplierColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____multiplierColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultipliedColorSO, ____baseColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipliedColorSO, ____multiplierColor) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultipliedColorSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultipliedColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultipliedColorSO*, "", "MultipliedColorSO");
