#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BloomPrePassRenderDataSO)
namespace GlobalNamespace {
class BloomPrePassRenderDataSO_Data;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRenderDataSO;
}
namespace GlobalNamespace {
class BloomPrePassRenderDataSO_Data;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BloomPrePassRenderDataSO*);
MARK_REF_T(::GlobalNamespace::BloomPrePassRenderDataSO_Data*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRenderDataSO*, "", "BloomPrePassRenderDataSO");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRenderDataSO_Data*, "", "BloomPrePassRenderDataSO/Data");
// Dependencies System.Object, ToneMapping, UnityEngine.Matrix4x4, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRenderDataSO/Data
class CORDL_TYPE BloomPrePassRenderDataSO_Data : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomPrePassRenderTexture, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomPrePassRenderTexture, put = __cordl_internal_set_bloomPrePassRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> bloomPrePassRenderTexture;

  /// @brief Field projectionMatrix, offset 0x60, size 0x40
  __declspec(property(get = __cordl_internal_get_projectionMatrix, put = __cordl_internal_set_projectionMatrix)) ::UnityEngine::Matrix4x4 projectionMatrix;

  /// @brief Field stereoCameraEyeOffsets, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_stereoCameraEyeOffsets, put = __cordl_internal_set_stereoCameraEyeOffsets)) ::UnityEngine::Vector2 stereoCameraEyeOffsets;

  /// @brief Field tempTextureHandles, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_tempTextureHandles, put = __cordl_internal_set_tempTextureHandles)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>
      tempTextureHandles;

  /// @brief Field textureToScreenRatio, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textureToScreenRatio, put = __cordl_internal_set_textureToScreenRatio)) ::UnityEngine::Vector2 textureToScreenRatio;

  /// @brief Field toneMapping, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_toneMapping, put = __cordl_internal_set_toneMapping)) ::GlobalNamespace::ToneMapping toneMapping;

  /// @brief Field viewMatrix, offset 0x20, size 0x40
  __declspec(property(get = __cordl_internal_get_viewMatrix, put = __cordl_internal_set_viewMatrix)) ::UnityEngine::Matrix4x4 viewMatrix;

  static inline ::GlobalNamespace::BloomPrePassRenderDataSO_Data* New_ctor();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_bloomPrePassRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_bloomPrePassRenderTexture();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_projectionMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_projectionMatrix();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_stereoCameraEyeOffsets() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_stereoCameraEyeOffsets();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_tempTextureHandles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_tempTextureHandles();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_textureToScreenRatio() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_textureToScreenRatio();

  constexpr ::GlobalNamespace::ToneMapping const& __cordl_internal_get_toneMapping() const;

  constexpr ::GlobalNamespace::ToneMapping& __cordl_internal_get_toneMapping();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_viewMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_viewMatrix();

  constexpr void __cordl_internal_set_bloomPrePassRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_stereoCameraEyeOffsets(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_tempTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  constexpr void __cordl_internal_set_textureToScreenRatio(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_toneMapping(::GlobalNamespace::ToneMapping value);

  constexpr void __cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method .ctor, addr 0x5861f94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRenderDataSO_Data();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO_Data", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRenderDataSO_Data(BloomPrePassRenderDataSO_Data&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO_Data", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRenderDataSO_Data(BloomPrePassRenderDataSO_Data const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19436 };

  /// @brief Field bloomPrePassRenderTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___bloomPrePassRenderTexture;

  /// @brief Field textureToScreenRatio, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___textureToScreenRatio;

  /// @brief Field viewMatrix, offset: 0x20, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___viewMatrix;

  /// @brief Field projectionMatrix, offset: 0x60, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___projectionMatrix;

  /// @brief Field stereoCameraEyeOffsets, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___stereoCameraEyeOffsets;

  /// @brief Field toneMapping, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::ToneMapping ___toneMapping;

  /// @brief Field tempTextureHandles, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___tempTextureHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___bloomPrePassRenderTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___textureToScreenRatio) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___viewMatrix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___projectionMatrix) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___stereoCameraEyeOffsets) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___toneMapping) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___tempTextureHandles) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderDataSO_Data) == 0xb8, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRenderDataSO
class CORDL_TYPE BloomPrePassRenderDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Data = ::GlobalNamespace::BloomPrePassRenderDataSO_Data;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::GlobalNamespace::BloomPrePassRenderDataSO_Data* data;

  static inline ::GlobalNamespace::BloomPrePassRenderDataSO* New_ctor();

  constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data* const& __cordl_internal_get_data() const;

  constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::GlobalNamespace::BloomPrePassRenderDataSO_Data* value);

  /// @brief Method .ctor, addr 0x58653e8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRenderDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRenderDataSO(BloomPrePassRenderDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRenderDataSO(BloomPrePassRenderDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19437 };

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRenderDataSO_Data* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderDataSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
