#pragma once
// IWYU pragma private; include "GlobalNamespace/PointLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointLight)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PointLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PointLight);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PointLight
class CORDL_TYPE PointLight : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lights, put = setStaticF__lights)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* _lights;

  /// @brief Field color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  static inline ::GlobalNamespace::PointLight* New_ctor();

  /// @brief Method OnDisable, addr 0x56b60cc, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x56b5ff8, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  /// @brief Method .ctor, addr 0x56b6154, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* getStaticF__lights();

  /// @brief Method get_lights, addr 0x56b5f9c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* get_lights();

  static inline void setStaticF__lights(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointLight();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointLight(PointLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointLight(PointLight const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19686 };

  /// @brief Field kMaxLights offset 0xffffffff size 0x4
  static constexpr int32_t kMaxLights{ static_cast<int32_t>(0x1) };

  /// @brief Field color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field intensity, offset: 0x30, size: 0x4, def value: None
  float_t ___intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointLight, ___color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointLight, ___intensity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PointLight, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PointLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PointLight*, "", "PointLight");
