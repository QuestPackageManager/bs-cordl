#pragma once
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
// Type: ::SortingLayer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SortingLayer*
class CORDL_TYPE SortingLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::Renderer> _renderer;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  static inline ::GlobalNamespace::SortingLayer* New_ctor();

  /// @brief Method Reset, addr 0x24d7bb8, size 0x50, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x24d7c08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_renderer, addr 0x24d7bb0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _renderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SortingLayer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SortingLayer, ____renderer) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SortingLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortingLayer*, "", "SortingLayer");
