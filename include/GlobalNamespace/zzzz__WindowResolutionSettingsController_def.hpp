#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowResolutionSettingsController)
namespace GlobalNamespace {
class Vector2IntSO;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class WindowResolutionSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WindowResolutionSettingsController);
// Type: ::WindowResolutionSettingsController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16289))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4916))
// CS Name: ::WindowResolutionSettingsController*
class CORDL_TYPE WindowResolutionSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _windowResolution, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__windowResolution, put = __cordl_internal_set__windowResolution))::UnityW<::GlobalNamespace::Vector2IntSO> _windowResolution;

  /// @brief Field _windowResolutions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__windowResolutions,
                      put = __cordl_internal_set__windowResolutions))::ArrayW<::UnityEngine::Vector2Int, ::Array<::UnityEngine::Vector2Int>*> _windowResolutions;

  constexpr ::UnityW<::GlobalNamespace::Vector2IntSO>& __cordl_internal_get__windowResolution();

  constexpr ::UnityW<::GlobalNamespace::Vector2IntSO> const& __cordl_internal_get__windowResolution() const;

  constexpr void __cordl_internal_set__windowResolution(::UnityW<::GlobalNamespace::Vector2IntSO> value);

  constexpr ::ArrayW<::UnityEngine::Vector2Int, ::Array<::UnityEngine::Vector2Int>*>& __cordl_internal_get__windowResolutions();

  constexpr ::ArrayW<::UnityEngine::Vector2Int, ::Array<::UnityEngine::Vector2Int>*> const& __cordl_internal_get__windowResolutions() const;

  constexpr void __cordl_internal_set__windowResolutions(::ArrayW<::UnityEngine::Vector2Int, ::Array<::UnityEngine::Vector2Int>*> value);

  /// @brief Method GetInitValues, addr 0x22df7a4, size 0x214, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue, addr 0x22df9b8, size 0x74, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue, addr 0x22dfa2c, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::WindowResolutionSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x22dfaf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindowResolutionSettingsController(WindowResolutionSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindowResolutionSettingsController(WindowResolutionSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowResolutionSettingsController();

public:
  /// @brief Field _windowResolution, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector2IntSO> ____windowResolution;

  /// @brief Field _windowResolutions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2Int, ::Array<::UnityEngine::Vector2Int>*> ____windowResolutions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WindowResolutionSettingsController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WindowResolutionSettingsController, ____windowResolution) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindowResolutionSettingsController, ____windowResolutions) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WindowResolutionSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindowResolutionSettingsController*, "", "WindowResolutionSettingsController");
