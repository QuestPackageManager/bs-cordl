#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OneTimeLightColorEffect)
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class ColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class OneTimeLightColorEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OneTimeLightColorEffect);
// Type: ::OneTimeLightColorEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4873))
// CS Name: ::OneTimeLightColorEffect*
class CORDL_TYPE OneTimeLightColorEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x18, size 0x8
  __declspec(property(get = __get__color, put = __set__color))::GlobalNamespace::ColorSO* _color;

  /// @brief Field _alpha, offset 0x20, size 0x4
  __declspec(property(get = __get__alpha, put = __set__alpha)) float_t _alpha;

  /// @brief Field _lightsId, offset 0x24, size 0x4
  __declspec(property(get = __get__lightsId, put = __set__lightsId)) int32_t _lightsId;

  /// @brief Field _lightWithIdManager, offset 0x28, size 0x8
  __declspec(property(get = __get__lightWithIdManager, put = __set__lightWithIdManager))::GlobalNamespace::LightWithIdManager* _lightWithIdManager;

  constexpr ::GlobalNamespace::ColorSO*& __get__color();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__color() const;

  constexpr void __set__color(::GlobalNamespace::ColorSO* value);

  constexpr float_t& __get__alpha();

  constexpr float_t const& __get__alpha() const;

  constexpr void __set__alpha(float_t value);

  constexpr int32_t& __get__lightsId();

  constexpr int32_t const& __get__lightsId() const;

  constexpr void __set__lightsId(int32_t value);

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightWithIdManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightWithIdManager() const;

  constexpr void __set__lightWithIdManager(::GlobalNamespace::LightWithIdManager* value);

  /// @brief Method Update addr 0x239b084 size 0x5c virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OneTimeLightColorEffect* New_ctor();

  /// @brief Method .ctor addr 0x239b0e0 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OneTimeLightColorEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OneTimeLightColorEffect(OneTimeLightColorEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OneTimeLightColorEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OneTimeLightColorEffect(OneTimeLightColorEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OneTimeLightColorEffect();

public:
  /// @brief Field _color, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____color;

  /// @brief Field _alpha, offset: 0x20, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _lightsId, offset: 0x24, size: 0x4, def value: None
  int32_t ____lightsId;

  /// @brief Field _lightWithIdManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightWithIdManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OneTimeLightColorEffect, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OneTimeLightColorEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OneTimeLightColorEffect*, "", "OneTimeLightColorEffect");
