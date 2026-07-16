#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectRenderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MainEffectRenderData)
// Forward declare root types
namespace GlobalNamespace {
class MainEffectRenderData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectRenderData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectRenderData*, "", "MainEffectRenderData");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectRenderData
class CORDL_TYPE MainEffectRenderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field tempTextureHandles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tempTextureHandles, put = __cordl_internal_set_tempTextureHandles)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>
      tempTextureHandles;

  static inline ::GlobalNamespace::MainEffectRenderData* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_tempTextureHandles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_tempTextureHandles();

  constexpr void __cordl_internal_set_tempTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  /// @brief Method .ctor, addr 0x5f41168, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectRenderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRenderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectRenderData(MainEffectRenderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRenderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectRenderData(MainEffectRenderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20885 };

  /// @brief Field tempTextureHandles, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___tempTextureHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectRenderData, ___tempTextureHandles) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectRenderData) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
