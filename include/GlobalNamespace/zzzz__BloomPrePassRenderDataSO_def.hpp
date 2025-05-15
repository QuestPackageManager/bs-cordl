#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
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
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRenderDataSO);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRenderDataSO_Data);
// Dependencies System.Object, ToneMapping, UnityEngine.Matrix4x4, UnityEngine.Vector2
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

  /// @brief Field stereoCameraEyeOffset, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_stereoCameraEyeOffset, put = __cordl_internal_set_stereoCameraEyeOffset)) float_t stereoCameraEyeOffset;

  /// @brief Field textureToScreenRatio, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textureToScreenRatio, put = __cordl_internal_set_textureToScreenRatio)) ::UnityEngine::Vector2 textureToScreenRatio;

  /// @brief Field toneMapping, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_toneMapping, put = __cordl_internal_set_toneMapping)) ::GlobalNamespace::ToneMapping toneMapping;

  /// @brief Field viewMatrix, offset 0x20, size 0x40
  __declspec(property(get = __cordl_internal_get_viewMatrix, put = __cordl_internal_set_viewMatrix)) ::UnityEngine::Matrix4x4 viewMatrix;

  static inline ::GlobalNamespace::BloomPrePassRenderDataSO_Data* New_ctor();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_bloomPrePassRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_bloomPrePassRenderTexture();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_projectionMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_projectionMatrix();

  constexpr float_t const& __cordl_internal_get_stereoCameraEyeOffset() const;

  constexpr float_t& __cordl_internal_get_stereoCameraEyeOffset();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_textureToScreenRatio() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_textureToScreenRatio();

  constexpr ::GlobalNamespace::ToneMapping const& __cordl_internal_get_toneMapping() const;

  constexpr ::GlobalNamespace::ToneMapping& __cordl_internal_get_toneMapping();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_viewMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_viewMatrix();

  constexpr void __cordl_internal_set_bloomPrePassRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_stereoCameraEyeOffset(float_t value);

  constexpr void __cordl_internal_set_textureToScreenRatio(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_toneMapping(::GlobalNamespace::ToneMapping value);

  constexpr void __cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method .ctor, addr 0x39d4e40, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16266 };

  /// @brief Field bloomPrePassRenderTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___bloomPrePassRenderTexture;

  /// @brief Field textureToScreenRatio, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___textureToScreenRatio;

  /// @brief Field viewMatrix, offset: 0x20, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___viewMatrix;

  /// @brief Field projectionMatrix, offset: 0x60, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___projectionMatrix;

  /// @brief Field stereoCameraEyeOffset, offset: 0xa0, size: 0x4, def value: None
  float_t ___stereoCameraEyeOffset;

  /// @brief Field toneMapping, offset: 0xa4, size: 0x4, def value: None
  ::GlobalNamespace::ToneMapping ___toneMapping;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___bloomPrePassRenderTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___textureToScreenRatio) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___viewMatrix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___projectionMatrix) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___stereoCameraEyeOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO_Data, ___toneMapping) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRenderDataSO_Data, 0xa8>, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x39d9304, size 0x60, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16267 };

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRenderDataSO_Data* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRenderDataSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRenderDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRenderDataSO*, "", "BloomPrePassRenderDataSO");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRenderDataSO_Data);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRenderDataSO_Data*, "", "BloomPrePassRenderDataSO/Data");
