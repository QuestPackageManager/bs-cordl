#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureEffectSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TextureEffectSO)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextureEffectSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureEffectSO
class CORDL_TYPE TextureEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  static inline ::GlobalNamespace::TextureEffectSO* New_ctor();

  /// @brief Method Render, addr 0x39e6fe8, size 0x68, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method .ctor, addr 0x39e7050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureEffectSO(TextureEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureEffectSO(TextureEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureEffectSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureEffectSO*, "", "TextureEffectSO");
