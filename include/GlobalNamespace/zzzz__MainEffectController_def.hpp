#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainEffectController)
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class ImageEffectController;
}
namespace GlobalNamespace {
class FloatSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15320))
// CS Name: ::MainEffectController*
class CORDL_TYPE MainEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainEffectContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__mainEffectContainer, put = __set__mainEffectContainer))::GlobalNamespace::MainEffectContainerSO* _mainEffectContainer;

  /// @brief Field _fadeValue, offset 0x20, size 0x8
  __declspec(property(get = __get__fadeValue, put = __set__fadeValue))::GlobalNamespace::FloatSO* _fadeValue;

  /// @brief Field afterImageEffectEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_afterImageEffectEvent, put = __set_afterImageEffectEvent))::System::Action_1<::UnityEngine::RenderTexture*>* afterImageEffectEvent;

  /// @brief Field _imageEffectController, offset 0x30, size 0x8
  __declspec(property(get = __get__imageEffectController, put = __set__imageEffectController))::GlobalNamespace::ImageEffectController* _imageEffectController;

  constexpr ::GlobalNamespace::MainEffectContainerSO*& __get__mainEffectContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectContainerSO*> const& __get__mainEffectContainer() const;

  constexpr void __set__mainEffectContainer(::GlobalNamespace::MainEffectContainerSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get__fadeValue();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__fadeValue() const;

  constexpr void __set__fadeValue(::GlobalNamespace::FloatSO* value);

  constexpr ::System::Action_1<::UnityEngine::RenderTexture*>*& __get_afterImageEffectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::RenderTexture*>*> const& __get_afterImageEffectEvent() const;

  constexpr void __set_afterImageEffectEvent(::System::Action_1<::UnityEngine::RenderTexture*>* value);

  constexpr ::GlobalNamespace::ImageEffectController*& __get__imageEffectController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImageEffectController*> const& __get__imageEffectController() const;

  constexpr void __set__imageEffectController(::GlobalNamespace::ImageEffectController* value);

  /// @brief Method add_afterImageEffectEvent addr 0x268d7b0 size 0xb0 virtual false final false
  inline void add_afterImageEffectEvent(::System::Action_1<::UnityEngine::RenderTexture*>* value);

  /// @brief Method remove_afterImageEffectEvent addr 0x268d860 size 0xb0 virtual false final false
  inline void remove_afterImageEffectEvent(::System::Action_1<::UnityEngine::RenderTexture*>* value);

  /// @brief Method OnEnable addr 0x268d910 size 0x28 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x268da8c size 0x88 virtual false final false
  inline void OnDisable();

  /// @brief Method OnValidate addr 0x268db14 size 0x50 virtual false final false
  inline void OnValidate();

  /// @brief Method LazySetupImageEffectController addr 0x268d938 size 0x154 virtual false final false
  inline void LazySetupImageEffectController();

  /// @brief Method ImageEffectControllerCallback addr 0x268db64 size 0xb0 virtual false final false
  inline void ImageEffectControllerCallback(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method OnPreRender addr 0x268dc14 size 0xbc virtual false final false
  inline void OnPreRender();

  /// @brief Method OnPostRender addr 0x268dcd0 size 0x6c virtual false final false
  inline void OnPostRender();

  static inline ::GlobalNamespace::MainEffectController* New_ctor();

  /// @brief Method .ctor addr 0x268dd3c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectController(MainEffectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectController(MainEffectController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectController();

public:
  /// @brief Field _mainEffectContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectContainerSO* ____mainEffectContainer;

  /// @brief Field _fadeValue, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____fadeValue;

  /// @brief Field afterImageEffectEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::RenderTexture*>* ___afterImageEffectEvent;

  /// @brief Field _imageEffectController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ImageEffectController* ____imageEffectController;

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
