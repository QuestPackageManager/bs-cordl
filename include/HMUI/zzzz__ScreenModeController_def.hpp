#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScreenModeController)
namespace HMUI {
class ScreenModeData;
}
namespace HMUI {
class CurvedCanvasSettings;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13591))
// CS Name: ::HMUI::ScreenModeController*
class CORDL_TYPE ScreenModeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _curvedCanvases, offset 0x18, size 0x8
  __declspec(property(get = __get__curvedCanvases, put = __set__curvedCanvases))::ArrayW<::HMUI::CurvedCanvasSettings*, ::Array<::HMUI::CurvedCanvasSettings*>*> _curvedCanvases;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _defaultModeData, offset 0x28, size 0x8
  __declspec(property(get = __get__defaultModeData, put = __set__defaultModeData))::HMUI::ScreenModeData* _defaultModeData;

  /// @brief Field _transform, offset 0x30, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::ArrayW<::HMUI::CurvedCanvasSettings*, ::Array<::HMUI::CurvedCanvasSettings*>*>& __get__curvedCanvases();

  constexpr ::ArrayW<::HMUI::CurvedCanvasSettings*, ::Array<::HMUI::CurvedCanvasSettings*>*> const& __get__curvedCanvases() const;

  constexpr void __set__curvedCanvases(::ArrayW<::HMUI::CurvedCanvasSettings*, ::Array<::HMUI::CurvedCanvasSettings*>*> value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::HMUI::ScreenModeData*& __get__defaultModeData();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> const& __get__defaultModeData() const;

  constexpr void __set__defaultModeData(::HMUI::ScreenModeData* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Awake, addr 0x212c274, size 0x144, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetMode, addr 0x212c450, size 0x214, virtual false, abstract: false, final false
  inline void SetMode(::HMUI::ScreenModeData* screenModeData);

  /// @brief Method SetDefaultMode, addr 0x212c664, size 0x8, virtual false, abstract: false, final false
  inline void SetDefaultMode();

  static inline ::HMUI::ScreenModeController* New_ctor();

  /// @brief Method .ctor, addr 0x212c66c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenModeController(ScreenModeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenModeController(ScreenModeController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenModeController();

public:
  /// @brief Field _curvedCanvases, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::HMUI::CurvedCanvasSettings*, ::Array<::HMUI::CurvedCanvasSettings*>*> ____curvedCanvases;

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _defaultModeData, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ScreenModeData* ____defaultModeData;

  /// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

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
