#pragma once
// IWYU pragma private; include "GlobalNamespace/ImageEffectController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ImageEffectController)
namespace GlobalNamespace {
class ImageEffectController_RenderImageCallback;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class ImageEffectController;
}
namespace GlobalNamespace {
class ImageEffectController_RenderImageCallback;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImageEffectController);
MARK_REF_PTR_T(::GlobalNamespace::ImageEffectController_RenderImageCallback);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ImageEffectController/RenderImageCallback
class CORDL_TYPE ImageEffectController_RenderImageCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x39e3c34, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x39e3c5c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x39e3c20, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  static inline ::GlobalNamespace::ImageEffectController_RenderImageCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x39e3b1c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageEffectController_RenderImageCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController_RenderImageCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageEffectController_RenderImageCallback(ImageEffectController_RenderImageCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController_RenderImageCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageEffectController_RenderImageCallback(ImageEffectController_RenderImageCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImageEffectController_RenderImageCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ImageEffectController
class CORDL_TYPE ImageEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RenderImageCallback = ::GlobalNamespace::ImageEffectController_RenderImageCallback;

  /// @brief Field _renderImageCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__renderImageCallback,
                      put = __cordl_internal_set__renderImageCallback)) ::GlobalNamespace::ImageEffectController_RenderImageCallback* _renderImageCallback;

  static inline ::GlobalNamespace::ImageEffectController* New_ctor();

  /// @brief Method OnRenderImage, addr 0x39e3af8, size 0x1c, virtual false, abstract: false, final false
  inline void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method SetCallback, addr 0x39e3af0, size 0x8, virtual false, abstract: false, final false
  inline void SetCallback(::GlobalNamespace::ImageEffectController_RenderImageCallback* renderImageCallback);

  constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback* const& __cordl_internal_get__renderImageCallback() const;

  constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback*& __cordl_internal_get__renderImageCallback();

  constexpr void __cordl_internal_set__renderImageCallback(::GlobalNamespace::ImageEffectController_RenderImageCallback* value);

  /// @brief Method .ctor, addr 0x39e3b14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageEffectController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageEffectController(ImageEffectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageEffectController(ImageEffectController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16284 };

  /// @brief Field _renderImageCallback, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ImageEffectController_RenderImageCallback* ____renderImageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImageEffectController, ____renderImageCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImageEffectController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImageEffectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImageEffectController*, "", "ImageEffectController");
NEED_NO_BOX(::GlobalNamespace::ImageEffectController_RenderImageCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImageEffectController_RenderImageCallback*, "", "ImageEffectController/RenderImageCallback");
