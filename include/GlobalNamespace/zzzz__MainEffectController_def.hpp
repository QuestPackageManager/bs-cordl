#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MainEffectController)
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectRenderData;
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
MARK_REF_T(::GlobalNamespace::MainEffectController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectController*, "", "MainEffectController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectController
class CORDL_TYPE MainEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeValue, put = __cordl_internal_set__fadeValue)) ::UnityW<::GlobalNamespace::FloatSO> _fadeValue;

  /// @brief Field _mainEffectContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _mainEffectRenderData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectRenderData, put = __cordl_internal_set__mainEffectRenderData)) ::GlobalNamespace::MainEffectRenderData* _mainEffectRenderData;

  /// @brief Field afterImageEffectEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_afterImageEffectEvent,
                      put = __cordl_internal_set_afterImageEffectEvent)) ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* afterImageEffectEvent;

  __declspec(property(get = get_container)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> container;

  __declspec(property(get = get_fadeValue)) float_t fadeValue;

  __declspec(property(get = get_renderData)) ::GlobalNamespace::MainEffectRenderData* renderData;

  static inline ::GlobalNamespace::MainEffectController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__fadeValue() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__fadeValue();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::GlobalNamespace::MainEffectRenderData* const& __cordl_internal_get__mainEffectRenderData() const;

  constexpr ::GlobalNamespace::MainEffectRenderData*& __cordl_internal_get__mainEffectRenderData();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_afterImageEffectEvent() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_afterImageEffectEvent();

  constexpr void __cordl_internal_set__fadeValue(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set__mainEffectRenderData(::GlobalNamespace::MainEffectRenderData* value);

  constexpr void __cordl_internal_set_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method .ctor, addr 0x5f43074, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_afterImageEffectEvent, addr 0x5f42e9c, size 0xc0, virtual false, abstract: false, final false
  inline void add_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method get_container, addr 0x5f4306c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MainEffectContainerSO> get_container();

  /// @brief Method get_fadeValue, addr 0x5f4301c, size 0x50, virtual false, abstract: false, final false
  inline float_t get_fadeValue();

  /// @brief Method get_renderData, addr 0x5f42e94, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MainEffectRenderData* get_renderData();

  /// @brief Method remove_afterImageEffectEvent, addr 0x5f42f5c, size 0xc0, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20633 };

  /// @brief Field _mainEffectContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _fadeValue, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____fadeValue;

  /// @brief Field _mainEffectRenderData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectRenderData* ____mainEffectRenderData;

  /// @brief Field afterImageEffectEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* ___afterImageEffectEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectController, ____mainEffectContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____fadeValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ____mainEffectRenderData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectController, ___afterImageEffectEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectController) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
