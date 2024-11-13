#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleTemporalFiltering.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTemporalFiltering)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTemporalFiltering;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTemporalFiltering);
// Type: ::SimpleTemporalFiltering
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleTemporalFiltering*
class CORDL_TYPE SimpleTemporalFiltering : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bufferTexID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bufferTexID, put = __cordl_internal_set__bufferTexID)) int32_t _bufferTexID;

  /// @brief Field _prevTemporalFilteringTextureIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__prevTemporalFilteringTextureIdx, put = __cordl_internal_set__prevTemporalFilteringTextureIdx)) int32_t _prevTemporalFilteringTextureIdx;

  /// @brief Field _temporalFilteringMaterial, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__temporalFilteringMaterial, put = __cordl_internal_set__temporalFilteringMaterial)) ::UnityW<::UnityEngine::Material> _temporalFilteringMaterial;

  /// @brief Field _temporalFilteringTextures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__temporalFilteringTextures,
                      put = __cordl_internal_set__temporalFilteringTextures)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>
      _temporalFilteringTextures;

  /// @brief Method CreateRenderTexturesIfNeeded, addr 0x4023da8, size 0x28c, virtual false, abstract: false, final false
  inline void CreateRenderTexturesIfNeeded(int32_t width, int32_t height);

  /// @brief Method FilterTexture, addr 0x4023c28, size 0x180, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> FilterTexture(::UnityEngine::RenderTexture* src);

  static inline ::GlobalNamespace::SimpleTemporalFiltering* New_ctor();

  constexpr int32_t const& __cordl_internal_get__bufferTexID() const;

  constexpr int32_t& __cordl_internal_get__bufferTexID();

  constexpr int32_t const& __cordl_internal_get__prevTemporalFilteringTextureIdx() const;

  constexpr int32_t& __cordl_internal_get__prevTemporalFilteringTextureIdx();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__temporalFilteringMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__temporalFilteringMaterial();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get__temporalFilteringTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get__temporalFilteringTextures();

  constexpr void __cordl_internal_set__bufferTexID(int32_t value);

  constexpr void __cordl_internal_set__prevTemporalFilteringTextureIdx(int32_t value);

  constexpr void __cordl_internal_set__temporalFilteringMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__temporalFilteringTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value);

  /// @brief Method .ctor, addr 0x4023b64, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTemporalFiltering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleTemporalFiltering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTemporalFiltering(SimpleTemporalFiltering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTemporalFiltering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTemporalFiltering(SimpleTemporalFiltering const&) = delete;

  /// @brief Field _temporalFilteringTextures, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> ____temporalFilteringTextures;

  /// @brief Field _prevTemporalFilteringTextureIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ____prevTemporalFilteringTextureIdx;

  /// @brief Field _temporalFilteringMaterial, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____temporalFilteringMaterial;

  /// @brief Field _bufferTexID, offset: 0x28, size: 0x4, def value: None
  int32_t ____bufferTexID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17835 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTemporalFiltering, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTemporalFiltering, ____temporalFilteringTextures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTemporalFiltering, ____prevTemporalFilteringTextureIdx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTemporalFiltering, ____temporalFilteringMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTemporalFiltering, ____bufferTexID) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTemporalFiltering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTemporalFiltering*, "", "SimpleTemporalFiltering");
