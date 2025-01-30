#pragma once
// IWYU pragma private; include "GlobalNamespace/DirectionalLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalLight)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLight);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DirectionalLight
class CORDL_TYPE DirectionalLight : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lights, put = setStaticF__lights)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DirectionalLight>>* _lights;

  /// @brief Field _mainLight, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__mainLight, put = setStaticF__mainLight)) ::UnityW<::GlobalNamespace::DirectionalLight> _mainLight;

  /// @brief Field color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  /// @brief Field radius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  static inline ::GlobalNamespace::DirectionalLight* New_ctor();

  /// @brief Method OnDisable, addr 0x39e050c, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39e0440, size 0xcc, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_radius(float_t value);

  /// @brief Method .ctor, addr 0x39e058c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DirectionalLight>>* getStaticF__lights();

  static inline ::UnityW<::GlobalNamespace::DirectionalLight> getStaticF__mainLight();

  /// @brief Method get_lights, addr 0x39e03e8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DirectionalLight>>* get_lights();

  static inline void setStaticF__lights(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DirectionalLight>>* value);

  static inline void setStaticF__mainLight(::UnityW<::GlobalNamespace::DirectionalLight> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLight();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLight(DirectionalLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLight(DirectionalLight const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16278 };

  /// @brief Field kMaxLights offset 0xffffffff size 0x4
  static constexpr int32_t kMaxLights{ static_cast<int32_t>(0x5) };

  /// @brief Field color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field intensity, offset: 0x30, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field radius, offset: 0x34, size: 0x4, def value: None
  float_t ___radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DirectionalLight, ___color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLight, ___intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLight, ___radius) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLight, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLight*, "", "DirectionalLight");
