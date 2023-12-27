#pragma once
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
// Type: ::DirectionalLight
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14496))
// CS Name: ::DirectionalLight*
class CORDL_TYPE DirectionalLight : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field color, offset 0x18, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  /// @brief Field intensity, offset 0x28, size 0x4
  __declspec(property(get = __get_intensity, put = __set_intensity)) float_t intensity;

  /// @brief Field radius, offset 0x2c, size 0x4
  __declspec(property(get = __get_radius, put = __set_radius)) float_t radius;

  /// @brief Field _lights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lights, put = setStaticF__lights))::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* _lights;

  /// @brief Field _mainLight, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mainLight, put = setStaticF__mainLight))::GlobalNamespace::DirectionalLight* _mainLight;

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  constexpr float_t& __get_intensity();

  constexpr float_t const& __get_intensity() const;

  constexpr void __set_intensity(float_t value);

  constexpr float_t& __get_radius();

  constexpr float_t const& __get_radius() const;

  constexpr void __set_radius(float_t value);

  static inline void setStaticF__lights(::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* getStaticF__lights();

  static inline void setStaticF__mainLight(::GlobalNamespace::DirectionalLight* value);

  static inline ::GlobalNamespace::DirectionalLight* getStaticF__mainLight();

  /// @brief Method get_lights addr 0x210b294 size 0x58 virtual false final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* get_lights();

  /// @brief Method OnEnable addr 0x210b2ec size 0xd0 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x210b3bc size 0x80 virtual false final false
  inline void OnDisable();

  static inline ::GlobalNamespace::DirectionalLight* New_ctor();

  /// @brief Method .ctor addr 0x210b43c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLight(DirectionalLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLight(DirectionalLight const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLight();

public:
  /// @brief Field color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field intensity, offset: 0x28, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field radius, offset: 0x2c, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field kMaxLights offset 0xffffffff size 0x4
  static constexpr int32_t kMaxLights{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLight, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLight*, "", "DirectionalLight");
