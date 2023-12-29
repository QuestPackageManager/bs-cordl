#pragma once
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
// Type: ::MultipliedColorSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16046)), TypeDefinitionIndex(TypeDefinitionIndex(10178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16048))
// CS Name: ::MultipliedColorSO*
class CORDL_TYPE MultipliedColorSO : public ::GlobalNamespace::ColorSO {
public:
  // Declarations
  /// @brief Field _baseColor, offset 0x18, size 0x8
  __declspec(property(get = __get__baseColor, put = __set__baseColor))::GlobalNamespace::SimpleColorSO* _baseColor;

  /// @brief Field _multiplierColor, offset 0x20, size 0x10
  __declspec(property(get = __get__multiplierColor, put = __set__multiplierColor))::UnityEngine::Color _multiplierColor;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::SimpleColorSO*& __get__baseColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> const& __get__baseColor() const;

  constexpr void __set__baseColor(::GlobalNamespace::SimpleColorSO* value);

  constexpr ::UnityEngine::Color& __get__multiplierColor();

  constexpr ::UnityEngine::Color const& __get__multiplierColor() const;

  constexpr void __set__multiplierColor(::UnityEngine::Color value);

  /// @brief Method get_color addr 0x11bd61c size 0x50 virtual true final false
  inline ::UnityEngine::Color get_color();

  static inline ::GlobalNamespace::MultipliedColorSO* New_ctor();

  /// @brief Method .ctor addr 0x11bd66c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipliedColorSO(MultipliedColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipliedColorSO(MultipliedColorSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipliedColorSO();

public:
  /// @brief Field _baseColor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SimpleColorSO* ____baseColor;

  /// @brief Field _multiplierColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____multiplierColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultipliedColorSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipliedColorSO, ____baseColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipliedColorSO, ____multiplierColor) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultipliedColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultipliedColorSO*, "", "MultipliedColorSO");
