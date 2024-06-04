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
// Type: ::MainEffectSO
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainEffectSO*
class CORDL_TYPE MainEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  static inline ::GlobalNamespace::MainEffectSO* New_ctor();

  /// @brief Method PostRender, addr 0x2bf63b4, size 0x4, virtual true, abstract: false, final false
  inline void PostRender(float_t fade);

  /// @brief Method PreRender, addr 0x2bf63ac, size 0x4, virtual true, abstract: false, final false
  inline void PreRender();

  /// @brief Method Render, addr 0x2bf63b0, size 0x4, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade);

  /// @brief Method .ctor, addr 0x2bf5bb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasPostProcessEffect, addr 0x2bf63b8, size 0x8, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
