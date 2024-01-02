#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentLightSimpleController)
namespace GlobalNamespace {
class LightWithIdManager;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightSimpleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentLightSimpleController);
// Type: ::EnvironmentLightSimpleController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4866))
// CS Name: ::EnvironmentLightSimpleController*
class CORDL_TYPE EnvironmentLightSimpleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x18, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _colorId, offset 0x28, size 0x4
  __declspec(property(get = __get__colorId, put = __set__colorId)) int32_t _colorId;

  /// @brief Field _lightManager, offset 0x30, size 0x8
  __declspec(property(get = __get__lightManager, put = __set__lightManager))::GlobalNamespace::LightWithIdManager* _lightManager;

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr int32_t& __get__colorId();

  constexpr int32_t const& __get__colorId() const;

  constexpr void __set__colorId(int32_t value);

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightManager() const;

  constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager* value);

  /// @brief Method LateUpdate, addr 0x239a28c, size 0x2c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::EnvironmentLightSimpleController* New_ctor();

  /// @brief Method .ctor, addr 0x239a2b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentLightSimpleController(EnvironmentLightSimpleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentLightSimpleController(EnvironmentLightSimpleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentLightSimpleController();

public:
  /// @brief Field _color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorId, offset: 0x28, size: 0x4, def value: None
  int32_t ____colorId;

  /// @brief Field _lightManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightSimpleController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightSimpleController, ____color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightSimpleController, ____colorId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightSimpleController, ____lightManager) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightSimpleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightSimpleController*, "", "EnvironmentLightSimpleController");
