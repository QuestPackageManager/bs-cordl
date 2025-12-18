#pragma once
// IWYU pragma private; include "GlobalNamespace/SortingLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SortingLayer)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SortingLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SortingLayer);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SortingLayer
class CORDL_TYPE SortingLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer> _renderer;

  __declspec(property(get = get_renderer)) ::UnityW<::UnityEngine::Renderer> renderer;

  static inline ::GlobalNamespace::SortingLayer* New_ctor();

  /// @brief Method Reset, addr 0x56a4770, size 0x54, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x56a47c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_renderer, addr 0x56a4768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortingLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortingLayer(SortingLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortingLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortingLayer(SortingLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20292 };

  /// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SortingLayer, ____renderer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SortingLayer, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SortingLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortingLayer*, "", "SortingLayer");
