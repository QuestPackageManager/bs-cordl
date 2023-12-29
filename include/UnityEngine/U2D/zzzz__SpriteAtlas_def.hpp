#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpriteAtlas)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteAtlas);
// Type: UnityEngine.U2D::SpriteAtlas
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10218))
// CS Name: ::UnityEngine.U2D::SpriteAtlas*
class CORDL_TYPE SpriteAtlas : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method CanBindTo addr 0x2b7f79c size 0x44 virtual false final false
  inline bool CanBindTo(::UnityEngine::Sprite* sprite);

  /// @brief Method GetSprite addr 0x2b7f7e0 size 0x44 virtual false final false
  inline ::UnityEngine::Sprite* GetSprite(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAtlas(SpriteAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAtlas(SpriteAtlas const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAtlas();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteAtlas, 0x18>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
