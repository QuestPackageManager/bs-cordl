#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScreenModeController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace HMUI {
class CurvedCanvasSettings;
}
namespace HMUI {
class ScreenModeData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class ScreenModeController;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScreenModeController);
// Type: HMUI::ScreenModeController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScreenModeController*
class CORDL_TYPE ScreenModeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _curvedCanvases, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedCanvases,
                      put = __cordl_internal_set__curvedCanvases))::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*> _curvedCanvases;

  /// @brief Field _defaultModeData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultModeData, put = __cordl_internal_set__defaultModeData))::HMUI::ScreenModeData* _defaultModeData;

  /// @brief Field _transform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Method Awake, addr 0x240d498, size 0x144, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::HMUI::ScreenModeController* New_ctor();

  /// @brief Method SetDefaultMode, addr 0x240d888, size 0x8, virtual false, abstract: false, final false
  inline void SetDefaultMode();

  /// @brief Method SetMode, addr 0x240d674, size 0x214, virtual false, abstract: false, final false
  inline void SetMode(::HMUI::ScreenModeData* screenModeData);

  constexpr ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*> const& __cordl_internal_get__curvedCanvases() const;

  constexpr ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*>& __cordl_internal_get__curvedCanvases();

  constexpr ::HMUI::ScreenModeData*& __cordl_internal_get__defaultModeData();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> const& __cordl_internal_get__defaultModeData() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__curvedCanvases(::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*> value);

  constexpr void __cordl_internal_set__defaultModeData(::HMUI::ScreenModeData* value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x240d890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenModeController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenModeController(ScreenModeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenModeController(ScreenModeController const&) = delete;

  /// @brief Field _curvedCanvases, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>, ::Array<::UnityW<::HMUI::CurvedCanvasSettings>>*> ____curvedCanvases;

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _defaultModeData, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ScreenModeData* ____defaultModeData;

  /// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScreenModeController, 0x38>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScreenModeController, ____curvedCanvases) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeController, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeController, ____defaultModeData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeController, ____transform) == 0x30, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScreenModeController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeController*, "HMUI", "ScreenModeController");
