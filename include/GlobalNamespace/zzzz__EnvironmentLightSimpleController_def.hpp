#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentLightSimpleController.hpp"
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
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentLightSimpleController
class CORDL_TYPE EnvironmentLightSimpleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__colorId, put = __cordl_internal_set__colorId)) int32_t _colorId;

  /// @brief Field _lightManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Method LateUpdate, addr 0x57d659c, size 0x28, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::EnvironmentLightSimpleController* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr int32_t const& __cordl_internal_get__colorId() const;

  constexpr int32_t& __cordl_internal_get__colorId();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorId(int32_t value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  /// @brief Method .ctor, addr 0x57d65c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentLightSimpleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentLightSimpleController(EnvironmentLightSimpleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentLightSimpleController(EnvironmentLightSimpleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5793 };

  /// @brief Field _color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorId, offset: 0x30, size: 0x4, def value: None
  int32_t ____colorId;

  /// @brief Field _lightManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentLightSimpleController, ____color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightSimpleController, ____colorId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightSimpleController, ____lightManager) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightSimpleController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightSimpleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightSimpleController*, "", "EnvironmentLightSimpleController");
