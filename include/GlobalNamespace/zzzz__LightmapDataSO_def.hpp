#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmapDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LightmapDataSO)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapDataSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapDataSO
class CORDL_TYPE LightmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _lightmap1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmap1, put = __cordl_internal_set__lightmap1)) ::UnityW<::UnityEngine::Texture2D> _lightmap1;

  /// @brief Field _lightmap2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmap2, put = __cordl_internal_set__lightmap2)) ::UnityW<::UnityEngine::Texture2D> _lightmap2;

  __declspec(property(get = get_lightmap1, put = set_lightmap1)) ::UnityW<::UnityEngine::Texture2D> lightmap1;

  __declspec(property(get = get_lightmap2, put = set_lightmap2)) ::UnityW<::UnityEngine::Texture2D> lightmap2;

  static inline ::GlobalNamespace::LightmapDataSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__lightmap1() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__lightmap1();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__lightmap2() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__lightmap2();

  constexpr void __cordl_internal_set__lightmap1(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__lightmap2(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x3b1b7bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightmap1, addr 0x3b1b79c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_lightmap1();

  /// @brief Method get_lightmap2, addr 0x3b1b7ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_lightmap2();

  /// @brief Method set_lightmap1, addr 0x3b1b7a4, size 0x8, virtual false, abstract: false, final false
  inline void set_lightmap1(::UnityEngine::Texture2D* value);

  /// @brief Method set_lightmap2, addr 0x3b1b7b4, size 0x8, virtual false, abstract: false, final false
  inline void set_lightmap2(::UnityEngine::Texture2D* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapDataSO(LightmapDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapDataSO(LightmapDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5061 };

  /// @brief Field _lightmap1, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____lightmap1;

  /// @brief Field _lightmap2, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____lightmap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapDataSO, ____lightmap1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapDataSO, ____lightmap2) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapDataSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapDataSO*, "", "LightmapDataSO");
