#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoPostProcessMainEffectSO)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPostProcessMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoPostProcessMainEffectSO);
// Type: ::NoPostProcessMainEffectSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15294))
// CS Name: ::NoPostProcessMainEffectSO*
class CORDL_TYPE NoPostProcessMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _fadeShader, offset 0x18, size 0x8
  __declspec(property(get = __get__fadeShader, put = __set__fadeShader))::UnityEngine::Shader* _fadeShader;

  /// @brief Field _baseColorBoost, offset 0x20, size 0x4
  __declspec(property(get = __get__baseColorBoost, put = __set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x24, size 0x4
  __declspec(property(get = __get__baseColorBoostThreshold, put = __set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset 0x28, size 0x8
  __declspec(property(get = __get__fadeMaterial, put = __set__fadeMaterial))::UnityEngine::Material* _fadeMaterial;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  constexpr ::UnityEngine::Shader*& __get__fadeShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__fadeShader() const;

  constexpr void __set__fadeShader(::UnityEngine::Shader* value);

  constexpr float_t& __get__baseColorBoost();

  constexpr float_t const& __get__baseColorBoost() const;

  constexpr void __set__baseColorBoost(float_t value);

  constexpr float_t& __get__baseColorBoostThreshold();

  constexpr float_t const& __get__baseColorBoostThreshold() const;

  constexpr void __set__baseColorBoostThreshold(float_t value);

  constexpr ::UnityEngine::Material*& __get__fadeMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__fadeMaterial() const;

  constexpr void __set__fadeMaterial(::UnityEngine::Material* value);

  /// @brief Method get_hasPostProcessEffect addr 0x28089e4 size 0x8 virtual true final false
  inline bool get_hasPostProcessEffect();

  /// @brief Method OnEnable addr 0x28089ec size 0x80 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2808a6c size 0xc virtual false final false
  inline void OnDisable();

  /// @brief Method PreRender addr 0x2808a78 size 0x64 virtual true final false
  inline void PreRender();

  /// @brief Method PostRender addr 0x2808adc size 0xc virtual true final false
  inline void PostRender(float_t fade);

  /// @brief Method DrawFadeQuad addr 0x2808ae8 size 0xec virtual false final false
  inline void DrawFadeQuad(float_t alpha);

  static inline ::GlobalNamespace::NoPostProcessMainEffectSO* New_ctor();

  /// @brief Method .ctor addr 0x2808bd4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoPostProcessMainEffectSO(NoPostProcessMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoPostProcessMainEffectSO(NoPostProcessMainEffectSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoPostProcessMainEffectSO();

public:
  /// @brief Field _fadeShader, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Shader* ____fadeShader;

  /// @brief Field _baseColorBoost, offset: 0x20, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x24, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ____fadeMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoPostProcessMainEffectSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoPostProcessMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPostProcessMainEffectSO*, "", "NoPostProcessMainEffectSO");
