#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MainEffectSO)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectSO
class CORDL_TYPE MainEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  static inline ::GlobalNamespace::MainEffectSO* New_ctor();

  /// @brief Method PostRender, addr 0x4084d48, size 0x4, virtual true, abstract: false, final false
  inline void PostRender(float_t fade);

  /// @brief Method PreRender, addr 0x4084d40, size 0x4, virtual true, abstract: false, final false
  inline void PreRender();

  /// @brief Method Render, addr 0x4084d44, size 0x4, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade);

  /// @brief Method .ctor, addr 0x4084578, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasPostProcessEffect, addr 0x4084d4c, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasPostProcessEffect();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectSO(MainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectSO(MainEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17903 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
