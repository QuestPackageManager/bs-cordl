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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14402))
// CS Name: ::SortingLayer*
class CORDL_TYPE SortingLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x18, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  /// @brief Method get_renderer addr 0x20f5b40 size 0x8 virtual false final false
  inline ::UnityEngine::Renderer* get_renderer();

  /// @brief Method Reset addr 0x20f5b48 size 0x50 virtual false final false
  inline void Reset();

  static inline ::GlobalNamespace::SortingLayer* New_ctor();

  /// @brief Method .ctor addr 0x20f5b98 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SortingLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortingLayer(SortingLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortingLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortingLayer(SortingLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingLayer();

public:
  /// @brief Field _renderer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SortingLayer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SortingLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortingLayer*, "", "SortingLayer");
