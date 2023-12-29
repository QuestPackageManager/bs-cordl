#pragma once
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
// Type: ::BloomPrePassLightTypeSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14694))
// CS Name: ::BloomPrePassLightTypeSO*
class CORDL_TYPE BloomPrePassLightTypeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _renderingPriority, offset 0x18, size 0x4
  __declspec(property(get = __get__renderingPriority, put = __set__renderingPriority)) int32_t _renderingPriority;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  __declspec(property(get = get_renderingPriority)) int32_t renderingPriority;

  __declspec(property(get = get_material))::UnityEngine::Material* material;

  constexpr int32_t& __get__renderingPriority();

  constexpr int32_t const& __get__renderingPriority() const;

  constexpr void __set__renderingPriority(int32_t value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  /// @brief Method get_renderingPriority addr 0x1fb1d94 size 0x8 virtual false final false
  inline int32_t get_renderingPriority();

  /// @brief Method get_material addr 0x1fb1d9c size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_material();

  static inline ::GlobalNamespace::BloomPrePassLightTypeSO* New_ctor();

  /// @brief Method .ctor addr 0x1fb1da4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassLightTypeSO(BloomPrePassLightTypeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassLightTypeSO(BloomPrePassLightTypeSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLightTypeSO();

public:
  /// @brief Field _renderingPriority, offset: 0x18, size: 0x4, def value: None
  int32_t ____renderingPriority;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLightTypeSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLightTypeSO, ____renderingPriority) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLightTypeSO, ____material) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightTypeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
