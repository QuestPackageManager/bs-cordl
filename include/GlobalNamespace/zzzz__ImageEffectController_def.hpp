#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageEffectController)
namespace GlobalNamespace {
class __ImageEffectController__RenderImageCallback;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
class __ImageEffectController__RenderImageCallback;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImageEffectController);
MARK_REF_PTR_T(::GlobalNamespace::__ImageEffectController__RenderImageCallback);
// Type: ::RenderImageCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14500))
// CS Name: ::ImageEffectController::RenderImageCallback*
class CORDL_TYPE __ImageEffectController__RenderImageCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__ImageEffectController__RenderImageCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x210c198, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x210c2c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method BeginInvoke, addr 0x210c2dc, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x210c304, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ImageEffectController__RenderImageCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImageEffectController__RenderImageCallback(__ImageEffectController__RenderImageCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImageEffectController__RenderImageCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImageEffectController__RenderImageCallback(__ImageEffectController__RenderImageCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImageEffectController__RenderImageCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImageEffectController__RenderImageCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ImageEffectController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14501))
// CS Name: ::ImageEffectController*
class CORDL_TYPE ImageEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RenderImageCallback = ::GlobalNamespace::__ImageEffectController__RenderImageCallback;

  /// @brief Field _renderImageCallback, offset 0x18, size 0x8
  __declspec(property(get = __get__renderImageCallback, put = __set__renderImageCallback))::GlobalNamespace::__ImageEffectController__RenderImageCallback* _renderImageCallback;

  constexpr ::GlobalNamespace::__ImageEffectController__RenderImageCallback*& __get__renderImageCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImageEffectController__RenderImageCallback*> const& __get__renderImageCallback() const;

  constexpr void __set__renderImageCallback(::GlobalNamespace::__ImageEffectController__RenderImageCallback* value);

  /// @brief Method SetCallback, addr 0x210c16c, size 0x8, virtual false, abstract: false, final false
  inline void SetCallback(::GlobalNamespace::__ImageEffectController__RenderImageCallback* renderImageCallback);

  /// @brief Method OnRenderImage, addr 0x210c174, size 0x1c, virtual false, abstract: false, final false
  inline void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  static inline ::GlobalNamespace::ImageEffectController* New_ctor();

  /// @brief Method .ctor, addr 0x210c190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageEffectController(ImageEffectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageEffectController(ImageEffectController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageEffectController();

public:
  /// @brief Field _renderImageCallback, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__ImageEffectController__RenderImageCallback* ____renderImageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImageEffectController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageEffectController, ____renderImageCallback) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImageEffectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImageEffectController*, "", "ImageEffectController");
NEED_NO_BOX(::GlobalNamespace::__ImageEffectController__RenderImageCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImageEffectController__RenderImageCallback*, "", "ImageEffectController/RenderImageCallback");
