#pragma once
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
class __BloomPrePassRenderDataSO__Data;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRenderDataSO;
}
namespace GlobalNamespace {
class __BloomPrePassRenderDataSO__Data;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRenderDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassRenderDataSO__Data);
// Type: ::Data
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10245)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10243)),
// TypeDefinitionIndex(TypeDefinitionIndex(14490))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14479)) CS Name: ::BloomPrePassRenderDataSO::Data*
class CORDL_TYPE __BloomPrePassRenderDataSO__Data : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomPrePassRenderTexture, offset 0x10, size 0x8
  __declspec(property(get = __get_bloomPrePassRenderTexture, put = __set_bloomPrePassRenderTexture))::UnityEngine::RenderTexture* bloomPrePassRenderTexture;

  /// @brief Field textureToScreenRatio, offset 0x18, size 0x8
  __declspec(property(get = __get_textureToScreenRatio, put = __set_textureToScreenRatio))::UnityEngine::Vector2 textureToScreenRatio;

  /// @brief Field viewMatrix, offset 0x20, size 0x40
  __declspec(property(get = __get_viewMatrix, put = __set_viewMatrix))::UnityEngine::Matrix4x4 viewMatrix;

  /// @brief Field projectionMatrix, offset 0x60, size 0x40
  __declspec(property(get = __get_projectionMatrix, put = __set_projectionMatrix))::UnityEngine::Matrix4x4 projectionMatrix;

  /// @brief Field stereoCameraEyeOffset, offset 0xa0, size 0x4
  __declspec(property(get = __get_stereoCameraEyeOffset, put = __set_stereoCameraEyeOffset)) float_t stereoCameraEyeOffset;

  /// @brief Field toneMapping, offset 0xa4, size 0x4
  __declspec(property(get = __get_toneMapping, put = __set_toneMapping))::GlobalNamespace::ToneMapping toneMapping;

  constexpr ::UnityEngine::RenderTexture*& __get_bloomPrePassRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get_bloomPrePassRenderTexture() const;

  constexpr void __set_bloomPrePassRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::Vector2& __get_textureToScreenRatio();

  constexpr ::UnityEngine::Vector2 const& __get_textureToScreenRatio() const;

  constexpr void __set_textureToScreenRatio(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Matrix4x4& __get_viewMatrix();

  constexpr ::UnityEngine::Matrix4x4 const& __get_viewMatrix() const;

  constexpr void __set_viewMatrix(::UnityEngine::Matrix4x4 value);

  constexpr ::UnityEngine::Matrix4x4& __get_projectionMatrix();

  constexpr ::UnityEngine::Matrix4x4 const& __get_projectionMatrix() const;

  constexpr void __set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  constexpr float_t& __get_stereoCameraEyeOffset();

  constexpr float_t const& __get_stereoCameraEyeOffset() const;

  constexpr void __set_stereoCameraEyeOffset(float_t value);

  constexpr ::GlobalNamespace::ToneMapping& __get_toneMapping();

  constexpr ::GlobalNamespace::ToneMapping const& __get_toneMapping() const;

  constexpr void __set_toneMapping(::GlobalNamespace::ToneMapping value);

  static inline ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* New_ctor();

  /// @brief Method .ctor, addr 0x210290c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassRenderDataSO__Data", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassRenderDataSO__Data(__BloomPrePassRenderDataSO__Data&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassRenderDataSO__Data", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassRenderDataSO__Data(__BloomPrePassRenderDataSO__Data const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassRenderDataSO__Data();

public:
  /// @brief Field bloomPrePassRenderTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ___bloomPrePassRenderTexture;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassRenderDataSO__Data, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRenderDataSO__Data, ___bloomPrePassRenderTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRenderDataSO__Data, ___textureToScreenRatio) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRenderDataSO__Data, ___viewMatrix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRenderDataSO__Data, ___projectionMatrix) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRenderDataSO__Data, ___stereoCameraEyeOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRenderDataSO__Data, ___toneMapping) == 0xa4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassRenderDataSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14480))
// CS Name: ::BloomPrePassRenderDataSO*
class CORDL_TYPE BloomPrePassRenderDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Data = ::GlobalNamespace::__BloomPrePassRenderDataSO__Data;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::GlobalNamespace::__BloomPrePassRenderDataSO__Data* data;

  constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*> const& __get_data() const;

  constexpr void __set_data(::GlobalNamespace::__BloomPrePassRenderDataSO__Data* value);

  static inline ::GlobalNamespace::BloomPrePassRenderDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x21072fc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRenderDataSO(BloomPrePassRenderDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRenderDataSO(BloomPrePassRenderDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRenderDataSO();

public:
  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRenderDataSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderDataSO, ___data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRenderDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRenderDataSO*, "", "BloomPrePassRenderDataSO");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassRenderDataSO__Data);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, "", "BloomPrePassRenderDataSO/Data");
