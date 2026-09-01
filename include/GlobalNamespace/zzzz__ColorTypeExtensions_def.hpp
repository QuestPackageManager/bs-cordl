#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ColorTypeExtensions)
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTypeExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorTypeExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorTypeExtensions*, "", "ColorTypeExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorTypeExtensions
class CORDL_TYPE ColorTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDefaultColorLabel, addr 0x325c71c, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultColorLabel(::GlobalNamespace::ColorType colorType);

  /// @brief Method Opposite, addr 0x325c7c0, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorType Opposite(::GlobalNamespace::ColorType colorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTypeExtensions(ColorTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTypeExtensions(ColorTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21264 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColorTypeExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
