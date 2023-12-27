#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(SimpleColorSO)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleColorSO);
// Type: ::SimpleColorSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16207)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16210))
// CS Name: ::SimpleColorSO*
class CORDL_TYPE SimpleColorSO : public ::GlobalNamespace::ColorSO {
public:
  // Declarations
  /// @brief Field _color, offset 0x18, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  /// @brief Method get_color addr 0x122d9a0 size 0xc virtual true final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method SetColor addr 0x122d9ac size 0xc virtual false final false
  inline void SetColor(::UnityEngine::Color c);

  static inline ::GlobalNamespace::SimpleColorSO* New_ctor();

  /// @brief Method .ctor addr 0x122d9b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleColorSO(SimpleColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleColorSO(SimpleColorSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleColorSO();

public:
  /// @brief Field _color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleColorSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleColorSO*, "", "SimpleColorSO");
