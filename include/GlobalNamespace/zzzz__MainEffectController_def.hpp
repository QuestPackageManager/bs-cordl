#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainEffectController)
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class ImageEffectController;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectController);
// Type: ::MainEffectController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainEffectController*
class CORDL_TYPE MainEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeValue, put = __cordl_internal_set__fadeValue))::UnityW<::GlobalNamespace::FloatSO> _fadeValue;

  /// @brief Field _imageEffectController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__imageEffectController, put = __cordl_internal_set__imageEffectController))::UnityW<::GlobalNamespace::ImageEffectController> _imageEffectController;

  /// @brief Field _mainEffectContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer))::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field afterImageEffectEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_afterImageEffectEvent,
                      put = __cordl_internal_set_afterImageEffectEvent))::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* afterImageEffectEvent;

  /// @brief Method ImageEffectControllerCallback, addr 0x2bd4aa8, size 0xa4, virtual false, abstract: false, final false
  inline void ImageEffectControllerCallback(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method LazySetupImageEffectController, addr 0x2bd487c, size 0x154, virtual false, abstract: false, final false
  inline void LazySetupImageEffectController();

  static inline ::GlobalNamespace::MainEffectController* New_ctor();

  /// @brief Method OnDisable, addr 0x2bd49d0, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2bd4854, size 0x28, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPostRender, addr 0x2bd4c08, size 0x6c, virtual false, abstract: false, final false
  inline void OnPostRender();

  /// @brief Method OnPreRender, addr 0x2bd4b4c, size 0xbc, virtual false, abstract: false, final false
  inline void OnPreRender();

  /// @brief Method OnValidate, addr 0x2bd4a58, size 0x50, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__fadeValue() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__fadeValue();

  constexpr ::UnityW<::GlobalNamespace::ImageEffectController> const& __cordl_internal_get__imageEffectController() const;

  constexpr ::UnityW<::GlobalNamespace::ImageEffectController>& __cordl_internal_get__imageEffectController();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_afterImageEffectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_afterImageEffectEvent() const;

  constexpr void __cordl_internal_set__fadeValue(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__imageEffectController(::UnityW<::GlobalNamespace::ImageEffectController> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method .ctor, addr 0x2bd4c74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_afterImageEffectEvent, addr 0x2bd46f4, size 0xb0, virtual false, abstract: false, final false
  inline void add_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method remove_afterImageEffectEvent, addr 0x2bd47a4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectController(MainEffectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectController(MainEffectController const&) = delete;

  /// @brief Field _mainEffectContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _fadeValue, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____fadeValue;

  /// @brief Field afterImageEffectEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* ___afterImageEffectEvent;

  /// @brief Field _imageEffectController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImageEffectController> ____imageEffectController;

  /// @brief Field kMainEffectEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainEffectEnabledKeyword{ u"MAIN_EFFECT_ENABLED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____mainEffectContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____fadeValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ___afterImageEffectEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____imageEffectController) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectController*, "", "MainEffectController");
