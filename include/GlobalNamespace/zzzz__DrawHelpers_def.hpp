#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DrawHelpers)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class DrawHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DrawHelpers);
// Type: ::DrawHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13822))
// CS Name: ::DrawHelpers*
class CORDL_TYPE DrawHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method DrawTexture addr 0x1f92c88 size 0x1a8 virtual false final false
  static inline void DrawTexture(::UnityEngine::Texture* texture, float_t x, float_t y, float_t w, float_t h, ::UnityEngine::Material* mat, float_t sx, float_t sy, float_t sw, float_t sh);

  static inline ::GlobalNamespace::DrawHelpers* New_ctor();

  /// @brief Method .ctor addr 0x1f92e30 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DrawHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawHelpers(DrawHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawHelpers(DrawHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DrawHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DrawHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DrawHelpers*, "", "DrawHelpers");
