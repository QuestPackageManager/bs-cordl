#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLightTypeSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassLightTypeSO)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLightTypeSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassLightTypeSO
class CORDL_TYPE BloomPrePassLightTypeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _renderingPriority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__renderingPriority, put = __cordl_internal_set__renderingPriority)) int32_t _renderingPriority;

  __declspec(property(get = get_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_renderingPriority)) int32_t renderingPriority;

  static inline ::GlobalNamespace::BloomPrePassLightTypeSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr int32_t const& __cordl_internal_get__renderingPriority() const;

  constexpr int32_t& __cordl_internal_get__renderingPriority();

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__renderingPriority(int32_t value);

  /// @brief Method .ctor, addr 0x39d4220, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_material, addr 0x39d4218, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_renderingPriority, addr 0x39d4210, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderingPriority();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLightTypeSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassLightTypeSO(BloomPrePassLightTypeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassLightTypeSO(BloomPrePassLightTypeSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16261 };

  /// @brief Field _renderingPriority, offset: 0x18, size: 0x4, def value: None
  int32_t ____renderingPriority;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassLightTypeSO, ____renderingPriority) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLightTypeSO, ____material) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLightTypeSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightTypeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
