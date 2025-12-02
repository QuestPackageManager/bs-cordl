#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectController
class CORDL_TYPE MainEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeValue, put = __cordl_internal_set__fadeValue)) ::UnityW<::GlobalNamespace::FloatSO> _fadeValue;

  /// @brief Field _imageEffectController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__imageEffectController, put = __cordl_internal_set__imageEffectController)) ::UnityW<::GlobalNamespace::ImageEffectController> _imageEffectController;

  /// @brief Field _mainEffectContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field afterImageEffectEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_afterImageEffectEvent,
                      put = __cordl_internal_set_afterImageEffectEvent)) ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* afterImageEffectEvent;

  __declspec(property(get = get_container)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> container;

  __declspec(property(get = get_fadeValue)) float_t fadeValue;

  /// @brief Method ImageEffectControllerCallback, addr 0x5d2d810, size 0x80, virtual false, abstract: false, final false
  inline void ImageEffectControllerCallback(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method LazySetupImageEffectController, addr 0x5d2d5b4, size 0x160, virtual false, abstract: false, final false
  inline void LazySetupImageEffectController();

  static inline ::GlobalNamespace::MainEffectController* New_ctor();

  /// @brief Method OnDisable, addr 0x5d2d714, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5d2d58c, size 0x28, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPostRender, addr 0x5d2d9bc, size 0x30, virtual false, abstract: false, final false
  inline void OnPostRender();

  /// @brief Method OnPreRender, addr 0x5d2d890, size 0xd0, virtual false, abstract: false, final false
  inline void OnPreRender();

  /// @brief Method OnValidate, addr 0x5d2d7a0, size 0x70, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__fadeValue() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__fadeValue();

  constexpr ::UnityW<::GlobalNamespace::ImageEffectController> const& __cordl_internal_get__imageEffectController() const;

  constexpr ::UnityW<::GlobalNamespace::ImageEffectController>& __cordl_internal_get__imageEffectController();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_afterImageEffectEvent() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_afterImageEffectEvent();

  constexpr void __cordl_internal_set__fadeValue(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__imageEffectController(::UnityW<::GlobalNamespace::ImageEffectController> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method .ctor, addr 0x5d2d9ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_afterImageEffectEvent, addr 0x5d2d3b4, size 0xc0, virtual false, abstract: false, final false
  inline void add_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method get_container, addr 0x5d2d584, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MainEffectContainerSO> get_container();

  /// @brief Method get_fadeValue, addr 0x5d2d534, size 0x50, virtual false, abstract: false, final false
  inline float_t get_fadeValue();

  /// @brief Method remove_afterImageEffectEvent, addr 0x5d2d474, size 0xc0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20760 };

  /// @brief Field _mainEffectContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _fadeValue, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____fadeValue;

  /// @brief Field afterImageEffectEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* ___afterImageEffectEvent;

  /// @brief Field _imageEffectController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImageEffectController> ____imageEffectController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectController, ____mainEffectContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____fadeValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ___afterImageEffectEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____imageEffectController) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectController*, "", "MainEffectController");
